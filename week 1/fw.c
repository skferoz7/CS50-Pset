#include<stdio.h>
#include<cs50.h>
int positive(void);
void meow(int n);
int main(void){
    int times=positive();
     meow(times);
}
int positive(void){
    int n;
    do{
         n=get_int("Number\n");
    }
    while(n<0);
    return n;

}
void meow(int n){
   //int n=get_int("Number\n");
    for(int i=0;i<n;i++){
        printf("meow\n");
    }
}
