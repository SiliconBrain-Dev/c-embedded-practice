#include<stdio.h>

int fxn(int arr[]){
    int *p=arr;
    int sum=0;
    int max=*p;
    for(int j=0;j<4;j++){
        sum+=*(p+j);

        if (*(p + j) > max) {
            max = *(p + j); 
        }

    }

    return sum;

}

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);

    }

    printf("%d",fxn(arr));
    
}
