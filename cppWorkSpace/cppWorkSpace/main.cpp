/*
 * Arrays are compound data type. It means that these are collection of other data type. 
 * 
 * */
 
 #include <iostream>

int main(int argc, char **argv)
{
    int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int idx = 0; idx < 10; idx++) {
        std::cout << arr[idx];
    }
    std::cout << std::endl;
    
    std::cout << "Modifying the values of arrays elements" << std::endl;
    std::cout << "(&arr + 1): " << (&arr + 1) << std::endl;
    std::cout << "*(&arr + 1): " << *(&arr + 1) << std::endl;
    auto size = *(&arr + 1) - arr; // &arr returns a pointer 
    std::cout << size << std::endl;

//    for(int idx = 9; idx >= 0; idx--) {
//        int temp = arr[0];
//        arr[0] = arr[9 - 1];
//        arr[9 - 1] = temp;
//        std::cout << arr[idx];
//    }
    std::cout<< std::endl;
    
	std::cout << "hello world\n" << std::endl;
	return 0;
}
