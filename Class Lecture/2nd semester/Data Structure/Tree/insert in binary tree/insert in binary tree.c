#include<stdio.h>
struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};

struct tree *insert(struct tree *,int );
inorder(struct tree *);

int main()
{
    struct tree *root=NULL;
    int item;
    while(item){
        printf("\nEnter element: ");
        scanf("%d",&item);
        root=insert(root,item);
        printf("\nroot is %d",root->info);
        printf("\nInorder traversal are: ");
        inorder(root);
    }
}

struct tree *insert(struct tree *root,int x)
{
    if(!root){
        root=(struct tree *)malloc(sizeof(struct tree));
        root->info=x;
        root->left=NULL;
        root->right=NULL;
        return (root);
    }
    else if(root->info>x)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return (root);
}

inorder(struct tree *root)
{
    if(root){
        inorder(root->left);
        printf("%3d ",root->info);
        inorder(root->right);
    }
}
