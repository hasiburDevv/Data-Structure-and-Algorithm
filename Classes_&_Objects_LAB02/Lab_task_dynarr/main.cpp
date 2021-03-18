#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
    dynArr obj1, obj2(5);
    int data;

    for(int i = 0; i<5; i++) {
        cin >> data;
        obj2.setValue(i, data);
    }

    cout<<obj2.getValue(0)<<endl;
    return 0;
}
