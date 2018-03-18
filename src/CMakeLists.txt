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

set(
  OPENCV_LIBS
  opencv_calib3d.3.4.1
  opencv_core.3.4.1
  opencv_dnn.3.4.1
  opencv_features2d.3.4.1
  opencv_flann.3.4.1
  opencv_highgui.3.4.1
  opencv_imgcodecs.3.4.1
  opencv_imgproc.3.4.1
  opencv_ml.3.4.1
  opencv_objdetect.3.4.1
  opencv_photo.3.4.1
  opencv_shape.3.4.1
  opencv_stitching.3.4.1
  opencv_superres.3.4.1
  opencv_video.3.4.1
  opencv_videoio.3.4.1
  opencv_videostab.3.4.1
  jpeg.9
)

target_link_libraries( OpenADAS ${OPENCV_LIBS} )