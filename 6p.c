#include<stdio.h>
#include<stdlib.h>
void insert();
void display();

struct node{
int data;
struct node* link;
};
struct node* root;

int main()
{
while(1)
{
int ch;
printf("\n1.insertion\n");
printf("2.displaying\n");
printf("3.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:insert();
	       break;
	case 2:display();
	       break;
	case 3:exit(0);
	       break;
}
}
return 0;
}


void insert()
{
struct node* temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
     if(root==NULL)
     {
     root=temp;
     p=temp;
     }
               else
               {
                p->link=temp;
                p=temp;
		p->link=root;
	       }
printf("%d->",temp->data);
           temp=temp->link;

}

void display()
{
struct node* temp;
temp=root;
if(temp==NULL)
       	printf("list is empty\n");
   
         else
         {
         while(temp->link!=root)
          {
           printf("%d->",temp->data);
           temp=temp->link;
          }
	 printf("%d",temp->data);
         }
}

