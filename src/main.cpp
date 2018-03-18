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
    Mat src;
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Talha", src);
    waitKey(0);

#ifdef env_simulation
    std::cout << "Simulation test" << std::endl;
#endif
    std::cout << "Hello Moto!!" << std::endl;
}
