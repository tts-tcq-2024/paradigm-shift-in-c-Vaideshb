#include <stdio.h>
#include "battery.h"

// Function to check if the temperature is within range
int isTemperatureInRange(float temp) {  
  if(temp < MIN_TEMPERATURE || temp > MAX_TEMPERATURE) {
    printf("Temperature out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the state of charge is within range
int isSocInRange(float soc) {  
  if(soc < MIN_SOC || soc > MAX_SOC) {
    printf("State of Charge out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the charge rate is within range
int isChargeRateInRange(float chargeRate) {   
  if(chargeRate > MAX_CHARGE_RATE) {
    printf("Charge Rate out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the battery is okay
int isBatteryOk(float temp, float soc, float chargeRate) {
    return isTemperatureInRange(temp) && isSocInRange(soc) && isChargeRateInRange(chargeRate);
}
