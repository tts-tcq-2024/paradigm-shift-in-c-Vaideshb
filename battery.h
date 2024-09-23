#ifndef BATTERY_H
#define BATTERY_H

// Constants for battery limits
#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0
#define MIN_SOC 20.0
#define MAX_SOC 80.0
#define MAX_CHARGE_RATE 0.8

// Function declarations
int isTemperatureInRange(float temp);
int isSocInRange(float soc);
int isChargeRateInRange(float chargeRate);
int isBatteryOk(float temp, float soc, float chargeRate);

#endif // BATTERY_H
