#include <iostream>


using namespace std;
int main () {
    cout << "Frank's Carpet Cleaning Services" << endl;
    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    const double small_room_charges {25};
    const double large_room_charges {35};
    double tax_rate {0.06};
    int estimate_validity_days {30};
    
    cout << "\nEstimates for carpet cleaning services" << endl;
    cout << "Number of small rooms: ";
    cin >> number_of_small_rooms;
    cout << "Number of large rooms: ";
    cin >> number_of_large_rooms;
    cout << "Price per small room: $" << small_room_charges << endl;
    cout << "Price per large room: $" << large_room_charges << endl;
    int total_charges_small_room = small_room_charges * number_of_small_rooms;
    int total_charges_large_room = large_room_charges * number_of_large_rooms;
    double tax_charges = (total_charges_small_room + total_charges_large_room) * tax_rate;
    
    cout << "Tax: $" << tax_charges << endl;
    cout << "=============================" << endl;
    cout << "Total Estimate: $" << total_charges_small_room + total_charges_large_room + tax_charges << endl;
    cout << "This estimate is valid for " << estimate_validity_days << endl;
}