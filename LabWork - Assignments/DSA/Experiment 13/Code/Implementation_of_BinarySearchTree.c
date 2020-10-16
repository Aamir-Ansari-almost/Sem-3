#include <stdio.h>
#include <stdlib.h>
// Declaration of node of tree
struct node {
    struct node *left;
    int data;
    struct node *right;
};

// declaring root node
struct node *root = NULL;

struct node *getNewNode(int data) {    // initialises and allocates memory for newNode
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data  = data;
    newNode->left  = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insert(struct node *root, int data) {
    if (root == NULL) {    // when tree is empty
        root = getNewNode(data);
        return root;
    } else if (root->data <= data) {    // inserting in left subtree
        root->left = insert(root->left, data);
    } else {    // inserting in right subtree
        root->right = insert(root->right, data);
    }
}

void preOrderTraversal(struct node *root) {
    if (root == NULL) {
        printf("\nTree is empty!");
        return;
    }

    // print the data of the node
    printf("%d ", root->data);

    // recursion on left sub-tree
    preOrderTraversal(root->left);

    //recursion on right sub-tree
    preOrderTraversal(root->right);
}

void inOrderTraversal(struct node *root) {
    if (root == NULL) {
        printf("\nTree is empty!");
        return;
    }

    // recursion on left sub-tree
    preOrderTraversal(root->left);

    // print the data of the node
    printf("%d ", root->data);

    //recursion on right sub-tree
    preOrderTraversal(root->right);

}

void postOrderTraversal() {
    if (root == NULL) {
        printf("\nTree is empty!");
        return;
    }

    // recursion on left sub-tree
    preOrderTraversal(root->left);

    //recursion on right sub-tree
    preOrderTraversal(root->right);

    // print the data of the node
    printf("%d ", root->data);
}

int main() {

    

}


