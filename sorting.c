#include<stdio.h>
int main(void){
    
    int arr[5] = {5, 4, 3, 2, 1};
    int i, j, temp;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5 - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp; 
            }
        }

        for(int k = 0; k < 5; k++){
            printf("%d \n ", arr[k]);
        }
    }
    return 0;
}