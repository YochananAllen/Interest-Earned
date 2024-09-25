// Interest Earned.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Titel: Intrest earned
// Name:Yochanan Allen
// Date: 09/24/24
//

#include <iostream>

using namespace std;

int main() 

{
    double principal;
    double rate;
    int timesCompounded;

   
    cout << "Enter the initial principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate in %: ";
    cin >> rate;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    
    rate /= 100;

    
    double amount = principal;
    double compoundFactor = 1 + rate / timesCompounded;

    for (int i = 0; i < timesCompounded; ++i) {
        amount *= compoundFactor;
    }

    
    cout << "\nInterest Rate: " << (rate * 100) << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Initial Principal: $" << principal << endl;
    cout << "Balance after 1 year: $" << amount << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
