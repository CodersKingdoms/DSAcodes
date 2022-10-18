
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    
    struct node *ptr =NULL;
    ptr=malloc(sizeof(struct node));
    ptr->data=20;
    ptr->link=NULL;
    
    head->link=ptr;
    
    ptr=malloc(sizeof(struct node));
    ptr->data=30;
    ptr->link=NULL;
    head->link->link=ptr;
     
     printf("%d",ptr->data);
     return 0;
}



