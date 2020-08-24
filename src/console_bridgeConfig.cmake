find_package(Rock)
include(FindPkgConfig)

#add include dir for header
pkg_search_module(base-logging REQUIRED base-logging)
include_directories(SYSTEM ${base-logging_INCLUDE_DIRS})

rock_find_pkgconfig(console_bridge REQUIRED console_bridge)


