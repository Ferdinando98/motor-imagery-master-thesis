# Install script for directory: /home/lairobotics/biom_ricciardi_tesi/catkin_ws/src/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/build/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast/catkin_generated/installspace/j2s6s300_ikfast.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/j2s6s300_ikfast/cmake" TYPE FILE FILES
    "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/build/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast/catkin_generated/installspace/j2s6s300_ikfastConfig.cmake"
    "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/build/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast/catkin_generated/installspace/j2s6s300_ikfastConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/j2s6s300_ikfast" TYPE FILE FILES "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/src/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/devel/lib/libj2s6s300_arm_moveit_ikfast_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so"
         OLD_RPATH "/opt/ros/noetic/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libj2s6s300_arm_moveit_ikfast_plugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/j2s6s300_ikfast" TYPE FILE FILES "/home/lairobotics/biom_ricciardi_tesi/catkin_ws/src/kinova-ros-noetic-devel/kinova_moveit/inverse_kinematics_plugins/ikfast/j2s6s300_ikfast/j2s6s300_arm_moveit_ikfast_plugin_description.xml")
endif()

