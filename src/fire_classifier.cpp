#include "../include/fire_classifier.h"
#include <iostream>

using namespace std;

double FireClassifier::calculateRisk(
    double temperature,
    double humidity,
    double smoke
) {
    double tempRisk = temperature / 50.0;
    double humidityRisk = (100.0 - humidity) / 100.0;
    double smokeRisk = smoke / 100.0;

    double risk = (tempRisk * 0.4) +
                  (humidityRisk * 0.2) +
                  (smokeRisk * 0.4);

    return risk * 100.0;
}

const char* FireClassifier::classifyRisk(double risk) {
    if (risk >= 70)
        return "HIGH RISK";
    else if (risk >= 40)
        return "MEDIUM RISK";
    else
        return "LOW RISK";
}

void FireClassifier::runDemo() {
    cout << "\n========== FIRE RISK CLASSIFICATION ==========\n";

    double temperature = 42.0;
    double humidity = 25.0;
    double smoke = 80.0;

    double risk = calculateRisk(temperature, humidity, smoke);

    cout << "Temperature : " << temperature << " C" << endl;
    cout << "Humidity    : " << humidity << " %" << endl;
    cout << "Smoke Level : " << smoke << " %" << endl;

    cout << "\nFire Risk Score : " << risk << " %" << endl;
    cout << "Classification  : " << classifyRisk(risk) << endl;

    cout << "==============================================\n";
}