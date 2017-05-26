typedef struct mystack
{
	int num;
	struct mystack *next;
}myStack;

extern myStack *mynewstack();
extern int mystackisempty(myStack *sta);
extern void mystackpush(myStack *sta,int n);
extern void mystackpop(myStack *sta);
extern int mystackfirst(myStack *sta);
extern void printstack(myStack *sta); 
