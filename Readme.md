I have implemented a simple logic, without using any feedback due to devices constraints. I have simulated the logic in Proteus 8 Pro software. I have used Arduino Uno for the control. The control is very simple. I have provided a default value of 32 deg. Celsius for the required environment. There is temperature sensor module LM35. An LCD 20x4 display, a heater and a fan. The LCD shows the 4 data. In the first row it shows desired temperature that needs to be maintained (Desired Temp = 32), in the next row it shows the current temperature (Current Temp = XX), in the 3rd row it shows the state (Cooling/Heating) and in the 4th row it shows the ON/OFF state of heater and cooler. 
For logic if-condition is being used. If the temperature = 32, then no action needed; if temperature > 32, then cooling should be enabled; and when temperature < 32, then heater should be enabled.
The code is written in Arduino IDE.

Proteus Simulation 
![image](https://github.com/Aarid696/Thermostat/assets/79322886/873a5a18-de6a-4b9f-aeec-46e8ba1a276f)
