#ifndef NEURON_H
#define NEURON_H

#include <vector>

class Neuron {
public:
    static int mcCullochPitts(
        const std::vector<int>& inputs,
        int threshold
    );

    static double sigmoid(double x);

    static void runDemo();
};

#endif