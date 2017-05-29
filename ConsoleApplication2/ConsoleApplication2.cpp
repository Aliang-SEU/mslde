// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MSLDE.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cv::Mat X = cv::imread("1.bmp",0);
	cv::Mat Y = MSLDE::lightProcessing(X);
	cv::normalize(Y, Y, 1, 0, cv::NORM_MINMAX);
	cv::imshow("原图片", X);
	cv::moveWindow("原图片", 300, 200);
	cv::imshow("处理之后的图片", Y);
	cv::moveWindow("处理之后的图片", 500, 200);
	cv::waitKey(0);
	return 0;
}

