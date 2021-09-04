#include <iostream>
using namespace std;

int sum_of_squares(int value)
{
    int sum = 0, copy_value = value;
    

    while (value) {
        sum = sum + value * value;
        value--;
    }

    cout << "Sum of squares from 1 to " << copy_value << ": " << sum << endl;
    return 0;
}

int check_value(int value)
{
    if (value > 0) {   
        sum_of_squares(value);
    } else {
        cout << "Incorrect value" << endl;
    }
}


int main() 
{
    cout << "Enter the value > 0: " << endl;

    int value;
    cin >> value;

    return 0;
}
