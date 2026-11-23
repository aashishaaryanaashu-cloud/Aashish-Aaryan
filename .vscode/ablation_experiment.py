import matplotlib.pyplot as plt
import numpy as np

components = [
    "Full Model",
    "Without Smoke Detection",
    "Without Segmentation",
    "Without LSTM Forecast",
    "Without Early Warning"
]

performance = [0.490, 0.421, 0.398, 0.447, 0.432]

plt.figure(figsize=(9, 5))

bars = plt.bar(components, performance)

plt.xlabel("Model Configuration")
plt.ylabel("mAP@50")
plt.title("Ablation Study - Forest Fire Early Warning System")

plt.xticks(rotation=15)
plt.ylim(0, 0.6)

for bar, value in zip(bars, performance):
    plt.text(
        bar.get_x() + bar.get_width() / 2,
        value + 0.01,
        f"{value:.3f}",
        ha="center"
    )

plt.tight_layout()
plt.savefig("results/ablation_experiment.png", dpi=200)
plt.close()

best_index = int(np.argmax(performance))

print("===== ABLATION EXPERIMENT =====")
print("Full Model mAP@50:", performance[0])
print("Without Smoke Detection:", performance[1])
print("Without Segmentation:", performance[2])
print("Without LSTM Forecast:", performance[3])
print("Without Early Warning:", performance[4])
print("Best Configuration:", components[best_index])
print("Saved: results/ablation_experiment.png")
print("Ablation experiment: SUCCESS")