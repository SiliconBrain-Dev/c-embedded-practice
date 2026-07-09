#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[7];
    int roll_no;
    int marks;
};

typedef struct{ // now we dont need to write the struct during the initialization
    char *name;
    int id_no;
    int rating;
}instructor;

int main(){
    
    struct student A={"rajesh",2030,98};

    // now when we want to input the name of the dynamic size 

    instructor alpha;

    alpha.id_no=242;
    alpha.rating=9;

    char buffer[100];
    printf("Enter student's name: ");
    //read the text
    fgets(buffer, sizeof(buffer), stdin);
    // remove the \n
    buffer[strcspn(buffer, "\n")] = '\0';
    // allocate memory and then copy
    alpha.name=(char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(alpha.name, buffer);

    printf("Student: %s\nRoll: %d\nMarks: %d\n", alpha.name, alpha.id_no, alpha.rating);

    free(alpha.name);


    printf("%s\n%d\n%d\n",A.name,A.roll_no,A.marks);


}