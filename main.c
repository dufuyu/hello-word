#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
#include "stack.h"
#include "BTree.h" 
int main()
{
	printf("the test of queue:\n");
	myQueue *que;
	que=mynewqueue();
	printf("Is the queue  empty? %d\n",myqueueisempty(que));
	myqueuepush(que,4);
	myqueuepush(que,6);
	printf("Input two elements--4,6 in order\n");
	printf("The first element of the queue is:%d\n",myqueuefirst(que));
	printf("The queue's size:%d\n",myqueuesize(que));
	printf("Is the queue is empty? %d\n",myqueueisempty(que));
	printQueue(que);
	myqueuepop(que);
	myqueuepop(que);
	printf("pop the two elements\n");
	printf("Is the queue is empty? %d\n",myqueueisempty(que));

	printf("\nthe test of stack:\n");
	myStack *sta;
	sta=mynewstack();
	printf("Is the stack empty? %d\n",mystackisempty(sta));
	mystackpush(sta,56);
        mystackpush(sta,99);
        printf("Input two elements--56,99 in order\n");
        printf("The first element of the stack is:%d\n",mystackfirst(sta));
        printf("The stack's size:%d\n",mystacksize(sta));
        printf("Is the stack is empty? %d\n",mystackisempty(sta));
        printstack(sta); 
        mystackpop(sta);
        mystackpop(sta);
        printf("pop the two elements\n");
        printf("Is the stack is empty? %d\n",mystackisempty(sta));

	printf("\nthe tset of BTree:\n");
	BT *bt;
	bt=mynewroot(9);
	mynewBT(bt);
	printf("先序遍历:");
	Preorder(bt);
	printf("中序遍历:");
	Inorder(bt);
	elenum(bt);
	printf("the BT's elements' number:%d\n",NUM);
	printf("the BT's leafnumber:%d\n",leafnum(bt));
	printf("the BT's depth:%d\n",DepthOfTree(bt)); 
	return 0;
} 
