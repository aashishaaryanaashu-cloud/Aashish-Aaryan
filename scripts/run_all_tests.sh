#!/bin/bash

echo "======================================"
echo " FOREST FIRE EARLY WARNING - TEST SUITE"
echo "======================================"

echo ""
echo "[1/3] Building C++ Project..."
cmake -S . -B build
cmake --build build

echo ""
echo "[2/3] Running Main System..."
./build/forest_fire

echo ""
echo "[3/3] Running Module Tests..."
clang++ -std=c++17 tests/test_modules.cpp \
src/tensor_math.cpp \
src/neuron.cpp \
src/fire_classifier.cpp \
src/smoke_detector.cpp \
src/segmentation.cpp \
src/lstm_forecast.cpp \
src/early_warning.cpp \
-o test_modules

./test_modules

echo ""
echo "======================================"
echo " ALL TESTS COMPLETED SUCCESSFULLY"
echo "======================================"
