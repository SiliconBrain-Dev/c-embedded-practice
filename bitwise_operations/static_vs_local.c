#include<stdio.h>

void count(){

    static int n=0; // created once only
    int p=0;
    n++;
    p++;
    printf("%d\n%d\n\n",n,p);

}


int main(){

    count();
    count();
    count();
    
}