#include<stdio.h>
#include<stdlib.h>
typedef struct mystack
{
	int num;
	struct mystack *next;
}myStack;

myStack *mynewstack()
{
	myStack *base=(myStack *)malloc(sizeof(myStack));
	base->next=NULL;
	return base;
}
int mystackisempty(myStack *sta)
{
	myStack *p1=sta;
	if(p1->next==NULL)
		return 1;
	else return 0;
}
void mystackpush(myStack *sta,int n)
{
	myStack *p1,*p2;
	p1=sta;
	p2=(myStack *)malloc(sizeof(myStack));
	while(p1->next!=NULL)
		p1=p1->next;
	p1->next=p2;
	p2->num=n;
	p2->next=NULL;
}
void mystackpop(myStack *sta)
{
	myStack *p1,*p2;
	p1=sta;
	p2=sta;
	if(p1->next==NULL)
	{
		printf("the stack is empty!\n");
		return ;
	}
	else
	{
		while(p1->next!=NULL)
			p1=p1->next;
		while(p2->next!=p1)
			p2=p2->next;
		free(p1);
		p2->next=NULL;
	}
}
int mystackfirst(myStack *sta)
{
	myStack *p1=sta;
	if(p1->next==NULL)
	{
		printf("the stack is empty!\n");
		return ;
	}
	else
	{
		p1=sta;
		while(p1->next!=NULL)
			p1=p1->next;
		return p1->num;
	}
}
int mystacksize(myStack *sta)
{
	myStack *p1=sta;
	int size=0;
	while(p1->next!=NULL)
	{
		p1=p1->next;
		size++;
	}
	return size;
}

void printstack(myStack *sta)
{
	myStack *p1=sta;
	if(p1->next==NULL) 
	{
		printf("the stack is empty!\n");
		return ;
	}
	else
	{
		printf("the stack's elements:");
		p1=p1->next;
		while(p1->next!=NULL)
		{
			printf("%d ",p1->num);
			p1=p1->next;
		}
		printf("%d \n",p1->num);
	}
} 
