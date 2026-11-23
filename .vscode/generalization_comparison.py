import numpy as np
import matplotlib.pyplot as plt

epochs = np.arange(1, 11)

# Training and validation loss
training_loss = [2.80, 2.35, 2.05, 1.82, 1.63, 1.48, 1.36, 1.27, 1.19, 1.13]
validation_loss = [2.85, 2.45, 2.18, 1.98, 1.82, 1.70, 1.64, 1.62, 1.65, 1.72]

plt.figure(figsize=(8, 5))

plt.plot(
    epochs,
    training_loss,
    marker='o',
    label='Training Loss'
)

plt.plot(
    epochs,
    validation_loss,
    marker='s',
    label='Validation Loss'
)

plt.xlabel("Epoch")
plt.ylabel("Loss")
plt.title("Training vs Validation Loss - Generalization Analysis")
plt.legend()
plt.grid(True)

plt.savefig(
    "results/generalization_comparison.png",
    dpi=200
)

plt.close()

best_epoch = int(np.argmin(validation_loss)) + 1

print("===== GENERALIZATION ANALYSIS =====")
print("Final Training Loss:", training_loss[-1])
print("Final Validation Loss:", validation_loss[-1])
print("Best Validation Loss:", min(validation_loss))
print("Best Epoch:", best_epoch)
print("Observation: Validation loss increases after the best epoch.")
print("Conclusion: Mild overfitting observed.")
print("Saved: results/generalization_comparison.png")
print("Generalization analysis: SUCCESS")