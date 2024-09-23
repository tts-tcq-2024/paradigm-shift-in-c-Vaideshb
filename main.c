#include <assert.h>
#include "battery.h"

int main() {
  // Test cases for normal conditions
  assert(isBatteryOk(25, 70, 0.7));  // Should pass
  // Test cases for abnormal conditions
  assert(!isBatteryOk(50, 85, 0));   // Should pass (battery is not okay)
  assert(!isBatteryOk(-5, 50, 0.5)); // Should pass (temperature out of range)
  assert(!isBatteryOk(25, 10, 0.5)); // Should pass (SOC out of range)
  assert(!isBatteryOk(25, 50, 1.0)); // Should pass (charge rate out of range)

  printf("All tests passed!\n");
  return 0;
}
