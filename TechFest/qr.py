import qrcode
from PIL import Image

# Take input from user for link and filename
link = input("Enter the link to convert to QR code: ")
filename = input("Enter the name for the QR code file (without extension): ")

# Generate the QR code
qr = qrcode.QRCode(version=1, box_size=10, border=5)
qr.add_data(link)
qr.make(fit=True)

# Convert the QR code to a PIL image
img = qr.make_image(fill_color="black", back_color="white")
img = img.convert("RGB")

# Save the QR code as an image file
img.save(f"{filename}.png")
print(f"QR code saved as {filename}.png")
