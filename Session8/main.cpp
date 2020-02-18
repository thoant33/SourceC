#include <iostream>

using namespace std;

int main() {
    cout << " \nSession 8:" << endl;
    
    cout << " \nEnter an amount in cents: ";
    
    int cent_of_you {0};
    cin >> cent_of_you;
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    
    cout << "\nIn the US:\n"<< endl;
    cout << "   1 dollar is " << dollar << " cents\n"<< endl;
    cout << "   1 quarter is " << quarter <<" cents\n" << endl;
    cout << "   1 dime is " << dime <<" cents\n" << endl;
    cout << "   1 nickel is " << nickel <<" cents, and\n" << endl;
    cout << "   1 penny is " << penny <<" cent.\n" << endl;
    
    cout << "\nYou can provide this change as follows:"<< endl;

    int number_provide_dollar = 0;
    for(int i = 1; i <= cent_of_you; i++){
        if(i%dollar == 0){
            number_provide_dollar++;
        }
    }
    cout << "\n dollars: " << number_provide_dollar << endl;
    
    int number_provide_quarter = 0;
    for(int i = 1; i <= (cent_of_you - (number_provide_dollar * dollar)); i++){
        if(i%quarter == 0){
            number_provide_quarter++;
        }
    }
    cout << "\n quarters: " << number_provide_quarter << endl;
    
    int number_provide_dime = 0;
    for(int i = 1; i <= (cent_of_you - (number_provide_dollar * dollar + number_provide_quarter * quarter)); i++){
        if(i%dime == 0){
            number_provide_dime++;
        }
    }
    cout << "\n dimes: " << number_provide_dime << endl;
    
    int number_provide_nickel = 0;
    for(int i = 1; i <= (cent_of_you - (number_provide_dollar * dollar + number_provide_quarter * quarter + number_provide_dime * dime)); i++){
        if(i%nickel == 0){
            number_provide_nickel++;
        }
    }
    cout << "\n nickels: " << number_provide_nickel << endl;
    
    int number_provide_penny = 0;
    for(int i = 1; i <= (cent_of_you - (number_provide_dollar * dollar + number_provide_quarter * quarter + number_provide_dime * dime + number_provide_nickel * nickel)); i++){
        if(i%penny == 0){
            number_provide_penny++;
        }
    }
    cout << "\n pennies: " << number_provide_penny << endl;
    
    cout << endl;
    return 0;
}

