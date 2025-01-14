#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bubleSort(int array[],int len){
    int i,j,swapped;
    for(i = 0;i < len-1; i++){
        for(j = 0;j<len-i-1;j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            swapped++;
        }
    }
    return swapped;
}

void print_array(int array[],int len){
    for(int i = 0; i < len; i++){
        printf("%d,",array[i]);
    }
    printf("\n\n");
}

int main(void){

    int array[] = {10,22,3,4,44,555,666,777,5,77,44,64,67,100,1000,101};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Before sorting the array\n");
    print_array(array,len);
    int done = bubleSort(array,len);
    printf("After sorting the array\n");
    print_array(array,len);
}
