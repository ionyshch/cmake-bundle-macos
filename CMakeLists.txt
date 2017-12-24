# Copyright (c) 2017 Ivan Onyshchenko
project(PortableApp LANGUAGES CXX)
cmake_minimum_required(VERSION 3.1)

# list both source and header files, so they are listed in
# project structure in QtCreator
add_library(LibOne SHARED libOne.cpp libOne.h)
add_library(LibTwo SHARED libTwo.cpp libTwo.h)
add_library(LibThree SHARED libThree.cpp libThree.h)
target_link_libraries(LibTwo LibThree)

set(APP_NAME PortableApp)

add_executable(${APP_NAME} MACOSX_BUNDLE main.cpp)
target_link_libraries(${APP_NAME} LibOne LibTwo)

add_custom_target(Docs SOURCES README.md .gitignore LICENSE)

# Destination paths below are relative to ${CMAKE_INSTALL_PREFIX}
install(TARGETS ${APP_NAME}
    BUNDLE DESTINATION . COMPONENT Runtime
    RUNTIME DESTINATION bin COMPONENT Runtime
    )

# Note Mac specific extension .app
set(APPS "\${CMAKE_INSTALL_PREFIX}/${APP_NAME}.app")

# Directories to look for dependencies
set(DIRS ${CMAKE_BINARY_DIR})

install(CODE "include(BundleUtilities)
    fixup_bundle(\"${APPS}\" \"\" \"${DIRS}\")")

set(CPACK_GENERATOR "DRAGNDROP")
include(CPack)
