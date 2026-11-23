#ifndef TENSOR_MATH_H
#define TENSOR_MATH_H

#include <vector>

class TensorMath {
public:
    static void displayMatrix(
        const std::vector<std::vector<double>>& matrix
    );

    static double innerProduct(
        const std::vector<double>& a,
        const std::vector<double>& b
    );

    static std::vector<double> reshape(
        const std::vector<std::vector<double>>& matrix
    );

    static void runDemo();
};

#endif