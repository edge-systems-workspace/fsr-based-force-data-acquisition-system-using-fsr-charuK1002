#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author Charu Khandelwal
 * @date 2026-03-11
 *
 * @details
 * Reads analog force data from the FSR sensor and
 * displays the measured pressure information on the Serial Monitor.
 */

// TODO 1: Define FSR analog pin
#define FSR_PIN A0

// TODO 2: Variable to store sensor reading
int fsrValue = 0;

/**
 * @brief Initializes serial communication
 * and prints system startup message
 */
void setup() {

    // TODO 3: Initialize Serial communication
    Serial.begin(9600);

    // TODO 4: Print initialization message
    Serial.println("FSR Force Measurement System Initialized");
}

/**
 * @brief Continuously reads force values
 * from the FSR sensor and prints pressure status
 */
void loop() {

    // TODO 5: Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6: Print raw ADC value
    Serial.print("FSR Reading: ");
    Serial.println(fsrValue);

    // TODO 7: Apply threshold logic
    if (fsrValue > 200) {

        // TODO 8: Pressure detected
        Serial.println("Pressure Detected!");

    } else {

        Serial.println("No Pressure");
    }

    // TODO 9: Delay before next reading
    delay(500);
}