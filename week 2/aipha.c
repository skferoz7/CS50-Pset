#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
int main(void){
    string s=get_string("Enter :");
    for (int i=0;s[i]!='\0';i++){
        if (isalpha(s[i])){
            printf("%c is alpha\n",s[i]);
        }
        else{
            printf("%c is not alpha\n",s[i]);
        }
    }

    //printf("%s\n",sp);
}
