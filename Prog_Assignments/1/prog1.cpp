#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

/**
 * Used chat gpt to help open the file and read from it
 * Also to help print the strings with the signs using the ? operator at
 * the end
 */

int signedMag(int decimalValue) {
    if (decimalValue >= 32) {
        return -(decimalValue - 32);
    }
    else {
        return decimalValue;
    }
}

int onesComp(int decimalValue) {
    return (decimalValue >= 32) ? (63 - decimalValue) : decimalValue;
}

int twosComp(int decimalValue) {
    if (decimalValue >= 32) {
        return -(64 - decimalValue);
    }
    else {
        return decimalValue;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Need input file ";
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        int base;
        std::string value;
        iss >> base >> value;

        // first convert to decimal
        int decVal = std::stoi(value, nullptr, base);

        int unsignedValue = decVal;
        int signedMagVal = signedMag(decVal);
        int onesCompVal = onesComp(decVal);
        int twosCompVal = twosComp(decVal);

        std::cout << unsignedValue << " "
                  << (signedMagVal >= 0 ? "+" : "") << signedMagVal << " "
                  << (onesCompVal >= 0 ? "+" : "") << onesCompVal << " "
                  << (twosCompVal >= 0 ? "+" : "") << twosCompVal << std::endl;
    }

    inputFile.close();
    return 0;
}
