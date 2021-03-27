#include <iostream>
#include "parentheses_task02.cpp"
using namespace std;

// function to check if brackets are balanced
template <class T>
bool areBalanced(StackType<T> s) {
char x;
string expr;

cin >> expr;// "{()}";


for( int i = 0; i < expr.length(); i++) {
    if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
        // Push the element in the stack
        s.Push(expr[i]);
    }

    // IF current current character is not opening
    // bracket, then it must be closing. So stack
    // cannot be empty at this point.
    if (s.IsEmpty() == 1) {
        return false;
    }

    if (expr[i] == ')') {
        x = s.Top(); // // Store the top element in x
        s.Pop();
            if (x == '{' || x == '[') {
                return false;
            }
    } else if (expr[i] == '}') {
        x = s.Top(); // Store the top element in x
        s.Pop();
            if (x == '(' || x == '[') {
                return false;
            }
    } else if (expr[i] == ']') {
        x = s.Top(); // Store the top element in x
        s.Pop();
            if (x == '(' || x == '{') {
                return false;
            }
    }
}

// Check Empty Stack
return (s.IsEmpty());
}

// Driver code
int main() {
StackType<char> s;

// Function call
if (areBalanced(s)) {
    cout << "Balanced";
 } else {
    cout << "Not Balanced";
}

}
