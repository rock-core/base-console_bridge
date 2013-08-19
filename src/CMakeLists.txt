rock_library(console_bridge
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(console_bridge_bin Main.cpp
    DEPS console_bridge)

