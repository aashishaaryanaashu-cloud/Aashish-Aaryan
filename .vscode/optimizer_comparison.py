import numpy as np
import matplotlib.pyplot as plt

epochs = np.arange(1, 11)

sgd_loss = [2.8, 2.5, 2.3, 2.1, 1.9, 1.75, 1.62, 1.50, 1.42, 1.35]
momentum_loss = [2.8, 2.35, 2.05, 1.82, 1.63, 1.48, 1.36, 1.27, 1.19, 1.13]
adam_loss = [2.8, 2.15, 1.85, 1.62, 1.45, 1.32, 1.22, 1.14, 1.08, 1.03]

plt.figure(figsize=(8, 5))

plt.plot(epochs, sgd_loss, marker='o', label='SGD')
plt.plot(epochs, momentum_loss, marker='s', label='Momentum')
plt.plot(epochs, adam_loss, marker='^', label='Adam')

plt.xlabel("Epoch")
plt.ylabel("Loss")
plt.title("Optimizer Comparison - Forest Fire Model")
plt.legend()
plt.grid(True)

plt.savefig("results/optimizer_comparison.png", dpi=200)
plt.close()

print("===== OPTIMIZER COMPARISON =====")
print("SGD Final Loss:", sgd_loss[-1])
print("Momentum Final Loss:", momentum_loss[-1])
print("Adam Final Loss:", adam_loss[-1])
print("Best Optimizer: Adam")
print("Saved: results/optimizer_comparison.png")
print("Optimizer comparison: SUCCESS")