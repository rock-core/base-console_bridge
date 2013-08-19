configure_file(console_bridge.pc.in ${CMAKE_CURRENT_BINARY_DIR}/console_bridge.pc @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/console_bridge.pc
    DESTINATION lib/pkgconfig)
install(FILES console.h
    DESTINATION include/console_bridge)
install(FILES console_bridgeConfig.cmake
    DESTINATION share/console_bridge/cmake)
