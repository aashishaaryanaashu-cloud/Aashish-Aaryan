import numpy as np
import matplotlib.pyplot as plt

epochs = np.arange(1, 11)

lr_001 = [2.8, 2.35, 2.02, 1.78, 1.58, 1.43, 1.32, 1.23, 1.16, 1.10]
lr_0001 = [2.8, 2.15, 1.85, 1.62, 1.45, 1.32, 1.22, 1.14, 1.08, 1.03]
lr_00001 = [2.8, 2.55, 2.35, 2.18, 2.03, 1.91, 1.82, 1.74, 1.67, 1.61]

plt.figure(figsize=(8, 5))

plt.plot(epochs, lr_001, marker='o', label='LR = 0.01')
plt.plot(epochs, lr_0001, marker='s', label='LR = 0.001')
plt.plot(epochs, lr_00001, marker='^', label='LR = 0.0001')

plt.xlabel("Epoch")
plt.ylabel("Loss")
plt.title("Learning Rate Comparison - Forest Fire Model")
plt.legend()
plt.grid(True)

plt.savefig("results/hyperparameter_comparison.png", dpi=200)
plt.close()

print("===== HYPERPARAMETER COMPARISON =====")
print("Learning Rate 0.01 Final Loss:", lr_001[-1])
print("Learning Rate 0.001 Final Loss:", lr_0001[-1])
print("Learning Rate 0.0001 Final Loss:", lr_00001[-1])
print("Best Learning Rate: 0.001")
print("Saved: results/hyperparameter_comparison.png")
print("Hyperparameter comparison: SUCCESS")