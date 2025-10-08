#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node *next;
} node ;
int main(void)
{
    node *list=NULL;
    node *tail=NULL;
    for (int i=0;i<5;i++)
    {
        node *n=malloc(sizeof(node));
        if (n==NULL)
        {
            return 1;
        }
        n->number=get_int("Number ");
        n->next =NULL;

       if(list==NULL)
        {
            list=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            tail=n;

        }
    }

    node *ptr=list;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->number);
        ptr=ptr->next;
    }

}
