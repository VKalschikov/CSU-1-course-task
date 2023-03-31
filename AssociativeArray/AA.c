#include <stdlib.h>
#include "AA.h"

AA* aa_New(){
    AA* aa = (AA*)malloc(sizeof(AA));
    if ( aa == NULL){
        return NULL;
    }
    aa -> root = NULL;
    return aa;
}

AStatus aa_Insert(AA* aa, int key, int value){
    ANode* node = (ANode*) malloc(sizeof(ANode));
    ANode* current_node;
    if(node == NULL){
       return AA_ERR; 
    }
    node -> key = key;
    node -> value = value;
    node -> left = NULL;
    node -> right = NULL;
    if (aa -> root == NULL){
        aa -> root = node;
        return AA_OK;
    }
    current_node = aa->root;
    while (1){
        if (current_node->key == key){
            current_node->value = value;
            free(node);
            break;
        }
        if (current_node->key > key){
            if (current_node->left != NULL){
                current_node = current_node-> left;
                continue;
            }
            else{
                current_node-> left = node;
                break;
            }
        }else{
            if (current_node->right != NULL){
                current_node = current_node-> right;
                continue;
            }
            else{
                current_node-> right = node;
                break;
            }
        }
    }
    return AA_OK;
}
int aa_Find(AA* aa, int key){
    ANode* node;
    if (aa == NULL){
        return 0;
    }
    if (aa->root == NULL){
        return 0;
    }
    node = aa->root;
    while (node != NULL && node -> key != key){
        if (node->key > key){
            node = node-> left;
        }else{
            node = node ->right;
        }
    }
    if (node == NULL){
        return 0;
    }
    return node->value;
}

