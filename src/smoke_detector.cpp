#include "../include/smoke_detector.h"
#include <iostream>

using namespace std;

bool SmokeDetector::detectSmoke(double smokeLevel) {
    return smokeLevel >= 40.0;
}

bool SmokeDetector::detectFire(
    double temperature,
    double smokeLevel
) {
    return temperature >= 40.0 && smokeLevel >= 60.0;
}

void SmokeDetector::runDemo() {
    cout << "\n========== SMOKE & FIRE DETECTION ==========\n";

    double temperature = 45.0;
    double smokeLevel = 75.0;

    cout << "Temperature : " << temperature << " C" << endl;
    cout << "Smoke Level : " << smokeLevel << " %" << endl;

    cout << "\nSmoke Status : "
         << (detectSmoke(smokeLevel) ? "SMOKE DETECTED" : "NO SMOKE")
         << endl;

    cout << "Fire Status  : "
         << (detectFire(temperature, smokeLevel) ? "FIRE DETECTED" : "NO FIRE")
         << endl;

    cout << "============================================\n";
}