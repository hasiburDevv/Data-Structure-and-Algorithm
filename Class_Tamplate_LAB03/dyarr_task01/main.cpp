#include <iostream>
#include "dyarr_task01.h"
#include "dyarr_task01.cpp"
using namespace std;

int main() {
    int input, s = 5; //size of the dynamic array will be 5
    // dynArr di(s);
    dynArr<int> di(s);
    // populating the array
    for( int i = 0; i<s; i++) {
        cout<<"Please give input"<<endl;
        cin >> input;
        di.setValue(i, input);
    }
    cout<<"The values are "<<endl;
    for(int i = 0; i<s; i++) {
        cout<< di.getValue(i) << " ";
    }
    return 0;
}
