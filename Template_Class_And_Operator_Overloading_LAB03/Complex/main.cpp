#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    //creating object;
    Complex obj_c1(5, 2), obj_c2(5, 3);
    Complex obj_c3 = obj_c1 + obj_c2;
    Complex obj_c4 = obj_c1 * obj_c2;
    bool boolean = (obj_c1 != obj_c1);

    cout<<" addition of complex number: ";
    obj_c3.Print(); //  addition of complex number: Real = 10; Imaginary = 5
    cout<<" multiplication of complex number: ";
    obj_c4.Print(); // //  multiplication of complex number: Real = 25; Imaginary = 6

    if(boolean == 0) {
        cout<<"Not equal"<<endl;
    } else {
        cout<<"Equal"<<endl; // Equal
    }
    return 0;
}
