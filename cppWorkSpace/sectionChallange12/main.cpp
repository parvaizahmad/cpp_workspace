#include <iostream>

using namespace std;

int* apply_all(int* arr1, size_t size1, int* arr2, size_t size2) {
    size_t position = 0;
    int* result {};
    result = new int[size1*size2];
    cout << "Mem assigned." << endl;
    for(size_t i = 0; i < size1; i++) {
        for(size_t j = 0; j < size2; j++) {
            result[position]  = arr1[i] * arr2[j];
            ++position;
        }
    }
    return result;
}

void printdata(int* data, size_t size) {
    for(size_t i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
}

int main(int argc, char **argv)
{
    int arr[5] {1, 2, 3, 4, 5};
    int arr2[3] {10, 20, 30};
    
    int* result = apply_all(arr, 5,arr2, 3);
    printdata(result, 15);
    delete [] result;
    return 0;
}