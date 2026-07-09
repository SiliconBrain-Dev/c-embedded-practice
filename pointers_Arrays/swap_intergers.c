#include<stdio.h>



void swap(int *p,int *l){
    int temp;
    temp=*p;
    *p=*l;
    *l=temp;


}


int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int *p1=&n;
    int *p2=&k;

    swap(p1,p2);

    printf("x = %d, y = %d\n", n, k);

 
}