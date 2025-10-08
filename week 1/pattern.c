#include<stdio.h>
#include<cs50.h>
int main(void){
    int i,j,k;
    int row=get_int("Row: \n");
    for (i=1;i<=row;i++){
        for (j=i;j<row;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
