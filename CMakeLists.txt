cmake_minimum_required(VERSION 3.10)

project(ForestFireEarlyWarning)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(forest_fire
    src/main.cpp
    src/tensor_math.cpp
    src/neuron.cpp
    src/fire_classifier.cpp
    src/smoke_detector.cpp
    src/segmentation.cpp
    src/lstm_forecast.cpp
    src/early_warning.cpp
)