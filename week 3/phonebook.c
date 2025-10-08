#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void){
    string s1[]={"feroz","sameer","sadhik" };
    long a1[]={7569439910,6305222692,7674897230};
    string name=get_string("Enter :");
    for (int i=0;i<3;i++){
        if ((strcmp(s1[i],name)==0)){
            printf("Number is:%li\n",a1[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
