#include "../include/early_warning.h"
#include <iostream>

using namespace std;

const char* EarlyWarning::generateWarning(
    double fireRisk,
    bool smokeDetected,
    bool fireDetected
) {
    if (fireDetected || fireRisk >= 70.0)
        return "CRITICAL ALERT - FIRE DANGER";

    if (smokeDetected || fireRisk >= 40.0)
        return "WARNING - POSSIBLE FIRE RISK";

    return "SAFE - NO IMMEDIATE DANGER";
}

void EarlyWarning::runDemo() {
    cout << "\n========== EARLY WARNING SYSTEM ==========\n";

    double fireRisk = 80.6;
    bool smokeDetected = true;
    bool fireDetected = true;

    cout << "Fire Risk      : " << fireRisk << " %" << endl;
    cout << "Smoke Detected : "
         << (smokeDetected ? "YES" : "NO") << endl;
    cout << "Fire Detected  : "
         << (fireDetected ? "YES" : "NO") << endl;

    cout << "Warning        : "
         << generateWarning(
                fireRisk,
                smokeDetected,
                fireDetected
            )
         << endl;

    cout << "==========================================\n";
}