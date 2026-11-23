# Forest Fire & Smoke Early Warning System

## Project No. 06
**Domain:** Environmental Monitoring

## Project Overview
This project is a C++ based Forest Fire and Smoke Early Warning System designed to demonstrate different computational modules used for environmental monitoring and early fire-risk detection.

The system performs fire risk classification, smoke and fire detection, fire/smoke segmentation, risk forecasting, and early warning generation.

## Modules
1. Tensor Mathematics
2. Neuron Demonstration
3. Fire Risk Classification
4. Smoke and Fire Detection
5. Fire/Smoke Segmentation
6. LSTM Risk Forecasting
7. Early Warning System

## Features
- Fire risk calculation using temperature, humidity, and smoke level
- Fire risk classification
- Smoke detection
- Fire detection
- Fire/Smoke segmentation
- Risk forecasting using historical risk values
- Automatic early warning generation
- Modular C++ architecture
- CMake build support

## Project Structure

```text
Project/
├── include/
│   ├── tensor_math.h
│   ├── neuron.h
│   ├── fire_classifier.h
│   ├── smoke_detector.h
│   ├── segmentation.h
│   ├── lstm_forecast.h
│   └── early_warning.h
│
├── src/
│   ├── main.cpp
│   ├── tensor_math.cpp
│   ├── neuron.cpp
│   ├── fire_classifier.cpp
│   ├── smoke_detector.cpp
│   ├── segmentation.cpp
│   ├── lstm_forecast.cpp
│   └── early_warning.cpp
│
├── data/
├── models/
├── results/
├── tests/
├── CMakeLists.txt
└── README.md
## D-Fire Dataset

This project uses the D-Fire fire and smoke detection dataset for training and evaluation of the object detection model.

Dataset distribution:
- Training images: 14,122
- Validation images: 3,099
- Test images: 4,306
- Total images: 21,527

Classes:
- 0: Smoke
- 1: Fire

The dataset follows YOLO annotation format with corresponding image and label files.

## YOLO Fire and Smoke Detection

A YOLO11n object detection model was trained on the D-Fire dataset using Ultralytics YOLO.

Training configuration:
- Model: YOLO11n
- Epochs: 10
- Image size: 640
- Batch size: 8
- Device: Apple M2 GPU (MPS)
- Classes: Smoke and Fire

## Model Evaluation

The trained model was evaluated on the test dataset.

Test results:
- Precision: 0.536
- Recall: 0.488
- mAP@50: 0.490
- mAP@50-95: 0.241

Class-wise mAP@50:
- Smoke: 0.496
- Fire: 0.483

The trained model successfully detects and localizes fire and smoke regions using bounding boxes.

## Trained Model

The final trained YOLO model is stored at:

`models/fire_smoke_yolo11n.pt`

Training metrics are stored at:

`results/yolo_training_results.csv`

Prediction outputs are generated in:

`runs/detect/predict/`

## Detection Example

The trained model was tested on unseen test images and successfully detected multiple fire regions and smoke regions with confidence scores.

## Build and Run

Build the C++ application:

```bash
cmake -S . -B build
cmake --build build
## VAE Scenario Generator

A Variational Autoencoder (VAE) prototype was implemented to demonstrate latent-space based fire/smoke scenario generation.

The VAE includes:
- Encoder network
- Mean and log-variance latent representations
- Reparameterization trick
- 8-dimensional latent space
- Decoder network
- Synthetic scenario reconstruction

A forward-pass test was successfully performed using 64-dimensional synthetic input vectors.

Latent-space visualization was generated using 200 synthetic samples and saved at:

`results/vae_latent_space.png`

Note: This module is a prototype demonstration of the VAE architecture and latent-space workflow; it has not been trained on the D-Fire image dataset.

## Architecture Comparison

Different deep-learning architectures were considered for fire and smoke detection.

| Architecture | Type | Main Strength | Limitation | Project Usage |
|---|---|---|---|---|
| YOLO11n | Object Detection | Fast detection and localization | Accuracy depends on training data | Implemented and trained |
| ResNet | CNN / Classification Backbone | Strong feature extraction | Does not directly provide object localization | Studied for comparison |
| RetinaNet | Object Detection | Effective handling of class imbalance using focal loss | More computationally expensive | Studied for comparison |

### Selected Architecture

YOLO11n was selected as the primary detection architecture because it provides a good balance between detection accuracy, inference speed, and computational requirements.

The YOLO11n model was trained on the D-Fire dataset for 10 epochs and achieved:

- Precision: 0.536
- Recall: 0.488
- mAP@50: 0.490
- mAP@50-95: 0.241

YOLO11n also successfully detected and localized fire and smoke regions on unseen test images.

ResNet and RetinaNet are included as architectural comparisons and were not trained as part of the current implementation.

## Demo Usage

The trained YOLO11n model can be used for fire and smoke detection through the provided `demo.py` script.

Run the demo using:

```bash
python demo.py data/test/images/WEB11803.jpg
```
The demo script:
- Loads the trained model from `models/fire_smoke_yolo11n.pt`
- Performs fire and smoke detection
- Displays detected classes and confidence scores
- Reports the total number of detections
- Saves the annotated prediction image in the `runs/detect/` directory

Example result:
- Fire detections: 4
- Detection completed successfully

To test another image, replace the image path with the path of the desired input image.