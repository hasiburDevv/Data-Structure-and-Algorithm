// 22 Feb 2021 Class

#include<stdio.h>

int findMax (int* p){
    int max_value = *p;
    for(int i=1; i<10; i++){
        if(max_value < *(p+i)){
            max_value = *(p+i);
        }
    }
    return max_value;
}

int main(){
    int numbers [10] = {88, 45, 21, 56, 78,
                       9,-19, 49, 68, 10};
    int* ptr = &numbers[0];
    int max_value = findMax(ptr); // call-by-reference
    //int max_value = findMax(numbers); //call-by-value
    printf("%d", max_value);

}
