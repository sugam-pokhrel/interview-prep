#include<stdio.h>
int main()
{
    int arr[]={5,4,3,1,2};
    for(int i=0;i<(sizeof(arr)/sizeof(int))-1;i++){
        //the loop will be started from the first element of the array
        int min=i;
        for(int j=i;j<(sizeof(arr)/sizeof(int));j++){
            if(arr[j]<=arr[min]){
                min=j;
            }




        } //the above j loop will make the min the value of min element's index in the array
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        //swaping the min element with the ith element


    }

    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        printf("%d ",arr[i]);
    }
    return 0;
}