#include<stdio.h>
#include<cs50.h>
int main(){
   int n;
   do{
     n=get_int("enter\n");
   }
   while(n<0);
   printf("meow\n");
}

