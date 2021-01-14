#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, num3;
    int sum, average, product, smallest, largest;

    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    average = sum / 3;
    product = num1 * num2 * num3;

    smallest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }

    if (num3 < smallest)
    {
        smallest = num3;
    }

    largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }

    if (num3 > largest)
    {
        largest = num3;
    }

    cout << '\n' << "Sum is: " << sum;
    cout << '\n' << "Average is: " << average;
    cout << '\n' << "Product is: " << product;
    cout << '\n' << "Smallest is: " << smallest;
    cout << '\n' << "Largest is: " << largest << '\n';
}