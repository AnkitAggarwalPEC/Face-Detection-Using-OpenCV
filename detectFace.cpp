#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace cv;

int main()
{
    //Modify the path according to your directory structure
    //Cascade file are at opencv/data/haarcascades
    
    string cascadeFace = "../../data/haarcascades/haarcascade_frontalface_alt2.xml";
    CascadeClassifier * cascade = new CascadeClassifier(cascadeFace);
    
    //Name of the image 
    Mat img = imread("image.jpg",CV_LOAD_IMAGE_GRAYSCALE);
    imshow("Image Read",img);
    
    vector<Rect> Faces;
    cascade->detectMultiScale( img,Faces,1.5,2);
    cout <<"Number of Faces Detected is";
    cout << Faces.size() <<endl;
    
    //use for loop if the image contain number of faces
    rectangle(img, Faces[0], Scalar(0,255,0),3);
    
    imshow("Face Detected",img);
    waitKey(0);
    return 0;
}
