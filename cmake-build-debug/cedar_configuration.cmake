#=======================================================================================================================
#
#    Copyright 2011, 2012, 2013, 2014, 2015, 2016, 2017 Institut fuer Neuroinformatik, Ruhr-Universitaet Bochum, Germany
#
#    This file is part of cedar.
#
#    cedar is free software: you can redistribute it and/or modify it under
#    the terms of the GNU Lesser General Public License as published by the
#    Free Software Foundation, either version 3 of the License, or (at your
#    option) any later version.
#
#    cedar is distributed in the hope that it will be useful, but WITHOUT ANY
#    WARRANTY; without even the implied warranty of MERCHANTABILITY or
#    FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
#    License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with cedar. If not, see <http://www.gnu.org/licenses/>.
#
#=======================================================================================================================
#
#    Institute:   Ruhr-Universitaet Bochum
#                 Institut fuer Neuroinformatik
#
#    File:        cedar_configuration.cmake
#
#    Maintainer:  Stephan Zibner
#    Email:       stephan.zibner@ini.ruhr-uni-bochum.de
#    Date:        2013 07 31
#
#    Description: This file is autogenerated from the cedar_configuration.cmake.in in the cedar/cmake/resources 
#                 directory. Do not change the automatically generated files!
#                 
#                 The purpose of this file is to expose include and link directories to external projects.
#
#    Credits:
#
#=======================================================================================================================

set(CEDAR_CONF_FILE /home/work/CLionProjects/cedar/cedar.conf CACHE FILEPATH "Default configuration file of cedar.")
# check if the config file exists
if (NOT EXISTS /home/work/CLionProjects/cedar/cedar.conf)
  message(FATAL_ERROR "The cedar.conf file could not be found. Please create it, e.g., by copying cedar.conf.example to /home/work/CLionProjects/cedar/cedar.conf and filling out the proper values.")
endif(NOT EXISTS /home/work/CLionProjects/cedar/cedar.conf)

message (STATUS "including /home/work/CLionProjects/cedar/cedar.conf configuration file")
include(/home/work/CLionProjects/cedar/cedar.conf)
if(NOT CEDAR_USE_QT5)
  find_package(Qt4 4.6.0 COMPONENTS QtCore QtGui QtOpenGL QtXml QtSvg REQUIRED)
else(NOT CEDAR_USE_QT5)
  set(CMAKE_MODULE_PATH /home/work/CLionProjects/cedar/cmake/findScripts)
  find_package(QT57)
endif(NOT CEDAR_USE_QT5)

if(QT4_FOUND AND NOT CEDAR_USE_QT5)
  include()
endif(QT4_FOUND AND NOT CEDAR_USE_QT5)

if(QT5_FOUND)
  include_directories(/opt/qt512/include/;/opt/qt512/include/QtWidgets;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include /opt/qt512/include/;/opt/qt512/include/QtCharts;/opt/qt512/include/QtWidgets;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include /opt/qt512/include/;/opt/qt512/include/QtDataVisualization;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include /opt/qt512/include/;/opt/qt512/include/Qt3DCore;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include;/opt/qt512/include/QtNetwork /opt/qt512/include/;/opt/qt512/include/Qt3DExtras;/opt/qt512/include/Qt3DRender;/opt/qt512/include/Qt3DCore;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include;/opt/qt512/include/QtNetwork;/opt/qt512/include/Qt3DInput;/opt/qt512/include/Qt3DLogic /opt/qt512/include/;/opt/qt512/include/Qt3DInput;/opt/qt512/include/Qt3DCore;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include;/opt/qt512/include/QtNetwork /opt/qt512/include/;/opt/qt512/include/Qt3DLogic;/opt/qt512/include/Qt3DCore;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include;/opt/qt512/include/QtNetwork /opt/qt512/include/;/opt/qt512/include/Qt3DRender;/opt/qt512/include/Qt3DCore;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include;/opt/qt512/include/QtNetwork /opt/qt512/include/;/opt/qt512/include/QtSvg;/opt/qt512/include/QtWidgets;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include /opt/qt512/include/;/opt/qt512/include/QtOpenGL;/opt/qt512/include/QtWidgets;/opt/qt512/include/QtGui;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++;/usr/include /opt/qt512/include/;/opt/qt512/include/QtXml;/opt/qt512/include/QtCore;/opt/qt512/.//mkspecs/linux-g++)
endif(QT5_FOUND)

# Include directories for cedar's dependencies
include_directories(/usr/include;/usr/include;/usr/include/opencv;/usr/include)

set(CEDAR_OPENCV_CMAKE_DIR /usr/share/OpenCV)

set(CEDAR_EXTERNAL_LIBS Qt5::Widgets;Qt5::PrintSupport;Qt5::OpenGL;Qt5::Charts;Qt5::DataVisualization;Qt5::3DCore;Qt5::3DExtras;Qt5::3DInput;Qt5::3DLogic;Qt5::3DRender;Qt5::OpenGL;Qt5::Xml;Qt5::Svg;Qt5::Concurrent;/usr/lib/x86_64-linux-gnu/libboost_system.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_regex.so;opencv_calib3d;opencv_core;opencv_features2d;opencv_flann;opencv_highgui;opencv_imgcodecs;opencv_imgproc;opencv_ml;opencv_objdetect;opencv_photo;opencv_shape;opencv_stitching;opencv_superres;opencv_video;opencv_videoio;opencv_videostab;opencv_viz;opencv_aruco;opencv_bgsegm;opencv_bioinspired;opencv_ccalib;opencv_datasets;opencv_dpm;opencv_face;opencv_freetype;opencv_fuzzy;opencv_hdf;opencv_line_descriptor;opencv_optflow;opencv_phase_unwrapping;opencv_plot;opencv_reg;opencv_rgbd;opencv_saliency;opencv_stereo;opencv_structured_light;opencv_surface_matching;opencv_text;opencv_ximgproc;opencv_xobjdetect;opencv_xphoto;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/lib/x86_64-linux-gnu/libfftw3.so;/usr/lib/x86_64-linux-gnu/libfftw3_omp.so;m;/usr/lib/x86_64-linux-gnu/libdc1394.so )
