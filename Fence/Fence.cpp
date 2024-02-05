
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // Constants
    const double squareFeetPerGallon = 340.0;
    const int numberOfCoats = 2;

    // Dimensions of the wooden fence
    const int fenceHeight = 6;
    const int fenceLength = 100;

    // Calculate total square feet to be painted
    double totalSquareFeet = numberOfCoats * 2.0 * fenceHeight * fenceLength;

    // Calculate gallons of paint needed
    double gallonsNeeded = (totalSquareFeet / squareFeetPerGallon);

    // Display the result
    cout << "To paint " << numberOfCoats << " coats on " << totalSquareFeet << " square feet of fence, you will need "
        << gallonsNeeded << " gallons of paint.\n" ;

    return 0;
}
