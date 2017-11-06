/** Computer Programming
 *  Clesius to Fahrenheit Conversion
 *  C00187998
 *  Gerard Murphy
 *  25/09/17
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "Celsius to Fahrenheit Temperature Conversion" << endl;

    double celsius, fahrenheit;//variable declaration

    cout << "Enter temp in Celsius: ";
    cin >> celsius;//read in temp in celsius


    fahrenheit = 9/5.0 * celsius + 32;//fahrenheit calculation

    cout<<"The value in Fahrenheit is: "<< fahrenheit << endl;//output temperature in fahrenheit
    return 0;
}
