#ifndef FIRE_CLASSIFIER_H
#define FIRE_CLASSIFIER_H

class FireClassifier {
public:
    static double calculateRisk(
        double temperature,
        double humidity,
        double smoke
    );

    static const char* classifyRisk(double risk);

    static void runDemo();
};

#endif