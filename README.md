# Nyrio
Arduino code for Nyrio robot

A programok megvannak mind .ino kiterjesztésben is (arduino), és .txt kiterjesztésben is, amit meg lehet nyitni sima notepad-ből.
Stepper_moving.ino és Stepper_moving.txt -- Axis 1, 2, 3-at megmozgatja egy bizonyos lépésszámmal egyenként.
Servo_moving.ino és Servo_moving.txt -- Axis 4, 5, 6 + gripper servo-t mozgatja meg bizonyos lépésszámmal egyenként.
Set_servo_ID.ino és Set_servo_ID.txt -- A szervo motorok ID-jának beállításához szükséges kód. (ha be akarjuk állítani, akkor csak a beállítandó szervo-t kössük rá a vezérlőre)
Serial_comm_sending -- Adat küldése két arduino között serial communication-nel.
Serial_comm_recieving -- Adat fogadása két arduino között serial communication-nel.

Needed libraries:
Stepper motorhoz:
  1. AccelStepper
Servo motorhoz:
  1. DynamixelShield
  2. Dynamixel2Arduino

Communication:
Common ground in both Arduino
Arduino 1 RX (pin 19) --> Arduino 2 TX (pin 18)
Arduino 1 TX (pin 18) --> Arduino 2 RX (pin 19)


Raspberry Pi:
Username: nyrio
Password: nyrio

