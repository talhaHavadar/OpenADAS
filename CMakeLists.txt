cmake_minimum_required(VERSION 3.0.0)
project(OpenADAS VERSION 0.0.0)
set(ENV env_simulation)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

include_directories(
  ${PROJECT_BINARY_DIR}
  ${PROJECT_SOURCE_DIR}/include
)

subdirs(
  src
)