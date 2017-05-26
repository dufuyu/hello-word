extern int NUM;
typedef struct BTree
{
	int num;
	struct BTree *left,*right;
}BT;
extern BT *mynewroot(int n);
extern void mynewBT(BT *p);
extern void Preorder(BT *p);
extern void Inorder(BT *p);
extern void elenum(BT *p);
extern int leafnum(BT *root);
extern int DepthOfTree(BT *root);
