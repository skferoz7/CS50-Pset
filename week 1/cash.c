#include<stdio.h>
#include<cs50.h>
int quarter(int c);
int dime(int c);
int nickel(int c);
int main(void){
    int sum;
    int change;
    do{
        change=get_int("Change owned: \n");
    }
    while(change<1);
    int qcoins=quarter(change);
    change=change-(25*qcoins);

    int dcoins=dime(change);
    change=change-(10*dcoins);

    int ncoins=nickel(change);
    change=change-(5*ncoins);

    sum = qcoins+dcoins+ncoins+change;
    printf("%i\n",sum);

}
int quarter(int c){
    return c/25;
}
int dime(int c){
    return c/10;
}
int nickel(int c){
    return c/5;
}

