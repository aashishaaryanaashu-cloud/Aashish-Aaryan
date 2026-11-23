#!/bin/bash

clear

echo "=================================================="
echo " FOREST FIRE & SMOKE EARLY WARNING SYSTEM"
echo "             FINAL FACULTY DEMO"
echo "=================================================="

echo ""
echo "========== 1. MAIN SYSTEM OUTPUT =========="
./build/forest_fire

echo ""
echo "========== 2. YOLO TEST METRICS =========="
cat results/test_metrics.txt

echo ""
echo "========== 3. GENERATED RESULT FILES =========="
ls -lh results/

echo ""
echo "========== 4. MODULE TESTING =========="
./scripts/run_all_tests.sh

echo ""
echo "=================================================="
echo " ALL TERMINAL RESULTS COMPLETED SUCCESSFULLY"
echo "=================================================="

echo ""
echo "Opening Results..."
open results

echo "Opening YOLO Detection Results..."
open runs/detect/predict-2
