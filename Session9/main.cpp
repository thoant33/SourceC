#include <iostream>
#include <vector> 

using namespace std;

int main() {
    char choice {};
    vector <int> vector_number;
    int number;
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
        
        if(choice == 'p' || choice == 'P')
            if(vector_number.size() == 0)
                cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[" ;
                for(int i {0}; i < vector_number.size(); i++){
                    if(i == (vector_number.size() - 1)){
                        cout << vector_number[i];
                    }else{
                        cout << vector_number[i] << " ";
                    }
                }
                cout << "]" << endl;
            }
        else if(choice == 'a' || choice == 'A')
            {
                cout << "you should prompt the user for an integer to add to the list: " << endl;
                cin >> number;
                cout << number << " added."<<endl;
                vector_number.push_back(number);
            }
        else if(choice == 'm' || choice == 'M')
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
            }
        else if(choice == 's' || choice == 'S')
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
            }
        else if(choice == 'l' || choice == 'L')
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
            }
        else if(choice == 'd' || choice == 'D')
            {
                vector_number.clear();
                cout<< "Clear success" << endl;
            }
        else if(choice == 'Q' || choice == 'q')
            cout << "Goodbye..." <<endl;
        else
            cout << "Unknown option...try again..." <<endl;
    }while(choice != 'q' && choice != 'Q');

    cout<<endl;
    return 0;
}



