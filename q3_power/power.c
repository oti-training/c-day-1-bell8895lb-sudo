/*
 * Day 1 Exercise 3: Power Calculator
 *
 * TODO: Implement a program that calculates power (P = V * I)
 * and checks if it's within the maximum limit (5.0W).
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -o power power.c
 * Run with: ./power
 */

#include <stdio.h>
#include "power.h"

/**
 * Calculates power consumption: P = V * I
 * @param voltage Voltage in volts
 * @param current Current in amps
 * @return Calculated power in watts
 */
//float calculate_power(float voltage, float current) {
    // TODO: Implement power calculation
    //return 0.0f;  // Placeholder
//}

/**
 * Checks if power is within safe limit (5.0W)
 * @param power Power in watts
 * @return 1 if valid (<=5.0W), 0 if invalid
 */
//int is_valid_power(float power) {
    // TODO: Implement power validation logic
//    return 0;  // Placeholder
//}

#ifndef UNIT_TEST
int main() {
    float voltage, current, power;
    float max_power = 5.0f;

    printf("Power Calculator for Chip Validation\n");
    printf("Enter the Voltage: ");
    scanf("%f", & voltage);
    printf("Enter the Current: ");
    scanf("%f", & current);
    power = voltage * current;
    printf("Power consumption: %.2f W\n", power);
    printf("Maximum allowed power: %.1fW\n", max_power);
    
    if (power > 5) {
    	printf("The power is higher than safe limit.\n");
    	return 0;
    	}
    else if (power <= 5) {
    	printf("The power is within the safe limit.\n");
    	return 1;
    	}

    // TODO: Read voltage and current, calculate power, and validate
    // Read voltage and current, calculate power, and validate
}
#endif

