#include <opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\Pictures\\±ÚÖ½\\1.JPG",0);
	imshow("scr", scrMat);
	waitKey(0);
	return 0;
}