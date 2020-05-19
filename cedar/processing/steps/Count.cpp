/*======================================================================================================================

    Copyright 2011, 2012, 2013, 2014, 2015, 2016, 2017 Institut fuer Neuroinformatik, Ruhr-Universitaet Bochum, Germany
 
    This file is part of cedar.

    cedar is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the
    Free Software Foundation, either version 3 of the License, or (at your
    option) any later version.

    cedar is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
    License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with cedar. If not, see <http://www.gnu.org/licenses/>.

========================================================================================================================

    Institute:   Ruhr-Universitaet Bochum
                 Institut fuer Neuroinformatik

    File:        Count.cpp

    Maintainer:  jokeit
    Email:       jean-stephane.jokeit@ini.ruhr-uni-bochum.de
    Date:        2017 12 04

    Description: Source file for the class cedar::proc::steps::Count.

    Credits:

======================================================================================================================*/

// CEDAR CONFIGURATION
#include "cedar/configuration.h"

// CLASS HEADER
#include "cedar/processing/steps/Count.h"

// CEDAR INCLUDES
#include "cedar/processing/typecheck/IsMatrix.h"
#include <cedar/processing/ElementDeclaration.h>

// SYSTEM INCLUDES

//----------------------------------------------------------------------------------------------------------------------
// register the class
//----------------------------------------------------------------------------------------------------------------------
namespace
{
bool declare()
{
  using cedar::proc::ElementDeclarationPtr;
  using cedar::proc::ElementDeclarationTemplate;

  ElementDeclarationPtr declaration
  (
    new ElementDeclarationTemplate<cedar::proc::steps::Count>
    (
      "Programming",
      "cedar.processing.steps.Count"
    )
  );

  declaration->setIconPath(":/steps/count_larger.svg");
  declaration->deprecatedName("cedar.processing.steps.CountLarger");
  declaration->setDescription
  (
    "Count the number of entries int the input that are larger than the given "
    "threshold. Useful for debugging, for example to find the number of active "
    "elements in a field. TODO: add options for smaller-than, equal, etc."
  );

  declaration->declare();

  return true;
}

bool declared = declare();
}

//----------------------------------------------------------------------------------------------------------------------
// constructors and destructor
//----------------------------------------------------------------------------------------------------------------------

cedar::proc::steps::Count::Count()
:
// outputs
mOutput(new cedar::aux::MatData(cv::Mat::zeros(1,1,CV_32F))),
mThreshold(new cedar::aux::DoubleParameter(this, "threshold", 0.0))
{
  // declare all data
  cedar::proc::DataSlotPtr input = this->declareInput("input");
  this->declareOutput("output", mOutput);

  input->setCheck(cedar::proc::typecheck::IsMatrix());

  QObject::connect(mThreshold.get(), SIGNAL(valueChanged()), this, SLOT(updateThreshold()));
}

//----------------------------------------------------------------------------------------------------------------------
// methods
//----------------------------------------------------------------------------------------------------------------------
void cedar::proc::steps::Count::updateThreshold()
{
  recompute();
}

void cedar::proc::steps::Count::inputConnectionChanged(const std::string& inputName)
{
  // TODO: you may want to replace this code by using a cedar::proc::InputSlotHelper

  // Again, let's first make sure that this is really the input in case anyone ever changes our interface.
  CEDAR_DEBUG_ASSERT(inputName == "input");

  // Assign the input to the member. This saves us from casting in every computation step.
  this->mInput = boost::dynamic_pointer_cast<const cedar::aux::MatData>(this->getInput(inputName));

  bool output_changed = false;
  if (!this->mInput)
  {
    // no input -> no output
    this->mOutput->setData(cv::Mat::zeros(1,1,CV_32F));
    output_changed = true;
  }
  else
  {
    // Let's get a reference to the input matrix.
    const cv::Mat& input = this->mInput->getData();

    // check if the input is different from the output
    if (input.type() != this->mOutput->getData().type() || input.size != this->mOutput->getData().size)
    {
      output_changed = true;
    }

    // Make a copy to create a matrix of the same type, dimensions, ...
    this->recompute();
  }

  if (output_changed)
  {
    this->emitOutputPropertiesChangedSignal("output");
  }
}

void cedar::proc::steps::Count::compute(const cedar::proc::Arguments&)
{
  this->recompute();
}

void cedar::proc::steps::Count::recompute()
{
  auto input = getInput("input");

  if (!input)
    return;

  auto data = boost::dynamic_pointer_cast<const cedar::aux::MatData>(input);

  if (!data)
    return;
 
  cv::Mat mat = data->getData();

  float threshold = mThreshold->getValue();
  int ret= 0;

#if 0
  if (cedar::aux::math::isZero(threshold)) // think of numeric precision
  {
    ret= cv::countNonZero( mat );
  }
  else
#endif    
  if (mat.empty())
  {
    ret= 0;
  }
  else
  {
    // row needs to be outer loop for better caching
    for(int j= 0; j < mat.rows; j++)
    {
      for(int i=0; i < mat.cols; i++)
      {
        if (mat.at<float>(j, i) > threshold + 1e-8)
        {
          ret++;
        }
      }
    }
    // TODO multi-dim arrays
  }
 
  this->mOutput->getData().at<float>(0,0)= static_cast<float>(ret);
}

