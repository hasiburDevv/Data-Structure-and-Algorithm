// Write a program that reads two integer values and
// swaps these values using a function named as swap_func

#include<stdio.h>

void swap_func(int* a, int* b){ // a -> x, b -> y
    int temp;
    temp = *a; // temp = x
    *a = *b; // x = y
    *b = temp; // y = x

    printf("inside the function: %d %d\n", *a, *b);

}
int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    swap_func(&x, &y); // passing the address

    printf("%d %d", x, y);


}
