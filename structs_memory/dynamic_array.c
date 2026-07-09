#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    int *arr;

    // memory allocated
    arr=(int *)malloc((n)*sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]); 
    }

    for(int i=0;i<n;i++){
        printf("%d\n5",arr[i]);
    }

}

