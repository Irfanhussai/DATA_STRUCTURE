#include<stdio.h>
#include<stdlib.h>
# define NULL 0

typedef struct node
{
int data;
struct node *next;
}node;
 node  *head, *newnode,*temp;

void createlist()
{


int x,i,n;
printf("Enter range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter value");
scanf("%d",&x);
newnode=(node *)malloc(sizeof(node));
newnode->data=x;
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
temp->next=newnode;
temp=newnode;
}
}
void display()
{

temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void insert()
{
int x,pos,c=1,n=0;
node *ptr, *ptr1;
ptr=head;

while (ptr!=NULL)
{
n=n+1;
ptr=ptr->next;
}
if(head==NULL)
{
printf("list is empty");
return;
}
printf("Enter pos");
scanf("%d",&pos);
if(pos==1)
{
printf("Enter element to insert");
scanf("%d",&x);
newnode=(node *)malloc(sizeof(node));
newnode->data=x;
newnode->next=NULL;
newnode->next=head;
head=newnode;
}
else if(pos==(n+1))
{
head=temp;
while((temp->next)!=NULL)
{
temp=temp->next;
}
printf("Enter the element to insert");
scanf("%d",&x);
newnode=(node *)malloc(sizeof(node));
newnode->data=x;
newnode->next=NULL;
temp->next=newnode;
}
else
{
ptr=head;
while(pos>c)
{
c++;
ptr1=ptr;
ptr=ptr->next;
}
printf("Enter the element to insert");
scanf("%d",&x);
newnode=(node *)malloc(sizeof(node));
newnode->data=x;
newnode->next=ptr;
ptr1->next=newnode;
}
printf("after inserting element at pos %d\n",pos);
display();
}

void main()
{
int ch;
do
{
printf("1.create 2 display 3 insert\n");
scanf("%d",&ch);
switch(ch)
{
case 1: createlist();
break;
case 2:display();
break;
case 3:insert();
break;
case 4:exit(0);
break;
default:printf("invalid ch");
}
}while(1);
}
