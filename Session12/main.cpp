#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

void display(int *array, size_t size){
    cout<< "[ ";
    for(size_t i{0}; i<size; ++i)
        cout << array[i] << " ";
    cout << "]"<< endl;
}

int *apply_all(int array1[], size_t array1_size, int array2[], size_t array2_size){
    int *new_storage{nullptr};
    int size = array1_size * array2_size;
    int index = 0;
    new_storage = new int[size];
    for(size_t j {0}; j < array2_size; j++){
            for(size_t k{0}; k< array1_size; k++){
                *(new_storage + index++) = array2[j] * array1[k];
            }
        }
    return new_storage;
}

int main(int argc, char **argv)
{
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    cout<< "[ ";
    for(auto value: array1)
        cout << value << " ";
    cout << "]" << endl;
    
    cout << "\nArray 2: " ;
    cout<< "[ ";
    for(auto value: array2)
        cout << value << " ";
    cout << "]" << endl;
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    cout << "\nArray result: ";
    display(results , (array1_size * array2_size));
    
    cout << endl;
    
	return 0;
}
