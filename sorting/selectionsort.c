#include <stdio.h>

int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int selection_sort(int array[],int len){
    int i,j,index;
    
    for( i = 0; i < len; i++){
        index = i;

        for( j = i+1; j < len; j++ ){
            
            if(array[j] < array[i]){
                index = j;

            }
         }
        swap(&array[index],&array[i]);
    }
}

void print_array(int array[],int len){
    for( int i = 0; i < len; i++){
        printf("%d,",array[i]);
    }
}

int main(){
    int array[]={3,2,5,1,8,4,6};
    int len = (sizeof(array)/sizeof(array[0]));
    selection_sort(array,len);
    print_array(array,len);
}
