#include <iostream>

using namespace std;

int main() {
    char hex = 'A';
    int decimal;
    decimal = 10 + (hex - 'A');
    cout << "Hex digit " << hex << " is decimal " << decimal << endl;
    return 0;
}