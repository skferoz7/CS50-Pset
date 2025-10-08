#include<stdio.h>
#include<cs50.h>
int sumb(int a,int b){
    int sum=a+b;
    return sum;
}
void sub(int a, int b){
    int answer=a-b;
    printf("minus is:%i\n",answer);
}
void mul(int a,int b){
    int ans=a*b;
    printf("multiple is:%i\n",ans);
}
void div(int a,int b){
    int ans1=a/b;
    printf("division is:%i\n",ans1);
}
int main(void){
    int a=get_int("Enter a Value:\n");
    int b=get_int("Enter b value:\n");
    int feroz=sumb(a,b);
    printf("sum is%i:\n",feroz);
    sub(a,b);
    mul(a,b);
    div(a,b);
}
