#include<stdio.h>

int main(){

    int a = 10;
    int* p = &a; // p -> a
    // pointers of pointers
    // q -> p -> a

    int** q = &p;


    printf("a = %d\n", a); // 10
    printf("&a = %p\n", &a); // addr of a
    printf("p = %p\n", p); // content of p = addr of a
    printf("*p = %d\n", *p); // 10
    printf("**q = %d\n", **q); // 10

    *p = *p + **q ; // update the value of the actual variable through pointers
    // a = a + a;

    printf("a = %d", a); //

    return 0;

}
