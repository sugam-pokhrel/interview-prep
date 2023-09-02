#include<stdio.h>
int main(void){
    
    int arr[]={5,4,1,3,2};
    for(int i=(sizeof(arr)/sizeof(int))-1;i>=0;i--){
        for(int j=0;j<sizeof(arr)/sizeof(int)-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        
    

    }

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
    return 0;

}