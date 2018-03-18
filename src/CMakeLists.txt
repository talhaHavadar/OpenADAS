set(SOURCES
  main.cpp
  abstraction/StandardUtils.cpp
  abstraction/CameraConsumerFactory.cpp
  abstraction/SimulationCameraConsumer.cpp
)

add_executable(OpenADAS ${SOURCES})
set_target_properties(OpenADAS
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)