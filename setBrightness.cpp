#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char** argv) {
    int brightness = atoi(argv[1]);
    //std::cin >> brightness;

    std::ofstream brightnessF("/sys/class/backlight/intel_backlight/brightness");

    brightnessF << brightness;
}

