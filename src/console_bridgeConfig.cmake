find_package(Rock)
include(FindPkgConfig)
rock_find_pkgconfig(console_bridge REQUIRED console_bridge)

add_library(console_bridge::console_bridge INTERFACE IMPORTED GLOBAL)
set_target_properties(console_bridge::console_bridge PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${console_bridge_INCLUDE_DIRS}"
)

target_link_libraries(console_bridge::console_bridge INTERFACE
    ${console_bridge_LIBRARIES})
