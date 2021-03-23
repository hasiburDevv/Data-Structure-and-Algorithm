#include <iostream>
#include "sortedtype.cpp"
using namespace std;

template <class T>
void Print(SortedType<T> u) {
    int length = u.LengthIs();
    T value;

    for(int i = 0; i<length; i++) {
        u.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template <class T>
void Retrieve(SortedType<T> u, T value) {
     bool b;
     u.RetrieveItem(value, b);

     if(b) {
        cout << "Item is found" << endl;
     } else {
        cout << "Item is not found" << endl;
     }
}

void checkFull(bool b) {
    if(b) {
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }
}

int main() {
    SortedType<int> ut; // create a object ut
    cout << ut.LengthIs() << endl;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(4);
    ut.InsertItem(2);
    ut.InsertItem(1);
    Print(ut);

    Retrieve(ut, 6);
    Retrieve(ut, 5);
    checkFull(ut.IsFull());

    ut.DeleteItem(1);

    Print(ut);
    checkFull(ut.IsFull());


// 0
// 5 7 4 2 1
// 1 2 4 5 7
// Item is not found
// Item is found
// List is full
// 2 4 5 7
// List is not full

    return 0;
}
