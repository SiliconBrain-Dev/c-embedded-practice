#include<stdio.h>

void reverse(int arr[] , int n){
    int *start=arr;
    int *end=arr+n-1;
    int temp;

    while (start<end){
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }



}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);

    }

    reverse(arr,5);

    for(int k=0;k<5;k++){
        printf("%d\n",arr[k]);

    }

}