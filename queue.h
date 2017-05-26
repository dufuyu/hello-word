typedef struct myqueue
{
	int num;
	struct myqueue *next;
}myQueue;
extern myQueue* mynewqueue();
extern int myqueueisempty(myQueue *que);
extern void myqueuepush(myQueue *que,int n);
extern void myqueuepop(myQueue *que);
extern int myqueuefirst(myQueue *que);
extern int myqueuesize(myQueue *que);
extern void printQueue(myQueue *que); 
