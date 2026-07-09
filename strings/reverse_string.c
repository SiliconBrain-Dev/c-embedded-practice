#include<stdio.h>

int main(){
    char str[]="hello";

    
    char *start=str;
    char *end=str+4;

    while (start<end){
        char temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }

    printf("%s",str);
}