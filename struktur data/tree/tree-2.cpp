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
// clear Tree
void clear(){
    if(!root)
        cout << "Root sudah kosong!" << endl;
    else 
        root = NULL;
        cout << "Seluruh node telah dihapus" << endl;
}
// find node
void find(Tree *node){
    if(!root)
        cout << "Tree belum dibuat!" << endl;
    else
        // Cek apakah node ada
        if(!node)
            cout << "Node tidak ada!" << endl;
        else
            cout << "Node ada pada Tree!" << endl;
        // cek apakah node memiliki parent
        if(!node->parent)
            cout << "Node tidak mempunyai parent!" << endl;
        else{
            cout << "Parent node : " << node->parent->label << endl;
                if(!node->parent->right || !node->parent->left){
                    cout << "Tidak memiliki saudara" << endl;
                }else if(node->parent->right == node && node->parent->left){
                    cout << "Saudara : " << node->parent->left->label << endl; 
                }else if(node->parent->left == node && node->parent->right){
                    cout << "Saudara : " << node->parent->right->label << endl;
                }
        }
        // mengecek apakah node memiliki child
        if(!node->left&& !node->right){
            cout << "Tidak memiliki child" << endl;
        }else if(!node->left){
            cout << "Anak kanan : " << node->right->label << endl; 
        }else if(!node->right){
            cout << "Anak kiri : " << node->left->label << endl;
        }else{
            cout << "Anak kanan : " << node->right->label << endl;
            cout << "Anak kiri : " << node->left->label << endl;
        }
        // cek apakah node memiliki saudoara
}
// height tree
int height(Tree *node){
    if(node == NULL){
        return 0;
    }else{
        int u = height(node->left);
        int v = height(node->right);
        if(u > v){
            return u + 1;
        }else{
            return v + 1;
        }
    }
}
//size tree
int sizeTree(Tree *node){
    int size;
    if(node == NULL){
        return 0;
    }else{
        size = 1 + sizeTree(node->left) + sizeTree(node->right);
    }
    return size;
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
    find(B);
    cout << height(root) << endl;
    cout << sizeTree(root) << endl;
}
