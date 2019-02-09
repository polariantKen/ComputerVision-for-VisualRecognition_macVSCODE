#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
int main()
{
	//검출 -> 기술 -> 매칭
	//*****************각자 검출하고싶은 물체의 이미지 파일 위치를 대입
	Mat cam, img1;
	img1 = imread("이미지 주소를 넣으세요", IMREAD_GRAYSCALE);
	//카메라 준비
	VideoCapture cap;
	cap.open(0); //0번 카메라(기본 카메라) open
     		    //외부카메라를 사용한다면 그에 맞는 번호를 입력해야 합니다.

	if (!cap.isOpened())
	{
		std::cout << "카메라가 열리지 않았습니다." << std::endl;
		return -1;
	}
	
	for (;;) {
		cap.read(cam); 
		imshow("camera", cam);

		int c = -1;
		c = waitKey(33);
		if (c == 27)//esc키를 누르면 반복 종료
			break;
		else if (c < 0)//아무키도 누르지 않으면 아래의 코드는 실행되지 않음
			continue;
		}
	cap.release();
	return 0;
}