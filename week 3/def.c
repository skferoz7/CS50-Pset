#include<cs50.h>
#include<stdio.h>
#include<string.h>

struct phone{
    string name;
    long number;
} ;
int main(void){
    string n1=get_string("Enter name :");
    struct phone f1[3];
    f1[0].name="feroz";
    f1[0].number=7569439910;

    f1[1].name="sameer";
    f1[1].number=6305222692;

    f1[2].name="sadhik";
    f1[2].number=7674897230;

    for (int i=0;i<3;i++){
        if ((strcmp(f1[i].name,n1)==0)){
            printf("Number %li\n ",f1[i].number);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}
