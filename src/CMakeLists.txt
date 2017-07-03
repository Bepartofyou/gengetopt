message(STATUS "--- Compiling the demo....")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)


add_executable(test main.c cmdline.c cmdline.h)
