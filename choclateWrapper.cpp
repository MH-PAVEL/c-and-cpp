#include <iostream>

using namespace std;

int main() {
    int totalChocolate = 0;
    int money = 15;
    int ChocolatePrice = 1;

    totalChocolate = money / ChocolatePrice;
    int wrappers = totalChocolate; // Initial wrappers obtained from buying chocolates

    while (wrappers >= 3) {
        int chocFromWrapper = wrappers / 3; // Chocolates obtained from wrappers
        totalChocolate += chocFromWrapper;   // Add chocolates to the total
        int remainingWrappers = wrappers % 3; // Calculate the remaining wrappers
        wrappers = chocFromWrapper + remainingWrappers; // Update the total wrappers
    }

    cout << "Total Chocolates: " << totalChocolate << endl;

    return 0;
}
