#include <iostream>
#include <string>

using namespace std;

string encryptMessage(string inputMessage);
string decryptMessage(string inputMessage);

int main(int argc, char **argv)
{   
    string inputMessage = {};
    cout << "Enter your message: " << endl;
    getline(cin, inputMessage);
    cout << "Your origional message is: " << inputMessage << endl;
    
    string encryptedMsg = encryptMessage(inputMessage);
    
    cout << "Encrypted message: " << encryptedMsg << endl; 
    
    string decryptedMsg = decryptMessage(encryptedMsg);
    
    cout << "Decrypted message: " << decryptedMsg << endl;
    
    return 0;
}


string encryptMessage(string inputMessage) {
    for(size_t idx = 0; idx < inputMessage.length(); idx++) {
        if(isalpha(inputMessage.at(idx))) {
            switch(inputMessage.at(idx)) {
                case 'a':
                inputMessage.at(idx) = 'q';
                break;
                
                case 'b':
                inputMessage.at(idx) = 'w';
                break;
                
                case 'c':
                inputMessage.at(idx) = 'e';
                break;
                
                case 'd':
                inputMessage.at(idx) = 'r';
                break;
                
                case 'e':
                inputMessage.at(idx) = 't';
                break;
                
                case 'f':
                inputMessage.at(idx) = 'y';
                break;
                
                case 'g':
                inputMessage.at(idx) = 'u';
                break;
                
                case 'h':
                inputMessage.at(idx) = 'i';
                break;
                
                case 'i':
                inputMessage.at(idx) = 'o';
                break;
                
                case 'j':
                inputMessage.at(idx) = 'p';
                break;
                
                case 'k':
                inputMessage.at(idx) = 'a';
                break;
                
                case 'l':
                inputMessage.at(idx) = 's';
                break;
                
                case 'm':
                inputMessage.at(idx) = 'd';
                break;
                
                case 'n':
                inputMessage.at(idx) = 'f';
                break;
                
                case 'o':
                inputMessage.at(idx) = 'g';
                break;
                
                case 'p':
                inputMessage.at(idx) = 'h';
                break;
                
                case 'q':
                inputMessage.at(idx) = 'j';
                break;
                
                case 'r':
                inputMessage.at(idx) = 'k';
                break;
                
                case 's':
                inputMessage.at(idx) = 'l';
                break;
                
                case 't':
                inputMessage.at(idx) = 'z';
                break;
                
                case 'u':
                inputMessage.at(idx) = 'x';
                break;
                
                case 'v':
                inputMessage.at(idx) = 'c';
                break;
                
                case 'w':
                inputMessage.at(idx) = 'v';
                break;
                
                case 'x':
                inputMessage.at(idx) = 'b';
                break;
                
                case 'y':
                inputMessage.at(idx) = 'n';
                break;
                
                case 'z':
                inputMessage.at(idx) = 'm';
                break;
                
            }
        }
    }
    return inputMessage;
}

string decryptMessage(string inputMessage) {
    for(size_t idx = 0; idx < inputMessage.length(); idx++) {
        if(isalpha(inputMessage.at(idx))) {
            switch(inputMessage.at(idx)) {
                case 'q':
                inputMessage.at(idx) = 'a';
                break;
                
                case 'w':
                inputMessage.at(idx) = 'b';
                break;
                
                case 'e':
                inputMessage.at(idx) = 'c';
                break;
                
                case 'r':
                inputMessage.at(idx) = 'd';
                break;
                
                case 't':
                inputMessage.at(idx) = 'e';
                break;
                
                case 'y':
                inputMessage.at(idx) = 'f';
                break;
                
                case 'u':
                inputMessage.at(idx) = 'g';
                break;
                
                case 'i':
                inputMessage.at(idx) = 'h';
                break;
                
                case 'o':
                inputMessage.at(idx) = 'i';
                break;
                
                case 'p':
                inputMessage.at(idx) = 'j';
                break;
                
                case 'a':
                inputMessage.at(idx) = 'k';
                break;
                
                case 's':
                inputMessage.at(idx) = 'l';
                break;
                
                case 'd':
                inputMessage.at(idx) = 'm';
                break;
                
                case 'f':
                inputMessage.at(idx) = 'n';
                break;
                
                case 'g':
                inputMessage.at(idx) = 'o';
                break;
                
                case 'h':
                inputMessage.at(idx) = 'p';
                break;
                
                case 'j':
                inputMessage.at(idx) = 'q';
                break;
                
                case 'k':
                inputMessage.at(idx) = 'r';
                break;
                
                case 'l':
                inputMessage.at(idx) = 's';
                break;
                
                case 'z':
                inputMessage.at(idx) = 't';
                break;
                
                case 'x':
                inputMessage.at(idx) = 'u';
                break;
                
                case 'c':
                inputMessage.at(idx) = 'v';
                break;
                
                case 'v':
                inputMessage.at(idx) = 'w';
                break;
                
                case 'b':
                inputMessage.at(idx) = 'x';
                break;
                
                case 'n':
                inputMessage.at(idx) = 'y';
                break;
                
                case 'm':
                inputMessage.at(idx) = 'z';
                break;
                
            }
        }
    }
    return inputMessage;
}