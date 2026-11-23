#include "../include/segmentation.h"
#include <iostream>

using namespace std;

vector<int> Segmentation::segment(
    const vector<double>& pixels,
    double threshold
) {
    vector<int> mask;

    for (double pixel : pixels) {
        if (pixel >= threshold)
            mask.push_back(1);
        else
            mask.push_back(0);
    }

    return mask;
}

void Segmentation::runDemo() {
    cout << "\n========== FIRE/SMOKE SEGMENTATION ==========\n";

    vector<double> pixels = {20, 75, 35, 90, 55, 10, 85, 40};
    double threshold = 50.0;

    vector<int> mask = segment(pixels, threshold);

    cout << "Input Pixels : ";
    for (double pixel : pixels)
        cout << pixel << " ";

    cout << "\nThreshold    : " << threshold << endl;

    cout << "Segment Mask : ";
    for (int value : mask)
        cout << value << " ";

    cout << "\n=============================================\n";
}