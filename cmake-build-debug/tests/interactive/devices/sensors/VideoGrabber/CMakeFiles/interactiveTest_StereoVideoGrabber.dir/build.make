# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/112/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/112/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/work/CLionProjects/cedar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/work/CLionProjects/cedar/cmake-build-debug

# Include any dependencies generated for this target.
include tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/depend.make

# Include the progress variables for this target.
include tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/progress.make

# Include the compile flags for this target's objects.
include tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/flags.make

tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o: tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/flags.make
tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o: ../tests/interactive/devices/sensors/VideoGrabber/StereoVideoGrabberTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o -c /home/work/CLionProjects/cedar/tests/interactive/devices/sensors/VideoGrabber/StereoVideoGrabberTest.cpp

tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.i"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/work/CLionProjects/cedar/tests/interactive/devices/sensors/VideoGrabber/StereoVideoGrabberTest.cpp > CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.i

tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.s"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/work/CLionProjects/cedar/tests/interactive/devices/sensors/VideoGrabber/StereoVideoGrabberTest.cpp -o CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.s

# Object files for target interactiveTest_StereoVideoGrabber
interactiveTest_StereoVideoGrabber_OBJECTS = \
"CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o"

# External object files for target interactiveTest_StereoVideoGrabber
interactiveTest_StereoVideoGrabber_EXTERNAL_OBJECTS =

../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/StereoVideoGrabberTest.cpp.o
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/build.make
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: ../lib/libcedarproc.so.6.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: ../lib/libcedardev.so.6.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: ../lib/libcedaraux.so.6.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: ../lib/libcedarunits.so.6.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5PrintSupport.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5OpenGL.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Charts.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5DataVisualization.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt53DExtras.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt53DInput.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt53DLogic.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt53DRender.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt53DCore.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Network.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Xml.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Svg.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Widgets.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Gui.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Concurrent.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /opt/qt512/lib/libQt5Core.so.5.12.6
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber: tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../../../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interactiveTest_StereoVideoGrabber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/build: ../bin/interactiveTest/devices/sensors/interactiveTest_StereoVideoGrabber

.PHONY : tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/build

tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/clean:
	cd /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber && $(CMAKE_COMMAND) -P CMakeFiles/interactiveTest_StereoVideoGrabber.dir/cmake_clean.cmake
.PHONY : tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/clean

tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/depend:
	cd /home/work/CLionProjects/cedar/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/work/CLionProjects/cedar /home/work/CLionProjects/cedar/tests/interactive/devices/sensors/VideoGrabber /home/work/CLionProjects/cedar/cmake-build-debug /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber /home/work/CLionProjects/cedar/cmake-build-debug/tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/interactive/devices/sensors/VideoGrabber/CMakeFiles/interactiveTest_StereoVideoGrabber.dir/depend

