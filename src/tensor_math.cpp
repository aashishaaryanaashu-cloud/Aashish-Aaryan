#include "../include/tensor_math.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void TensorMath::displayMatrix(
    const vector<vector<double>>& matrix
) {
    for (const auto& row : matrix) {
        for (double value : row) {
            cout << value << "\t";
        }
        cout << endl;
    }
}

double TensorMath::innerProduct(
    const vector<double>& a,
    const vector<double>& b
) {
    if (a.size() != b.size()) {
        throw invalid_argument("Vectors must have same size.");
    }

    double result = 0.0;

    for (size_t i = 0; i < a.size(); i++) {
        result += a[i] * b[i];
    }

    return result;
}

vector<double> TensorMath::reshape(
    const vector<vector<double>>& matrix
) {
    vector<double> result;

    for (const auto& row : matrix) {
        for (double value : row) {
            result.push_back(value);
        }
    }

    return result;
}

void TensorMath::runDemo() {
    cout << "\n========== TENSOR MATHEMATICS ==========\n";

    vector<vector<double>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "\nOriginal 2D Tensor:\n";
    displayMatrix(matrix);

    vector<double> a = {1, 2, 3};
    vector<double> b = {4, 5, 6};

    cout << "\nInner Product: "
         << innerProduct(a, b) << endl;

    vector<double> flattened = reshape(matrix);

    cout << "\nReshaped Tensor: ";
    for (double value : flattened) {
        cout << value << " ";
    }

    cout << "\n========================================\n";
}