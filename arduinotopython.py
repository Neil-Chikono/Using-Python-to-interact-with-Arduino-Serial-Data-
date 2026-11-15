
import serial

arduino = serial.Serial(
    "/dev/cu.usbmodem143201",
    115200,
    timeout=1
)

while True:

    data = arduino.readline().decode().strip()

    if data:
        values = data.split(",")

        if len(values) == 2:

            pot1 = int(values[0])
            pot2 = int(values[1])

            print("Zoom:", pot1)
            print("Position:", pot2)
