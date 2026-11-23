from ultralytics import YOLO
import sys
import os

MODEL_PATH = "models/fire_smoke_yolo11n.pt"

if len(sys.argv) < 2:
    print("Usage: python demo.py <image_path>")
    sys.exit(1)

image_path = sys.argv[1]

if not os.path.exists(image_path):
    print("Error: Image not found:", image_path)
    sys.exit(1)

if not os.path.exists(MODEL_PATH):
    print("Error: Trained model not found:", MODEL_PATH)
    sys.exit(1)

print("===== FOREST FIRE & SMOKE DETECTION =====")
print("Model:", MODEL_PATH)
print("Image:", image_path)

model = YOLO(MODEL_PATH)

results = model.predict(
    source=image_path,
    conf=0.25,
    save=True
)

detections = 0

for result in results:
    for box in result.boxes:
        class_id = int(box.cls[0])
        confidence = float(box.conf[0])
        class_name = model.names[class_id]

        print(
            f"Detected: {class_name} | "
            f"Confidence: {confidence:.2f}"
        )

        detections += 1

if detections == 0:
    print("No fire or smoke detected.")
else:
    print("Total detections:", detections)

print("Detection completed successfully.")