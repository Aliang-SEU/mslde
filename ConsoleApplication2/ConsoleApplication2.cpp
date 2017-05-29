// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MSLDE.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cv::Mat X = cv::imread("1.bmp",0);
	cv::Mat Y = MSLDE::lightProcessing(X);
	cv::normalize(Y, Y, 1, 0, cv::NORM_MINMAX);
	cv::imshow("1", Y);
	cv::waitKey(0);
	return 0;
}

