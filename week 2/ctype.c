#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
int main(void){
    string s=get_string("Enter :");
    int length=strlen(s);
    int i;
    for (i=0; i<length; i++){
         s[i]=toupper(s[i]);

    }
    if(s[i]<= 'a' && s[i]>='z'){
            printf("%d",tolower(s[i]));
         }
    printf("  %s\n",s);
}
