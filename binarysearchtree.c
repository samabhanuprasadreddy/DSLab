#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root=NULL,*n,*temp=NULL,*p,*t;
void insert();
//void del();
//void search();
void inorder();
void preorder();
void postorder();
void main(){
	int ch;
	while(1){
	printf("1.insert 2.delete 3.inorder 4.preorder 5.postorder 6.search 7.exit");
	scanf("%d",&ch);
	switch(ch){
	case 1:insert();
	break;
//	case 2:del();
//	break;
//	case 3:search();
//	break;
	case 3:inorder(root);
	break;
	case 4:preorder(root);
	break;
	case 5:postorder(root);
	break;
	case 7:exit;
	}}
}
void insert(){
	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&n->data);
	n->left=NULL;
	n->right=NULL;
	if(root==NULL){
		root=n;
	}else{
		temp=root;
		while(temp!=NULL)
		{
			if(n->data < temp->data)
			{
				if(temp->left==NULL)
				{
					temp->left=n;
					break;
				}
				else{
					temp=temp->left;
				}}else
				{
					if(temp->right==NULL)
					{
						temp->right=n;
						break;
					}
					else{
						temp=temp->right;
					}
				}
			}
		}
	}
	void inorder(struct node*temp)
	{
		if(temp!=NULL){
			inorder(temp->left);
			printf("%d",temp->data);
			inorder(temp->right);
		}
	}
	void preorder(struct node*temp)
	{
		if(temp!=NULL){
			printf("%d",temp->left);
			preorder(temp->left);
			preorder(temp->right);
			
		}
	}
	void postorder(struct node*temp)
	{
		if(temp!=NULL){
			postorder(temp->left);
			postorder(temp->right);
			printf("%d",temp->left);
		}
	}




