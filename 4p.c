#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void insert();

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
printf("3.search element\n");
printf("4.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:insert();
	       break;
	case 2:display();
	       break;
	case 3:search(ele);
	       //printf("enter the element to find %d\n",ele);
	      //scanf("%d",&ele);
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

void search(int ele)
{

struct node* temp;
temp=root;
printf("enter the element to find \n");
scanf("%d",&ele);

if(temp==NULL)
{
printf("list is empty\n");
}
else
{
while(temp!=NULL)        //traversal to the NULL
{
if(temp->data==ele)      
{
printf("element is found\n");
return 0;
}
else
{
temp=temp->link;  //if element is not found moving for the next node
}
}
printf("element is not found\n");  
}
}
