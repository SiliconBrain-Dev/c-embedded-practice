#include<stdio.h>

int main(){
    char str1[]="hello";
    char str2[6];
    
    scanf("%s",str2);
 

    char *p1=str1;
    char *p2=str2;

    int match=1;

    while (*p1!='\0' && *p2!='\0' ){
        if(*p1!=*p2){
            match=0;
            break;


        }else{
            p1++;
            p2++;
            continue;
        }
    }

    if(match==0){
        printf("not matching");
    }else{
        printf("matched");
    }

    return 0;



    
}