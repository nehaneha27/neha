#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
struct stack
{
 int stk[MAXSIZE];
 int top;
};
typedef struct stack ST;
ST S;
void push()
{
int num;
if(S.top==(MAXSIZE-1))
{
printf("stack is full\n");
exit(0);
}
else
{
printf("\n enter the element to be pushed :");
scanf("%d",&num);
S.top=S.top+1;
S.stk[S.top]=num;
}
return;
}
int pop()
{
int num;
if(S.top==-1)
{
printf("stack is empty\n");
exit(0);
}
else
{
num = S .stk[S.top];
printf("poped element is =%d\n",S.stk[S.top]);
S.top=S.top-1;
}
return(num);
}
void display()
{
int i;
if(S.top==-1)
{
printf("stack is empty\n");
return;
}
else
{
printf("\n Status of elements in stack:\n");
for(i=S.top;i>=0;i--)
{
printf("%d\n",S.stk[i]);
}
}
}
int main()
{
int ch;
S.top=-1;
printf("\t STACK OPERATIONS\n");
printf("--------------------\n");
printf(" 1.PUSH\n");
printf(" 2.POP\n");
printf(" 3.DISPLAY\n");
printf(" 4.EXIT\n");
while(1)
{
printf("\nchoose operation :");
scanf("%d",&ch);
switch(ch)
{
case 1:
   push();
break;
case 2:
   pop();
break;
case 3:
    display();
break;
case 4:
     exit(0);
default:
     printf("Invalid Operation\n");
}
}
return 0;
}


