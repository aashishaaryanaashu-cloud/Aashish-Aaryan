#ifndef LSTM_FORECAST_H
#define LSTM_FORECAST_H

#include <vector>

class LSTMForecast {
public:
    static double predictRisk(
        const std::vector<double>& riskHistory
    );

    static void runDemo();
};

#endif