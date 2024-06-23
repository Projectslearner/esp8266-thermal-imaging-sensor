# ESP8266 Thermal Imaging Sensor Project

#### Project Overview
This project demonstrates how to interface an ESP8266 microcontroller with a thermal imaging sensor module using I2C communication to measure and display temperature readings. Thermal imaging sensors are used to detect and visualize temperature distributions across surfaces, making them suitable for various applications in industrial, medical, and environmental monitoring fields.

#### Components Needed
- **ESP8266 Microcontroller (NodeMCU)**
- **Thermal Imaging Sensor Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup
1. **Connecting the Thermal Imaging Sensor to ESP8266:**
   - Ensure the thermal imaging sensor module supports I2C communication.
   - Connect the sensor's SDA pin to the ESP8266 GPIO pin (often D2 on NodeMCU).
   - Connect the sensor's SCL pin to the ESP8266 GPIO pin (often D1 on NodeMCU).
   - Connect the sensor's VCC and GND pins to the 3.3V and GND pins of the ESP8266, respectively.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Include the Wire library (`Wire.h`) for I2C communication.
   - Initialize the Wire library with `Wire.begin()` in the `setup()` function to enable I2C communication.

2. **Operation:**
   - In the `loop()` function:
     - Use `Wire.requestFrom(SENSOR_ADDRESS, 2)` to request 2 bytes of temperature data from the thermal sensor module.
     - Read the received temperature data bytes (`msb` and `lsb`).
     - Combine the bytes to obtain the raw temperature value.
     - Convert the raw temperature value to Celsius based on the sensor's specific scaling.
     - Print the temperature to the Serial Monitor.

3. **Considerations:**
   - **Sensor Calibration:** Adjust the temperature conversion based on the specific sensor's scaling and calibration requirements.
   - **Power Supply:** Ensure sufficient power supply to the ESP8266 and the thermal sensor module to ensure stable operation.

#### Applications
- **Temperature Monitoring:** Real-time temperature measurement in diverse environments.
- **Thermal Imaging:** Visualizing temperature distributions for analysis and diagnostics.
- **Automation:** Integrating temperature data into IoT systems for smart applications.

#### Notes
- **I2C Address:** Replace `SENSOR_ADDRESS` (0x5A) with the actual I2C address of your thermal sensor module if different.
- **Data Interpretation:** Interpret sensor datasheet for specific details on temperature data format and scaling.
- **Serial Output:** Use the Serial Monitor for debugging and observing temperature readings.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Thermal Imaging Sensor](https://projectslearner.com/learn/esp8266-thermal-imaging-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner