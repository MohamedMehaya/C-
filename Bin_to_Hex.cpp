#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    // Read the input binary number as a string
    string binary_input;
    getline(cin, binary_input);

    // Convert the binary string to an unsigned long long (64-bit) integer
    unsigned long long decimal_val = bitset<64>(binary_input).to_ullong();

    // Create a stringstream to format the output
    stringstream hex_output;

    // Set the output format to hexadecimal and insert the decimal value into the stringstream
    hex_output << hex << uppercase << decimal_val;

    // Get the hexadecimal string from the stringstream
    string hex_string = hex_output.str();

    // Output the hexadecimal representation of the binary number
    cout << "Hexadecimal: " << hex_string << endl;

    return 0;
}
