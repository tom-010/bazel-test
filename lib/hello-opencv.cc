#include "hello-opencv.h"

#include <string>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv/cv.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

void say_opencv_hello() {
    using namespace cv;

    VideoCapture stream1(0);   //0 is the id of video device.0 if you have only one camera.

    if (!stream1.isOpened()) { //check if video device has been initialised
        std::cout << "cannot open camera";
    }

    //unconditional loop
    while (true) {
        Mat cameraFrame;
        stream1.read(cameraFrame);
        imshow("cam", cameraFrame);
        if (waitKey(30) >= 0)
            break;
    }
}