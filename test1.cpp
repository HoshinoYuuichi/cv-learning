#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
  Mat image;
  image = imread("1.jpg", IMREAF_COLOR);
  Mat gray_image;
  cvtColor(image, gray_image, COLOR_BGR2GRAY);
  Mat BW_image;
  threshold(gray_image, BW_image, 0, 255, THRESH_BINARY | THRESH_OSTU);
  imshow("RGB image", image);
  imshow("Gray image", gray_image);
  imshow("B&W image", BW_image);
  waitKet(0);
  return 0;
}
