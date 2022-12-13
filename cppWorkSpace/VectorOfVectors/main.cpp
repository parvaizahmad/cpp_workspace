/* This is a testing project template by Parvaiz Ahmad*/
#include <iostream>
#include <vector>
#include <cstdint>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int numSQ = 2;
    int bufSize = 4;
    std::vector<std::vector<int>> writeBuffers;
    std::vector<std::vector<int>> readBuffers;
    
    for(int i = 0; i < numSQ; ++i){
        std::vector<int> tempData;
        for(int j = 0; j < bufSize; ++j){
            tempData.push_back(rand() % 0x100);
        }
        writeBuffers.push_back(tempData);
        cout << "This is the size of tempData befor move " << tempData.size() << endl;
        readBuffers.push_back(std::move(tempData));
        cout << "This is the size of tempData after move " << tempData.size() << endl;
    }
    cout << "This is write buffer " << endl;
    for(int i = 0; i < numSQ; i++) {
        for(int j = 0; j < bufSize; j++){
           cout << writeBuffers[i][j] << " "; 
        }
        cout << endl;
    }
    
    cout << "This is read buffer " << endl;
    for(int i = 0; i < numSQ; i++) {
        for(int j = 0; j < bufSize; j++){
           cout << readBuffers[i][j] << " "; 
        }
        cout << endl;
    }
    cout << "Starting address of buffer " << writeBuffers[0].data() << endl;
    for(int i = 0; i < numSQ; i++){
        if(readBuffers[i] == writeBuffers[i]){
            cout << "Submission queue " << i << " data verification passed." <<endl;
        }
        else if(readBuffers[i] != writeBuffers[i]){
            cout << "Submission queue " << i << " data verification failed." <<endl;
        }
    }
     getchar();   
    return 0;    
}

