#include<stdio.h>
#include<cs50.h>
int twenty(int a);
int ten(int a);
int five(int a);
int two(int a);
int main(void){
    int change,sum;
    do{
        change=get_int("Change ownes \n");
    }
    while(change<0);
    int twc=twenty(change);
    change = change - (20*twc);

    int tc=ten(change);
    change = change - (10*tc);

    int fc=twenty(change);
    change = change - (5*fc);

    int toc=two(change);
    change = change - (2*toc);

    sum= twc + tc + fc + toc + change;
    printf("coins :%i\n",sum);
}
int twenty(int a){
    return a/20;
}
int ten(int a){
    return a/10;
}
int five(int a){
    return a/5;
}
int two(int a){
    return a/2;
}

