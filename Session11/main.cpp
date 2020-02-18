#include <iostream>
#include <vector> 
#include <stdio.h>

using namespace std;

vector <int> vector_number;

void print_number(){
    if(vector_number.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
    {
        cout << "[" ;
        for(auto number : vector_number){
            if(number == vector_number[vector_number.size() - 1]){
                cout << number;
            }else{
                cout << number << " ";
            }
        }
        cout << "]" << endl;
    }
};

void add_number(){
    int number;
    cout << "you should prompt the user for an integer to add to the list: " << endl;
    cin >> number;
    cout << number << " added."<<endl;
    vector_number.push_back(number);
};

void average_of_the_elements()
{
    int total = 0;
    for(auto number: vector_number){
        total += number;
    }
    if(total == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }else{
        cout << "the mean or average of the elements in the list: " << (double)total/vector_number.size()<<endl;
    }
};

void smallest_number()
{
    if(vector_number.size() == 0 ){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }else{
        int number_smallest = vector_number[0];
        for(auto number: vector_number){
            if(number_smallest > number ){
                number_smallest = number;
            }
        }
        cout << "The smallest number is " << number_smallest << endl;
    }
};

void largest_number()
{
    if(vector_number.size() == 0 ){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }else{
        int number_largest = vector_number[0];
        for(auto number: vector_number){
            if(number_largest < number ){
                number_largest = number;
            }
        }
        cout << "The largest number is " << number_largest << endl;
    }
};

void delete_array_number(){
    vector_number.clear();
    cout<< "Clear success" << endl;
};

void choice_value(char choice)
{
    if(choice == 'p' || choice == 'P')
        print_number();
    else if(choice == 'a' || choice == 'A')
        add_number();
    else if(choice == 'm' || choice == 'M')
        average_of_the_elements();
    else if(choice == 's' || choice == 'S')
        smallest_number();
    else if(choice == 'l' || choice == 'L')
        largest_number();
    else if(choice == 'd' || choice == 'D')
        delete_array_number();
    else if(choice == 'Q' || choice == 'q')
        cout << "Goodbye..." <<endl;
    else
        cout << "Unknown option...try again..." <<endl;
};

int main() {
    char choice {};
    do{
        cout << "\n.............." << endl;
        cout << "P - Print numbers" << endl;
        cout << "D - Delete array numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice:" << endl;
        cin >> choice;
        
        choice_value(choice);
    }while(choice != 'q' && choice != 'Q');

    cout<<endl;
    return 0;
}