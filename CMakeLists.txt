cmake_minimum_required(VERSION 3.16)
project(noutils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
# speak.cxx
add_executable(speak cxx/speak.cxx)
add_custom_command(TARGET speak POST_BUILD
    COMMAND strip "$<TARGET_FILE:speak>"
)
include(GNUInstallDirs)
install(TARGETS speak
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

#    /--------------------------
#                                 Zynomon aelius ©️  2026
#                                    project : noutils
#                                 License    :    Apache 2.0
#                                                              --------------------------/