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
include executables/cedar-shell/CMakeFiles/cedar-shell.dir/depend.make

# Include the progress variables for this target.
include executables/cedar-shell/CMakeFiles/cedar-shell.dir/progress.make

# Include the compile flags for this target's objects.
include executables/cedar-shell/CMakeFiles/cedar-shell.dir/flags.make

executables/cedar-shell/moc_MainApplication.cpp: ../executables/cedar-shell/MainApplication.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_MainApplication.cpp"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /opt/qt512/bin/moc @/home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell/moc_MainApplication.cpp_parameters

executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.o: executables/cedar-shell/CMakeFiles/cedar-shell.dir/flags.make
executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.o: ../executables/cedar-shell/MainApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.o"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cedar-shell.dir/MainApplication.cpp.o -c /home/work/CLionProjects/cedar/executables/cedar-shell/MainApplication.cpp

executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedar-shell.dir/MainApplication.cpp.i"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/work/CLionProjects/cedar/executables/cedar-shell/MainApplication.cpp > CMakeFiles/cedar-shell.dir/MainApplication.cpp.i

executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedar-shell.dir/MainApplication.cpp.s"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/work/CLionProjects/cedar/executables/cedar-shell/MainApplication.cpp -o CMakeFiles/cedar-shell.dir/MainApplication.cpp.s

executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o: executables/cedar-shell/CMakeFiles/cedar-shell.dir/flags.make
executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o: ../executables/cedar-shell/cedar-shell.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o -c /home/work/CLionProjects/cedar/executables/cedar-shell/cedar-shell.cpp

executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedar-shell.dir/cedar-shell.cpp.i"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/work/CLionProjects/cedar/executables/cedar-shell/cedar-shell.cpp > CMakeFiles/cedar-shell.dir/cedar-shell.cpp.i

executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedar-shell.dir/cedar-shell.cpp.s"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/work/CLionProjects/cedar/executables/cedar-shell/cedar-shell.cpp -o CMakeFiles/cedar-shell.dir/cedar-shell.cpp.s

executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o: executables/cedar-shell/CMakeFiles/cedar-shell.dir/flags.make
executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o: executables/cedar-shell/moc_MainApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o -c /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell/moc_MainApplication.cpp

executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.i"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell/moc_MainApplication.cpp > CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.i

executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.s"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell/moc_MainApplication.cpp -o CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.s

# Object files for target cedar-shell
cedar__shell_OBJECTS = \
"CMakeFiles/cedar-shell.dir/MainApplication.cpp.o" \
"CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o" \
"CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o"

# External object files for target cedar-shell
cedar__shell_EXTERNAL_OBJECTS =

../bin/cedar-shell-6.2.0: executables/cedar-shell/CMakeFiles/cedar-shell.dir/MainApplication.cpp.o
../bin/cedar-shell-6.2.0: executables/cedar-shell/CMakeFiles/cedar-shell.dir/cedar-shell.cpp.o
../bin/cedar-shell-6.2.0: executables/cedar-shell/CMakeFiles/cedar-shell.dir/moc_MainApplication.cpp.o
../bin/cedar-shell-6.2.0: executables/cedar-shell/CMakeFiles/cedar-shell.dir/build.make
../bin/cedar-shell-6.2.0: ../lib/libcedardyn.so.6.2.0
../bin/cedar-shell-6.2.0: ../lib/libcedarproc.so.6.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-shell-6.2.0: ../lib/libcedardev.so.6.2.0
../bin/cedar-shell-6.2.0: ../lib/libcedaraux.so.6.2.0
../bin/cedar-shell-6.2.0: ../lib/libcedarunits.so.6.2.0
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5PrintSupport.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5OpenGL.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Charts.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5DataVisualization.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt53DExtras.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt53DInput.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt53DLogic.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt53DRender.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt53DCore.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Network.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Xml.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Svg.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Widgets.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Gui.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Concurrent.so.5.12.6
../bin/cedar-shell-6.2.0: /opt/qt512/lib/libQt5Core.so.5.12.6
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/cedar-shell-6.2.0: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/cedar-shell-6.2.0: executables/cedar-shell/CMakeFiles/cedar-shell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/work/CLionProjects/cedar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../../bin/cedar-shell"
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cedar-shell.dir/link.txt --verbose=$(VERBOSE)
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && $(CMAKE_COMMAND) -E cmake_symlink_executable ../../../bin/cedar-shell-6.2.0 ../../../bin/cedar-shell

../bin/cedar-shell: ../bin/cedar-shell-6.2.0


# Rule to build all files generated by this target.
executables/cedar-shell/CMakeFiles/cedar-shell.dir/build: ../bin/cedar-shell

.PHONY : executables/cedar-shell/CMakeFiles/cedar-shell.dir/build

executables/cedar-shell/CMakeFiles/cedar-shell.dir/clean:
	cd /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell && $(CMAKE_COMMAND) -P CMakeFiles/cedar-shell.dir/cmake_clean.cmake
.PHONY : executables/cedar-shell/CMakeFiles/cedar-shell.dir/clean

executables/cedar-shell/CMakeFiles/cedar-shell.dir/depend: executables/cedar-shell/moc_MainApplication.cpp
	cd /home/work/CLionProjects/cedar/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/work/CLionProjects/cedar /home/work/CLionProjects/cedar/executables/cedar-shell /home/work/CLionProjects/cedar/cmake-build-debug /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell /home/work/CLionProjects/cedar/cmake-build-debug/executables/cedar-shell/CMakeFiles/cedar-shell.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : executables/cedar-shell/CMakeFiles/cedar-shell.dir/depend

