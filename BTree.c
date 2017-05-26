#include<stdio.h>
#include<stdlib.h>
int NUM=0;
typedef struct BTree
{
	int num;
	struct BTree *left,*right;
}BT;

BT *mynewroot(int n)
{
	BT *bt=(BT *)malloc(sizeof(BT));
	bt->left=NULL;
	bt->right=NULL;
	bt->num=n;
	return bt;
}
void mynewBT(BT *p)
{
	int l,r;
	printf("Please input the left element:\n");
	scanf("%d",&l);
	printf("Please input the right element:\n");
	scanf("%d",&r);
	p->left=NULL;
	p->right=NULL;
	if(l)
	{
		p->left=(BT *)malloc(sizeof(BT));
		p->left->num=l;
		mynewBT(p->left);
	}
	if(r)
	{
		p->right=(BT *)malloc(sizeof(BT));
		p->right->num=r;
		mynewBT(p->right);
	}
}
void Preorder(BT *p)
{
	printf("%d ",p->num);
	if(p->left) 
		Preorder(p->left);
	if(p->right)
		Preorder(p->right);
}
void Inorder(BT *p)
{
	if(p)
	{
		Inorder(p->left);
		printf("%d ",p->num);
		Inorder(p->right);
	}
}
void elenum(BT *p)
{
	if(p)
	{
		elenum(p->left);
		NUM++;
		elenum(p->right);
	}
}
int leafnum(BT *root)
{
	if(!root)
		return 0;
	else if(root->left==NULL&&root->right==NULL)
		return 1;
	else return(leafnum(root->left)+leafnum(root->right));
}
int DepthOfTree(BT *root)
{
	if(root)
		return DepthOfTree(root->left)>DepthOfTree(root->right)?DepthOfTree(root->left)+1:DepthOfTree(root->right)+1;
	else return 0;
}
 
