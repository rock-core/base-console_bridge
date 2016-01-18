configure_file(console_bridge.pc.in ${CMAKE_CURRENT_BINARY_DIR}/console_bridge.pc @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/console_bridge.pc
    DESTINATION lib/pkgconfig)
install(FILES console.h
    DESTINATION include/console_bridge)
    
set(cmake_conf_version_file "console_bridgeConfig-version.cmake")
# Use write_basic_package_version_file to generate a ConfigVersion file that
# allow users of gazebo to specify the API or version to depend on
# TODO: keep this instruction until deprecate Ubuntu/Precise and update with
# https://github.com/Kitware/CMake/blob/v2.8.8/Modules/CMakePackageConfigHelpers.cmake
include(WriteBasicConfigVersionFile)
write_basic_config_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/${cmake_conf_version_file}
  VERSION "${PROJECT_VERSION}"
  COMPATIBILITY SameMajorVersion) 
  
install(FILES console_bridgeConfig.cmake
    "${CMAKE_BINARY_DIR}/src/${cmake_conf_version_file}"
    DESTINATION share/console_bridge/cmake)
