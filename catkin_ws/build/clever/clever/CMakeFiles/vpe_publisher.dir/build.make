# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/catkin_ws/build

# Include any dependencies generated for this target.
include clever/clever/CMakeFiles/vpe_publisher.dir/depend.make

# Include the progress variables for this target.
include clever/clever/CMakeFiles/vpe_publisher.dir/progress.make

# Include the compile flags for this target's objects.
include clever/clever/CMakeFiles/vpe_publisher.dir/flags.make

clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o: clever/clever/CMakeFiles/vpe_publisher.dir/flags.make
clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o: /home/pi/catkin_ws/src/clever/clever/src/vpe_publisher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o"
	cd /home/pi/catkin_ws/build/clever/clever && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o -c /home/pi/catkin_ws/src/clever/clever/src/vpe_publisher.cpp

clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.i"
	cd /home/pi/catkin_ws/build/clever/clever && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/catkin_ws/src/clever/clever/src/vpe_publisher.cpp > CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.i

clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.s"
	cd /home/pi/catkin_ws/build/clever/clever && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/catkin_ws/src/clever/clever/src/vpe_publisher.cpp -o CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.s

# Object files for target vpe_publisher
vpe_publisher_OBJECTS = \
"CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o"

# External object files for target vpe_publisher
vpe_publisher_EXTERNAL_OBJECTS =

/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: clever/clever/CMakeFiles/vpe_publisher.dir/src/vpe_publisher.cpp.o
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: clever/clever/CMakeFiles/vpe_publisher.dir/build.make
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libnodeletlib.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libbondcpp.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libtf.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/liborocos-kdl.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libtf2_ros.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libactionlib.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libtf2.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libimage_transport.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libmessage_filters.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libclass_loader.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/libPocoFoundation.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libdl.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libroscpp.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libpthread.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_signals.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libroslib.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/librospack.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libpython2.7.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_filesystem.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_program_options.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libtinyxml2.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libcv_bridge.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libopencv_core.so.3.2.0
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libopencv_imgproc.so.3.2.0
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libopencv_imgcodecs.so.3.2.0
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/librosconsole.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/liblog4cxx.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_regex.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/librostime.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /opt/ros/melodic/lib/libcpp_common.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_system.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_thread.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_chrono.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_date_time.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libboost_atomic.so
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: /usr/lib/arm-linux-gnueabihf/libconsole_bridge.so.0.4
/home/pi/catkin_ws/devel/lib/clever/vpe_publisher: clever/clever/CMakeFiles/vpe_publisher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/pi/catkin_ws/devel/lib/clever/vpe_publisher"
	cd /home/pi/catkin_ws/build/clever/clever && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vpe_publisher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
clever/clever/CMakeFiles/vpe_publisher.dir/build: /home/pi/catkin_ws/devel/lib/clever/vpe_publisher

.PHONY : clever/clever/CMakeFiles/vpe_publisher.dir/build

clever/clever/CMakeFiles/vpe_publisher.dir/clean:
	cd /home/pi/catkin_ws/build/clever/clever && $(CMAKE_COMMAND) -P CMakeFiles/vpe_publisher.dir/cmake_clean.cmake
.PHONY : clever/clever/CMakeFiles/vpe_publisher.dir/clean

clever/clever/CMakeFiles/vpe_publisher.dir/depend:
	cd /home/pi/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/catkin_ws/src /home/pi/catkin_ws/src/clever/clever /home/pi/catkin_ws/build /home/pi/catkin_ws/build/clever/clever /home/pi/catkin_ws/build/clever/clever/CMakeFiles/vpe_publisher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : clever/clever/CMakeFiles/vpe_publisher.dir/depend

