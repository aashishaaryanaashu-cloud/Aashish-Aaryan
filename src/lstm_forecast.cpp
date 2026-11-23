#include "../include/lstm_forecast.h"
#include <iostream>

using namespace std;

double LSTMForecast::predictRisk(
    const vector<double>& riskHistory
) {
    if (riskHistory.empty())
        return 0.0;

    double weightedSum = 0.0;
    double totalWeight = 0.0;

    for (size_t i = 0; i < riskHistory.size(); i++) {
        double weight = i + 1;
        weightedSum += riskHistory[i] * weight;
        totalWeight += weight;
    }

    return weightedSum / totalWeight;
}

void LSTMForecast::runDemo() {
    cout << "\n========== LSTM RISK FORECASTING ==========\n";

    vector<double> riskHistory = {35, 45, 55, 68, 80};

    cout << "Previous Risk Levels : ";
    for (double risk : riskHistory)
        cout << risk << " ";

    double predictedRisk = predictRisk(riskHistory);

    cout << "\nPredicted Risk       : "
         << predictedRisk << " %" << endl;

    cout << "===========================================\n";
}