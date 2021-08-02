#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>

using namespace cv;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_objectdetection_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = cv::getVersionString();
    Mat mat=Mat();
    std::cout<<CV_YUV2BGRA_UYNV<<std::endl;
    return env->NewStringUTF(hello.c_str());
}