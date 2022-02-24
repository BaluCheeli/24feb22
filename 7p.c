#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void sort();

struct node{
int data;
struct node* link;
};
struct node* root;

int main()
{
while(1)
{
int ch,ele;
printf("\n1.insertion\n");
printf("2.display\n");
printf("3.sorting\n");
printf("4.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:insert();
	       break;
	case 2:display();
	       break;
	case 3:sort();
	       break;
	case 4:exit(0);
	       break;
}
}
return 0;
}


void insert()
{
struct node* temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
     if(root==NULL)
     {
     root=temp;
     }
               else
               {
               struct node* p;
               p=root;
               while(p->link!=NULL)
               {
               p=p->link;
               printf("%d->",temp->data);
               }
               p->link=temp;
               }
}

void display()
{
struct node* temp;
temp=root;
if(temp==NULL)
    {
    printf("list is empty\n");
    }
         else
         {
         while(temp!=NULL)
          {
           printf("%d->",temp->data);
           temp=temp->link;
          }
         }
}

void sort()
{
struct node* p,*q;
int temp;
p=root;
while(p->link!=NULL)
{
q=p->link;
while(q!=NULL)
{
if(p->data > q->data)
{
temp=p->data;
p->data=q->data;
q->data=temp;
}
q=q->link;
}
p=p->link;
}
}
