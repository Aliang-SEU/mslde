// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MSLDE.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cv::Mat X = cv::imread("1.bmp",0);
	cv::Mat Y = MSLDE::lightProcessing(X);
	cv::normalize(Y, Y, 1, 0, cv::NORM_MINMAX);
	cv::imshow("ԭͼƬ", X);
	cv::moveWindow("ԭͼƬ", 300, 200);
	cv::imshow("����֮���ͼƬ", Y);
	cv::moveWindow("����֮���ͼƬ", 500, 200);
	cv::waitKey(0);
	return 0;
}

