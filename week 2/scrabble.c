#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

 int main(void){
    string p1=get_string("player 1: ");
    string p2=get_string("player 2: ");
    int s1=0,s2=0;

    int score[26]={1	,3	,3	,2	,1	,4	,2	,4	,1	,8	,5	,1	,3	,1	,1	,3	,10	,1	,1	,1	,1	,4	,4	,8	,4	,10};
    for(int i=0,n=strlen(p1);i<n;i++)
    {
        if(isalpha(p1[i])){
            char c=toupper(p1[i]);
            s1+=score[c-'A'];
        }

    }
     for(int i=0,n=strlen(p2);i<n;i++)
    {
        if(isalpha(p2[i])){
            char c=toupper(p2[i]);
            s2+=score[c-'A'];
        }

    }
    if(s1<s2){
        printf("player 2 wins!\n");
    }
    else if(s1>s2){
        printf("player 1 wins!\n");
    }
    else{
        printf("Tie!\n");
    }

 }
