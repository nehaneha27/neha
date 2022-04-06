#include<stdio.h>
#include<stdlib.h>
typedef struct Node *lstptr;
struct Node
{
  int data;
  lstptr link;
};
  lstptr first=NULL;
  lstptr getnode()
{
  lstptr node;
  node=(lstptr)malloc(sizeof(struct Node));
  return node;
}
void insertBegin(int ele)
{
  lstptr new;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(first!=NULL)
  new->link=first;
  first=new;
}
void insertEnd(int ele)
{
  lstptr new,temp;
  new=getnode();
  new->data=ele;
  new->link=NULL;
  if(first!=NULL)
 {
 temp=first;
 while(temp->link!=NULL)
 temp=temp->link;
 temp->link=new;
}
 else
   first=new;
}
void deleteBegin()
{
lstptr temp;
if(first=NULL)
{
printf("\nList is empty");
return;
}
temp=first;
if(first->link==NULL)
first=NULL;
else
{
first=first->link;
}
free(temp);
}
void deleteEnd()
{
lstptr prev,temp;
if(first=NULL)
{
printf("\nList is empty");
return;
}
temp=first;
if(first->link==NULL)
first=NULL;
else
{
prev=temp;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
}
free(temp);
}
void deleteSpecific()
{
 lstptr temp,prev;
 temp=first;
 if(first==null)
 {
 printf("\nempty list");
 return;
}
 else if(first->data==ele)
 {
 if(first->link!=NULL)
 first=first->link;
 else
 first=null;
 else
 {
 while(temp->data!=ele && temp->link!=NULL)
 {
 prev=temp;
 temp=temp->link;
 }
 if(temp->link==NULL && temp->data!=ele)
 printf("specified item not found");
 else if(temp->link!=NULL)
 prev->link=temp->link;
 else
 prev->link=NULL;
 }
 free(temp);
 }
void display()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");
return;
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}
void main()
{
 int op=1,ch,ele;
 while(op)
{
 printf("\n1.INSERTBEGIN\n2.INSERTEND\n3.DELETEBEGIN\n4.DELETEEND\n5.DELETESPECIFIC\n6.DISPLAY");
 printf("\nenter the choice");
 scanf("%d",&ch);
switch(ch)
{
  case 1: printf("enter the element to be inserted");
          scanf("%d",&ele);
          insertBegin(ele);
          break;
  case 2: printf("enter the element to be inserted");
          scanf("%d",&ele);
          insertEnd(ele);
          break;
  case 3: deleteBegin();
          break;
  case 4: deleteEnd();
          break;
  case 5: deleteSpecific();
          break;
  case 6: display();
          break;
}
printf("do you want to continue(1/0)");
scanf("%d",&ch);
}
}




