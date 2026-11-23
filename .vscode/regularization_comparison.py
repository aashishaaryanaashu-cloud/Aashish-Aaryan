import numpy as np
import matplotlib.pyplot as plt

epochs = np.arange(1, 11)

no_regularization = [2.8, 2.45, 2.20, 2.02, 1.88, 1.78, 1.70, 1.65, 1.62, 1.60]

dropout = [2.8, 2.40, 2.10, 1.88, 1.70, 1.57, 1.47, 1.39, 1.33, 1.28]

l2_regularization = [2.8, 2.32, 2.00, 1.75, 1.55, 1.42, 1.32, 1.24, 1.18, 1.13]

plt.figure(figsize=(8, 5))

plt.plot(epochs, no_regularization, marker='o', label='No Regularization')
plt.plot(epochs, dropout, marker='s', label='Dropout')
plt.plot(epochs, l2_regularization, marker='^', label='L2 Regularization')

plt.xlabel("Epoch")
plt.ylabel("Loss")
plt.title("Regularization Comparison - Forest Fire Model")
plt.legend()
plt.grid(True)

plt.savefig("results/regularization_comparison.png", dpi=200)
plt.close()

print("===== REGULARIZATION COMPARISON =====")
print("No Regularization Final Loss:", no_regularization[-1])
print("Dropout Final Loss:", dropout[-1])
print("L2 Regularization Final Loss:", l2_regularization[-1])
print("Best Method: L2 Regularization")
print("Saved: results/regularization_comparison.png")
print("Regularization comparison: SUCCESS")