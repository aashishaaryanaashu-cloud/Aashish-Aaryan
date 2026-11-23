#ifndef EARLY_WARNING_H
#define EARLY_WARNING_H

class EarlyWarning {
public:
    static const char* generateWarning(
        double fireRisk,
        bool smokeDetected,
        bool fireDetected
    );

    static void runDemo();
};

#endif