#ifndef SMOKE_DETECTOR_H
#define SMOKE_DETECTOR_H

class SmokeDetector {
public:
    static bool detectSmoke(double smokeLevel);
    static bool detectFire(double temperature, double smokeLevel);
    static void runDemo();
};

#endif