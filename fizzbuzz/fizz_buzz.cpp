#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Fizzbuzz \n";
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 3 == 0)
            cout << "Fizz Buzz \n";
        else if (i % 5 == 0)
            cout << "Buzz \n";
        else if (i % 3 == 0)
            cout << "Fizz \n";
        else
            cout << i << endl;
    }
    return 0;
}