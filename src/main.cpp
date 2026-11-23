#include <iostream>
#include <string>
#include "../include/tensor_math.h"
#include "../include/neuron.h"
#include "../include/fire_classifier.h"
#include "../include/smoke_detector.h"
#include "../include/segmentation.h"
#include "../include/lstm_forecast.h"
#include "../include/early_warning.h"
using namespace std;

int main() {
    cout << "============================================" << endl;
    cout << "   FOREST FIRE & SMOKE EARLY WARNING ENGINE" << endl;
    cout << "============================================" << endl;

    cout << "\nProject No. : 06" << endl;
    cout << "Domain      : Environmental Monitoring" << endl;
    cout << "Status      : System Initialized Successfully" << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Modules:" << endl;
    cout << "1. Fire Risk Classification" << endl;
    cout << "2. Smoke and Fire Detection" << endl;
    cout << "3. Fire/Smoke Segmentation" << endl;
    cout << "4. LSTM Risk Forecasting" << endl;
    cout << "5. Early Warning System" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\nSystem Ready!" << endl;

  TensorMath::runDemo();
Neuron::runDemo();
FireClassifier::runDemo();
SmokeDetector::runDemo();
Segmentation::runDemo();
LSTMForecast::runDemo();
EarlyWarning::runDemo();
return 0;
}