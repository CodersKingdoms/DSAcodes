
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void counting (struct node *);
int main()
{
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
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
    counting(head);
     
     return 0;
}
void counting (struct node *head)
{
    int count=0;
    if(head==NULL)
    printf("list is empty");
    struct node *temp =NULL;
    temp=malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
     {
         count++;
         printf("%d \n",temp->data);
         temp=temp->link;
     }
    printf(" Number of nodes = %d",count);
    getch();
}

