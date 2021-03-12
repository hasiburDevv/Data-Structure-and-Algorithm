#include<bits/stdc++.h>
using namespace std;

class dataStructure {
public:
int k = 5, m = 6;
//access specifier public or private
void print1() {
    cout<<"print1 function"<<endl;
    }

void print2() {
    cout<<"print2 function<"<<endl;
    }

private:
int privateVariable = 99;
};

int main(){
//creating object so that our program knows the function belongs to which class.
dataStructure obj1;

cout<<"Accessing object 1"<<endl;
obj1.print1();
cout<<"value of k is "<<obj1.k<<endl;
}
