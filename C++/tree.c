#include<stdio.h>
#include<malloc.h>

// using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int d)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));

    p->data=d;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void preorder(struct node* root){
    if(root!=NULL){
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node* root){
    if(root!=NULL){
        preorder(root->left);
        printf(" %d ",root->data);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        printf(" %d ",root->data);
    }
}


void main()
{
    struct node* p1=create(2);
    struct node* p2=create(4);
    struct node* p3=create(6);
    struct node* p4=create(8);
    struct node* p5=create(10);


    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;

    preorder(p1);

    printf("\n");
    
    inorder(p1);
    
    printf("\n");
    
    postorder(p1);
    

}
