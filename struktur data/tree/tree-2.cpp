#include <iostream>
using namespace std;
struct Tree{
    char label;
    Tree *left, *right, *parent;
}*root, *newnode;
// create new tree
void *newTree(char label){
    if(root)
        cout << "Tree sudah dibuat!" << endl;
    else    
        root = new Tree();
        root->label = label;
        root->right = root->left = root->parent = NULL;
}
// insert left
Tree *insertLeft(char label, Tree *node){
    if(!root){
        cout << "Root belum dibuat!" << endl;
        return NULL;
    }else if(node->left){
        cout << "Sudah ada anak kiri!" << endl;
        return NULL;
    }else{
        newnode = new Tree();
        newnode->label = label;
        newnode->parent = node;
        node->left = newnode;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
}
// insert right
Tree *insertRight(char label, Tree *node){
    if(!root){
        cout << "Root belum dibuat!" << endl;
        return NULL;
    }else if(node->right){
        cout << "Sudah ada anak kanan!" << endl;
        return NULL;
    }else{
        newnode = new Tree();
        newnode->label = label;
        newnode->parent = node;
        node->right = newnode;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
}
// print preorder
void preorder(Tree *node = root){
    if(!node)
        return;
    else
        cout << node->label << " ";
        preorder(node->left);
        preorder(node->right);
}
// print inorder
void inorder(Tree *node = root){
    if(!node)
        return;
    else
        inorder(node->left);
        cout << node->label << " ";
        inorder(node->right);
}
// print postorder
void postorder(Tree *node = root){
    if(!node)
        return;
    else
        postorder(node->left);
        cout << node->label << " ";
        postorder(node->right);
}
int main(){
    Tree *B, *C;
    newTree('A');
    B = insertLeft('B', root);
    C = insertRight('C', root);
    preorder();
}
