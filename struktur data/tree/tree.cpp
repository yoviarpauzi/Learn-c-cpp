#include <iostream>
using namespace std;
struct Tree{
    int data;
    Tree *left, *right;
};
int a = 0;
Tree *newTree(int x){
    Tree *newtree = new Tree();
    newtree->data = x;
    newtree->left = newtree->right = NULL;
    a++;
    return newtree;
}
Tree *insertTree(Tree *root, int x){
    if(root == NULL){
        newTree(x);
    }else{
        if(x > root->data){
            root->right = insertTree(root->right, x);
        }else if(x < root->data){
            root->left = insertTree(root->left, x);
        }else if(x == root->data){
            cout << "Data sudah ada!" << endl;
        }
        return root;
    }
}
void find(Tree *root, int x){
    if(root == NULL){
        cout << "Data tidak ditemukan" << endl;
        return ;
    }else if(root->data == x){
        cout << "Data ditemukan" << endl;
    }else{
        if(x > root->data){
            find(root->right, x);
        }else{
            find(root->left, x);
        }
    }
}
Tree *minValue(Tree *root){
    Tree *cur = root;
    while(!cur && cur->left != NULL){
        cur = cur->left;
    }
    return cur;
}
Tree *deleteNode(Tree *root, int x){
    if(root == NULL){
        return NULL;
    }else if(x > root->data){
        root->right = deleteNode(root->right, x);
    }else if(x < root->data){
        root->left = deleteNode(root->left, x);
    }else{
        if(root->left == NULL && root->right == NULL){
            return NULL;
        }else if(root->left == NULL){
            Tree *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Tree *temp = root->left;
            free(root);
            return temp;
        }else{
            Tree *temp = minValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }
}
int height(Tree *root){
    if(root == NULL){
        return 0;
    }else{
        int u = height(root->left);
        int v = height(root->right);
        if(u > v){
            return u + 1;
        }else{
            return v + 1;
        }
    }
}
void preorder(Tree *root){
   if(root == NULL){
        return;
   }else{
       cout << root->data << " ";
       preorder(root->left);
       preorder(root->right);
   }
}
void inorder(Tree *root){
   if(root == NULL){
        return;
   }else{
       inorder(root->left);
       cout << root->data << " ";
       inorder(root->right);
   }
}
void postorder(Tree *root){
   if(root == NULL){
        return;
   }else{
       postorder(root->left);
       postorder(root->right);
       cout << root->data << " ";
   }
}
int main(){
    Tree *root = NULL;
    root = insertTree(root, 16);
    insertTree(root, 20);
    insertTree(root, 15);
    preorder(root);
    cout << endl;
    cout << height(root);
    return 0;
}