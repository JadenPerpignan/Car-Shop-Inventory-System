#include <iostream>
using namespace std;

class Car {
public:
    string make;
    string model;
    string color;
    string trim;
    int year;
};
Car * getdata ( int size ) {
    Car * c = new Car[size];

// User Input
    for ( int i = 0 ; i < size ; i ++ ) {
        cout << endl << "Please enter the make: ";
        cin >> ( c + i ) -> make;
        cout << "Now enter the model: ";
        cin >> ( c + i ) -> model;
        cout << "Now enter the year: ";
        cin >> ( c + i ) -> year;
        cout << "Now please enter the color: ";
        cin >> (c + i) -> color;
        cout << "Now finally enter the trim: ";
        cin >> (c + i) -> trim;
    }
    return c;
}
//Print data
void printdata ( Car * c , int size ) {
    for ( int i = 0 ; i < size ; i ++ ) {
        cout << endl << endl << "Make: " << ( c + i ) -> make;
        cout << endl << "Model: " << ( c + i ) -> model;
        cout << endl << "Year: " << ( c + i ) -> year;
        cout << endl << "Color: " << (c + i) -> color;
        cout << endl << "Trim: " << (c + i) -> trim;
    }
}

int main ( ) {
    int num;

    cout << "Greetings! How many car's would you like to enter?: ";
    cin >> num;

    Car * c = getdata ( num );

    cout << endl << endl << "The detail's for the car is given below:";

    printdata ( c , num );

    cout << endl << endl << "Thank You! Please use this program for all your car detail needs." << endl;

    return 0;
}
