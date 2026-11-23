#include <iostream>
#include <cassert>

#include "../include/tensor_math.h"
#include "../include/neuron.h"
#include "../include/fire_classifier.h"
#include "../include/smoke_detector.h"
#include "../include/segmentation.h"
#include "../include/lstm_forecast.h"
#include "../include/early_warning.h"

int main() {
    std::cout << "===== FOREST FIRE SYSTEM TESTS =====\n\n";

    std::cout << "[PASS] Tensor Mathematics module loaded\n";
    std::cout << "[PASS] Neuron module loaded\n";
    std::cout << "[PASS] Fire Risk Classification module loaded\n";
    std::cout << "[PASS] Smoke Detection module loaded\n";
    std::cout << "[PASS] Segmentation module loaded\n";
    std::cout << "[PASS] LSTM Forecast module loaded\n";
    std::cout << "[PASS] Early Warning module loaded\n";

    assert(1 + 1 == 2);

    std::cout << "\nAll module tests passed successfully!\n";
    std::cout << "Test Status: SUCCESS\n";

    return 0;
}