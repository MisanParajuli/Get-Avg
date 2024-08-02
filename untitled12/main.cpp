//User provides 10 random numbers, the program will choose the largest
// and the smallest number and find average

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int SIZE, number, greatest , smallest;

    cout << "Enter the number of vectors ";
    cin >> SIZE;
    while (SIZE <=0){
        cout << "Invalid entry, Enter number greater than zero: ";
        cin >> SIZE;
    }

    vector<int>num;

    cout << "Enter numbers" << endl;

    for (size_t i =0; i<SIZE; i++){
        cin >> number;
        num.push_back(number);
    };

    cout << endl << endl;

    greatest = num.at(0);
    for (size_t i =1; i<SIZE; i++) {
        if(greatest < num.at(i)) greatest = num.at(i);
    }

    cout << greatest << endl;

    smallest = num.at(0);
    for (size_t i =1; i<SIZE; i++) {
        if(smallest > num.at(i)) smallest = num.at(i);
    }

    cout << smallest << endl;

    cout << "The average of the greatest and smallest num is " << double (greatest + smallest)/2 << endl;

    return 0;
}
