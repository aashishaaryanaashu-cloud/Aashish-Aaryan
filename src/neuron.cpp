#include "../include/neuron.h"
#include <iostream>
#include <cmath>

using namespace std;

int Neuron::mcCullochPitts(const vector<int>& inputs, int threshold) {
    int sum = 0;

    for (int input : inputs) {
        sum += input;
    }

    return (sum >= threshold) ? 1 : 0;
}

double Neuron::sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

void Neuron::runDemo() {
    cout << "\n========== NEURON DEMONSTRATION ==========\n";

    vector<int> inputs = {1, 1};

    cout << "\nMcCulloch-Pitts Neuron" << endl;
    cout << "Inputs: 1 1" << endl;
    cout << "Threshold: 2" << endl;
    cout << "Output: " << mcCullochPitts(inputs, 2) << endl;

    double x = 1.5;

    cout << "\nSigmoid Neuron" << endl;
    cout << "Input: " << x << endl;
    cout << "Output: " << sigmoid(x) << endl;

    cout << "==========================================\n";
}