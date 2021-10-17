#include <bits/stdc++.h>

using namespace std;

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left) {
    return distance_to_pump<= mpg*fuel_left;
}