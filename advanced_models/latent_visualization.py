import torch
import matplotlib.pyplot as plt
from vae_scenario_generator import FireSmokeVAE

model = FireSmokeVAE()
model.eval()

samples = torch.rand(200, 64)

with torch.no_grad():
    encoded = model.encoder(samples)
    mu = model.mu(encoded)

x = mu[:, 0].numpy()
y = mu[:, 1].numpy()

plt.figure(figsize=(7, 5))
plt.scatter(x, y, alpha=0.7)

plt.title("VAE Latent Space - Fire/Smoke Scenario Generator")
plt.xlabel("Latent Dimension 1")
plt.ylabel("Latent Dimension 2")
plt.grid(True)

plt.savefig("results/vae_latent_space.png", dpi=200)
plt.close()

print("===== VAE LATENT SPACE VISUALIZATION =====")
print("Samples:", samples.shape[0])
print("Latent dimensions:", mu.shape[1])
print("Saved: results/vae_latent_space.png")
print("Visualization: SUCCESS")