/* This is a testing project template by Parvaiz Ahmad*/
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
    std::vector<int> vec {1, 2, 4, 5, 2};
    vector<vector<int>> dVector = {
                                    {1, 2, 3, 4, 5, 6, 7},
                                    {7, 8, 9, 10, 11, 12, 13}
                                    };
    cout << dVector.at(1).at(1); // Accessing the 2d vectors.
    std::vector<int> temperatures = {1, 2, 3, 4, 5};
    for(auto it = temperatures.begin(); it < temperatures.end(); it++) {
        std::cout << *it << std::endl;
    }
    temperatures.clear();
    
    for(auto it = temperatures.begin(); it < temperatures.end(); it++) {
        std::cout << "Nothing to print." << std::endl;
        std::cout << *it << std::endl;
    }
    auto rspsToReceive = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "sum is : " << rspsToReceive << std::endl;  
    return 0;    
}

