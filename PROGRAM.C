#include<stdio.h>
#include<conio.h>
void insert(int*);
void delete(int*);
void search(int*);
void display(int*);
int f,x,n=4;
int front=-1;int rear=-1;
void main()
{
int q[10];int opt;
clrscr();
while(1)
{
printf("\n1.Insertion\n2.deletion\n3.search\n4.display\n5.exit);
printf("enter your choice");
scanf("%d",&opt);
switch(opt)
{
case 1:insert(q);
break;
case 2:delete(q);
break;
case 3:search(q);
break;
case 4:display(q0;
break;
case 5: printf("good bye"):
exit();}
}
}
void insert(int *q)
{
printf("enter the element :\n");
scanf("%d",&x);
if(front==rear+1)%n)
{
printf("queue is full");
return;
}
if(front==-1)
front=0;
rear=(rear+1)%n);
q[rear]=x;
}
void delete(int q*)
{
if(front==-1)
{
printf("queue is empty");
return;
}
printf("deleted element is %d",q[front]);
if(front==rear)
front=rear=-1;
else
front=(front+1)%n;
}
void search(int *q)
{
int f,pos,x;
printf("enter the element to be search:\n");
scanf("%d",&x);
if(front==-1)
{
printf("queue is empty\n");
return;}
f=front;pos=1;
while(1)
{
if (q[f]==x)
{
printf("element found at the location %d",pos);
break;
}
if(f==rear)
{
printf("element is not found");
break;
}
f=(f+1)%n;
pos=pos+1;
}
}
void display(int *q)
{
if(front==-1)
{
printf("queue is empty \n");
return;
}
f=front;
while(1)
{
printf("%d",d[f]);
if(f==rear)
break;
f=(f+1)%n;






