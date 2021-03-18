#include <bits/stdc++.h>
using namespace std;

int main() {
int arrSize;
cout<<"give the size of the array = ";
cin>>arrSize;
int *ptr = new int(arrSize);

cout<<"Assign values to the arrays"<<endl;
for (int i = 0; i<arrSize; i++){
    cin>> ptr[i];
}
for (int i = 0; i<arrSize; i++){
cout<<i<<" = "<<ptr[i]<<endl;
}
delete ptr;
//*ptr = NULL;

cout<<"After de-allocate the arrays"<<endl;
for (int i = 0; i<arrSize; i++){
cout<<i<<" = "<<ptr[i]<<endl;
    }
}
