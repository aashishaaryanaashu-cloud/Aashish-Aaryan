#ifndef SEGMENTATION_H
#define SEGMENTATION_H

#include <vector>

class Segmentation {
public:
    static std::vector<int> segment(
        const std::vector<double>& pixels,
        double threshold
    );

    static void runDemo();
};

#endif