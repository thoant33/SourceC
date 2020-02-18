#include <iostream>
#include <cstring> // for c-style string functions
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    char message[50];
    cout << "Enter your secret message: ";
    cin.getline(message, 50);

    for(size_t i {0}; i <= strlen(message); i++){
        int index = alphabet.find(message[i]);
        if(index != -1){
            message[i] = key[index];  
        }
    }
    cout << "Encrypting message...."<< endl;
    cout << "Encrypting message: "<< message<< endl;
    
    for(size_t i {0}; i <= strlen(message); i++){
        int index = key.find(message[i]);
        if(index != -1){
            message[i] = alphabet[index];  
        }
    }
    cout << "Decrypting message...."<< endl;
    cout << "Decrypting message: "<< message << endl;
    
    cout << endl;
    return 0;
}
