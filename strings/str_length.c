#include<stdio.h>

int main(){
    char str[]="hello";

    char *p=str;
    int length=0;
    while (*p != '\0'){
        length++;
        p++;


    }
    printf("%d",length);
}