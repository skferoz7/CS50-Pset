#include<stdio.h>
#include<cs50.h>
int main(){
    int i,j,k,l,m;
    int n;
    do{
     n=get_int("Height: \n");
    }
    while (n<1 || n>8);
    for (i=1;i<=n;i++){
        for (j=i;j<n;j++){
            printf(" ");
        }
        for (k=1;k<=i;k++){
            printf("#");
        }
        printf("\n");
        }

}





