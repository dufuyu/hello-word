#include<stdio.h>
#include<stdlib.h>
typedef struct myqueue
{
	int num;
	struct myqueue *next;
}myQueue;

myQueue* mynewqueue()
{
	myQueue *base =(myQueue *)malloc(sizeof(myQueue));
	base->next=NULL;
	return base;
}
int myqueueisempty(myQueue *que)
{
	myQueue *p1;
	p1=que;
	if(p1->next==NULL)
		return 1;
	else return 0;
}
void myqueuepush(myQueue *que,int n)
{
	myQueue *p1=que;
	myQueue *p2=(myQueue *)malloc(sizeof(myQueue));
	while(p1->next!=NULL)
		p1=p1->next;
	p1->next=p2;
	p2->next=NULL;
	p2->num=n;
}
void myqueuepop(myQueue *que)
{
	myQueue *p1=que;
	myQueue *p2=que;
	if(p1->next==NULL)
	{
		printf("queue is empty!");
		return ;
	}
	else
	{
		p2=p1->next;
		p1->next=p2->next;
		free(p2);
	}
}
int myqueuefirst(myQueue *que)
{
	myQueue *p1;
	p1=que;
	if(p1->next==NULL)
	{
		printf("queue is empty");
		return 0;
	}
	else
	{
		p1=p1->next;
		return p1->num;
	}
}
int myqueuesize(myQueue *que)
{
	myQueue *p1;
	int size=0;
	p1=que;
	while(p1->next!=NULL)
	{
		p1=p1->next;
		size++;
	}
	return size;
}
void printQueue(myQueue *que)
{
	myQueue *p1=que;
	if(p1->next==NULL)
	{
		printf("the queue is empty\n");
		return ;
	}
	else
	{
		printf("this queue's elements:");
		p1=p1->next;	
		while(p1->next!=NULL)
		{
			printf("%d ",p1->num);
			p1=p1->next;
		}
		printf("%d ",p1->num);
	}
}
