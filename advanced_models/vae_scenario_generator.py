import torch
import torch.nn as nn

class FireSmokeVAE(nn.Module):
    def __init__(self, input_dim=64, latent_dim=8):
        super().__init__()

        self.encoder = nn.Sequential(
            nn.Linear(input_dim, 32),
            nn.ReLU(),
            nn.Linear(32, 16),
            nn.ReLU()
        )

        self.mu = nn.Linear(16, latent_dim)
        self.logvar = nn.Linear(16, latent_dim)

        self.decoder = nn.Sequential(
            nn.Linear(latent_dim, 16),
            nn.ReLU(),
            nn.Linear(16, 32),
            nn.ReLU(),
            nn.Linear(32, input_dim),
            nn.Sigmoid()
        )

    def reparameterize(self, mu, logvar):
        std = torch.exp(0.5 * logvar)
        eps = torch.randn_like(std)
        return mu + eps * std

    def forward(self, x):
        encoded = self.encoder(x)

        mu = self.mu(encoded)
        logvar = self.logvar(encoded)

        z = self.reparameterize(mu, logvar)
        reconstructed = self.decoder(z)

        return reconstructed, mu, logvar


if __name__ == "__main__":
    model = FireSmokeVAE()

    sample = torch.rand(1, 64)

    reconstructed, mu, logvar = model(sample)

    print("===== VAE FIRE/SMOKE SCENARIO GENERATOR =====")
    print("Input shape:", sample.shape)
    print("Latent vector shape:", mu.shape)
    print("Generated scenario shape:", reconstructed.shape)
    print("VAE forward pass: SUCCESS")