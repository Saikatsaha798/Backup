#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    int num;
    struct node *right;
};

int preorder(struct node *root){
    if (root!=NULL){
        printf("%d\t", root->num);
        preorder(root->left);
        preorder(root->right);
    }

    return 0;
}

int inorder(struct node *root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d\t", root->num);
        inorder(root->right);
    }

    return 0;
}

int postorder(struct node *root){
    if (root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->num);
    }

    return 0;
}

int main(){
    struct node *root = (struct node *) malloc(sizeof(struct node));
    struct node *left = (struct node *) malloc(sizeof(struct node));
    struct node *left1 = (struct node *) malloc(sizeof(struct node));
    struct node *left2 = (struct node *) malloc(sizeof(struct node));
    struct node *right = (struct node *) malloc(sizeof(struct node));
    struct node *right1 = (struct node *) malloc(sizeof(struct node));
    struct node *right2 = (struct node *) malloc(sizeof(struct node));

    root->num = 15;
    left->num = 10;
    left1->num = 6;
    left2->num = 11;
    right->num = 25;
    right1->num = 17;
    right2->num = 41;

    root->left = left;
    root->right = right;

    left->left = left1;
    left->right = left2;

    left1->left = NULL;
    left1->right = NULL;

    left2->left = NULL;
    left2->right = NULL;
    
    right->left = right1;
    right->right = right2;

    right1->left = NULL;
    right1->right = NULL;

    right2->left = NULL;
    right2->right = NULL;

    // preorder(root);
    inorder(root);

    return 0;
}