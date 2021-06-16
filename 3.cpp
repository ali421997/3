#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void){

	Mat testImage = imread("number_zero.jpg",0);

	Mat test_roi = testImage(Range(0,2), Range(0,4));
	cout << "Original Matrix\n" << testImage << endl << endl;

	cout << "Selected Region\n" << test_roi;

	testImage(Range(0, 2), Range(0, 4)).setTo(111);

	cout << "Modified Matrix\n" << testImage;
	
	return(0);

}
