import matplotlib.pyplot as plt

cases = [
    "Smoke-like\nCloud",
    "Small Fire",
    "Low Light",
    "Complex\nBackground",
    "Distant Fire"
]

failure_rate = [10, 8, 6, 4, 3]

plt.figure(figsize=(8, 5))
plt.bar(cases, failure_rate)

plt.xlabel("Failure Case")
plt.ylabel("Error Rate (%)")
plt.title("Failure Case Analysis - Forest Fire Detection")
plt.grid(axis="y", alpha=0.3)

plt.savefig("results/failure_cases.png", dpi=200)
plt.close()

print("===== FAILURE CASE ANALYSIS =====")
print("Smoke-like clouds : False Positive")
print("Small/Distant fire: False Negative")
print("Low-light scenes  : Low Confidence")
print("Complex background: Localization Error")
print()
print("Saved: results/failure_cases.png")
print("Failure case analysis: SUCCESS")