#include <iostream>
#include "stacktype.cpp"
using namespace std;

template <class T>
void printStack(StackType<T> s) {
//void PrintStack(stack<int> s) {
    // If stack is empty then return
    if (s.IsEmpty())
        return;

    int x = s.Top();
    // Pop the top element of the stack
    s.Pop();

    // Recursively call the function PrintStack
    printStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
    s.Push(x);
}

void checkEmpty(bool b) {
    if(b) {
    cout<<"Stack is Empty"<<endl;
} else {
    cout<<"Stack is not Empty"<<endl;
}
}

void checkFull(bool b) {
    if(b) {
    cout<<"Stack is full"<<endl;
} else {
    cout<<"Stack is not full"<<endl;
}
}

int main()
{
StackType<int> obj;

checkEmpty(obj.IsEmpty());

obj.Push(5);
obj.Push(7);
obj.Push(4);
obj.Push(2);

checkEmpty(obj.IsEmpty());

checkFull(obj.IsFull());

printStack(obj);
cout<<endl;
obj.Push(3);

printStack(obj);
cout<<endl;
checkFull(obj.IsFull());
obj.Pop();
obj.Pop();
cout<<obj.Top()<<endl;

// Stack is Empty
// Stack is not Empty
// Stack is not full
// 5 7 4 2
// 5 7 4 2 3
// Stack is full
// 4
}
