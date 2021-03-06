# CMake generated Testfile for 
# Source directory: /home/work/CLionProjects/cedar
# Build directory: /home/work/CLionProjects/cedar/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
subdirs("cedar/auxiliaries")
subdirs("cedar/devices")
subdirs("cedar/dynamics")
subdirs("cedar/processing")
subdirs("cedar/testingUtilities")
subdirs("cedar/units")
subdirs("tests/unit/auxiliaries/ArithmeticExpression")
subdirs("tests/unit/auxiliaries/Backtrace")
subdirs("tests/unit/auxiliaries/CTestTest")
subdirs("tests/unit/auxiliaries/Configurable")
subdirs("tests/unit/auxiliaries/DataTable")
subdirs("tests/unit/auxiliaries/LocalCoordinateFrame")
subdirs("tests/unit/auxiliaries/Lockable")
subdirs("tests/unit/auxiliaries/Log")
subdirs("tests/unit/auxiliaries/LoopFunctionInThread")
subdirs("tests/unit/auxiliaries/LoopedThread")
subdirs("tests/unit/auxiliaries/MapParameter")
subdirs("tests/unit/auxiliaries/MatDataSerialization")
subdirs("tests/unit/auxiliaries/MovingAverage")
subdirs("tests/unit/auxiliaries/NamedConfigurable")
subdirs("tests/unit/auxiliaries/ObjectListParameter")
subdirs("tests/unit/auxiliaries/ObjectMapParameter")
subdirs("tests/unit/auxiliaries/ObjectParameter")
subdirs("tests/unit/auxiliaries/ParameterFactory")
subdirs("tests/unit/auxiliaries/ParameterLinking")
subdirs("tests/unit/auxiliaries/Path")
subdirs("tests/unit/auxiliaries/PathTemplate")
subdirs("tests/unit/auxiliaries/Recorder")
subdirs("tests/unit/auxiliaries/Singleton")
subdirs("tests/unit/auxiliaries/SleepFunctions")
subdirs("tests/unit/auxiliaries/StringFunctions")
subdirs("tests/unit/auxiliaries/StringParameter")
subdirs("tests/unit/auxiliaries/SystemFunctions")
subdirs("tests/unit/auxiliaries/ThreadingUtilities")
subdirs("tests/unit/auxiliaries/TypeHierarchyMap")
subdirs("tests/unit/auxiliaries/UnitParameter")
subdirs("tests/unit/auxiliaries/UnmangleTest")
subdirs("tests/unit/auxiliaries/VersionMacros")
subdirs("tests/unit/auxiliaries/net")
subdirs("tests/unit/devices/Component")
subdirs("tests/unit/devices/ComponentChannelSharing")
subdirs("tests/unit/devices/Robot")
subdirs("tests/unit/devices/RobotConfiguration")
subdirs("tests/unit/devices/SimulatedKinematicChain")
subdirs("tests/unit/dynamics/Dynamics")
subdirs("tests/unit/dynamics/NeuralField")
subdirs("tests/unit/processing/ArchitectureIO")
subdirs("tests/unit/processing/Connecting")
subdirs("tests/unit/processing/Group")
subdirs("tests/unit/processing/GroupOnStartStop")
subdirs("tests/unit/processing/GroupPath")
subdirs("tests/unit/processing/GroupTriggerChains")
subdirs("tests/unit/processing/ListenerManagement")
subdirs("tests/unit/processing/ProcessingSteps")
subdirs("tests/unit/processing/ProjectionMapping")
subdirs("tests/unit/processing/Step")
subdirs("tests/unit/processing/StepDataLocking")
subdirs("tests/unit/processing/StepParameterLinking")
subdirs("tests/unit/processing/TriggerChains")
subdirs("tests/unit/processing/TypeCheck")
subdirs("tests/unit/units/UnitMatrix")
subdirs("tests/interactive/auxiliaries/gl")
subdirs("tests/interactive/devices/AmtecSpeedControl")
subdirs("tests/interactive/devices/kuka")
subdirs("tests/interactive/processing/LeakTest")
subdirs("tests/performance/auxiliaries/LoopedThreadPerformance")
subdirs("tests/performance/auxiliaries/RecorderPerformance")
subdirs("tests/performance/auxiliaries/Sigmoid_perf")
subdirs("tests/performance/auxiliaries/netPerformance")
subdirs("tests/performance/dynamics/NeuralField_perf")
subdirs("tests/performance/processing/perf_ComponentMultiply")
subdirs("tests/performance/processing/perf_Projection")
subdirs("tests/unit/auxiliaries/convolution/ConvolutionEngine")
subdirs("tests/unit/auxiliaries/convolution/FFTW")
subdirs("tests/unit/auxiliaries/gl/Block")
subdirs("tests/unit/auxiliaries/gl/Chessboard")
subdirs("tests/unit/auxiliaries/gl/Cone")
subdirs("tests/unit/auxiliaries/gl/Cylinder")
subdirs("tests/unit/auxiliaries/gl/Ellipse")
subdirs("tests/unit/auxiliaries/gl/ObjectVisualization")
subdirs("tests/unit/auxiliaries/gl/Prism")
subdirs("tests/unit/auxiliaries/gl/Pyramid")
subdirs("tests/unit/auxiliaries/gl/Sphere")
subdirs("tests/unit/auxiliaries/gl/Torus")
subdirs("tests/unit/auxiliaries/gui/gui_ImagePlot")
subdirs("tests/unit/auxiliaries/gui/gui_MatrixPlotsBasics")
subdirs("tests/unit/auxiliaries/gui/gui_NumericParameter")
subdirs("tests/unit/auxiliaries/gui/gui_NumericVectorParameter")
subdirs("tests/unit/auxiliaries/gui/gui_StringParameter")
subdirs("tests/unit/auxiliaries/gui/gui_VectorParameter")
subdirs("tests/unit/auxiliaries/kernel/Kernel")
subdirs("tests/unit/auxiliaries/math/Limits")
subdirs("tests/unit/auxiliaries/math/LimitsParameter")
subdirs("tests/unit/auxiliaries/math/algebraTools")
subdirs("tests/unit/auxiliaries/math/coordinateTransformations")
subdirs("tests/unit/auxiliaries/math/screwCalculus")
subdirs("tests/unit/auxiliaries/math/sigmoids")
subdirs("tests/unit/auxiliaries/math/tools")
subdirs("tests/unit/auxiliaries/parameters/FileParameter")
subdirs("tests/unit/auxiliaries/parameters/NumericParameter")
subdirs("tests/unit/auxiliaries/parameters/NumericVectorParameter")
subdirs("tests/unit/processing/gui/ArchitectureCreation")
subdirs("tests/unit/processing/gui/ArchitectureLoading")
subdirs("tests/unit/processing/gui/ArchitectureSaving")
subdirs("tests/unit/processing/gui/gui_Group")
subdirs("tests/unit/processing/gui/gui_RecorderWidget")
subdirs("tests/unit/processing/gui/gui_cedar")
subdirs("tests/unit/processing/steps/MatrixSlice")
subdirs("tests/unit/processing/steps/Projection")
subdirs("tests/unit/processing/steps/Resize")
subdirs("tests/interactive/devices/gl/Caren")
subdirs("tests/interactive/devices/gl/Cora")
subdirs("tests/interactive/devices/gl/KinematicChain")
subdirs("tests/interactive/devices/gl/Kuka")
subdirs("tests/interactive/devices/gl/MountedCameraViewer")
subdirs("tests/interactive/devices/gl/PowerCube110")
subdirs("tests/interactive/devices/gl/PowerCubeWrist90")
subdirs("tests/interactive/devices/gl/sdh")
subdirs("tests/interactive/devices/gui/AmtecKinematicChain")
subdirs("tests/interactive/devices/gui/KinematicChainWidget")
subdirs("tests/interactive/devices/kteam/EPuckDrive")
subdirs("tests/interactive/devices/kteam/KheperaDrive")
subdirs("tests/interactive/devices/kteam/Odometry")
subdirs("tests/interactive/devices/sensors/CameraGrabber")
subdirs("tests/interactive/devices/sensors/GLGrabber")
subdirs("tests/interactive/devices/sensors/GrabbableGrabber")
subdirs("tests/interactive/devices/sensors/Grabber")
subdirs("tests/interactive/devices/sensors/NetGrabber")
subdirs("tests/interactive/devices/sensors/PictureGrabber")
subdirs("tests/interactive/devices/sensors/VideoGrabber")
subdirs("tests/interactive/processing/gui/UiSettingsWidget")
subdirs("tests/performance/auxiliaries/convolution/FFTW_perf")
subdirs("tests/performance/auxiliaries/convolution/OpenCV")
subdirs("tests/unit/devices/sensors/visual/Grabber")
subdirs("tests/unit/devices/sensors/visual/StereoGrabber")
subdirs("executables/cedar")
subdirs("executables/cedar-remote-robot")
subdirs("executables/cedar-shell")
subdirs("executables/cedar-version")
subdirs("executables/fwBusInfo")
subdirs("executables/fwBusReset")
subdirs("executables/fwCamInfo")
subdirs("executables/pluginManager")
subdirs("executables/robotManager")
subdirs("examples/kukaMovement")
subdirs("examples/processingTutorial")
subdirs("examples/auxiliaries/Configurable/Tutorial")
