#include<stdio.h>
#include"print.h"
#include"add.h"
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",add(a,b));
	print();
	return 0;
}
