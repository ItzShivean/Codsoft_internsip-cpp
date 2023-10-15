#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat image;
    string inputImageFile = "input.jpg"; // Provide your image file

    // Load an image
    image = imread(inputImageFile);

    if (image.empty()) {
        cerr << "Error: Could not open or find the image." << endl;
        return -1;
    }

    // Display the original image
    imshow("Original Image", image);
    waitKey(0);

    // Resize the image
    int newWidth = 300; // Set your desired width
    int newHeight = 200; // Set your desired height
    Size newSize(newWidth, newHeight);
    Mat resizedImage;
    resize(image, resizedImage, newSize);

    // Display the resized image
    imshow("Resized Image", resizedImage);
    waitKey(0);

    // Crop the image
    Rect cropRect(100, 100, 200, 150); // Set your crop region
    Mat croppedImage = image(cropRect);

    // Display the cropped image
    imshow("Cropped Image", croppedImage);
    waitKey(0);

    // Apply color adjustment (e.g., brightness and contrast)
    Mat adjustedImage;
    double alpha = 1.5; // Adjust brightness (1.0 means no change)
    int beta = 50; // Adjust contrast
    image.convertTo(adjustedImage, -1, alpha, beta);

    // Display the adjusted image
    imshow("Adjusted Image", adjustedImage);
    waitKey(0);

    return 0;
}













