#include "config.h"

#include <iostream>
#include "abstraction/StandardUtils.hpp"
#include "abstraction/CameraConsumerFactory.hpp"
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    StandardUtils utils;
    utils.print("deneme");
    CameraConsumer* camera = CameraConsumerFactory::getCameraConsumer();
    camera->test();
    VideoCapture cap(0);
    Mat src;
    std::cout << "OpenCV:" << cap.read(src) << std::endl;
    imshow("Talha", src);

#ifdef env_simulation
    std::cout << "Simulation test" << std::endl;
#endif
    std::cout << "Hello Moto!!" << std::endl;
}
