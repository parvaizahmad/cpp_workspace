#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ."};
    string key {"qazwsxedcrfvtgbyhnujmiklopPOLKIMJUNHYBGTVFRCDEXSWZAQ+!"};
    string message {}, encreptedMessage {};
    cout << "Enter you message: ";
    getline(cin, message);
    encreptedMessage = message;
    for(size_t i {0}; i < message.length(); i++) {
        size_t pos = alphabets.find(message.at(i));
        if (pos != string::npos) {
            encreptedMessage.at(i) = key.at(pos);
        } 
        else {
            encreptedMessage.at(i) = message.at(i);
        }
    }
    cout << "Message has been encrypted successfully." << endl;
    cout << encreptedMessage << endl;
    
    cout << "Now decrepting message..." << endl;
    for(size_t i {0}; i < encreptedMessage.length(); i++) {
        size_t pos = key.find(encreptedMessage.at(i));
        if (pos != string::npos) {
            message.at(i) = alphabets.at(pos);
        } 
        else {
            message.at(i) = encreptedMessage.at(i);
        }
    }
    cout << "Message has been decrypted successfully." << endl;
    cout << message << endl;
	return 0;
}
