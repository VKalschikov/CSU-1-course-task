#ifndef _AA_H
#define _AA_H

typedef enum{
    AA_OK,
    AA_ERR
} AStatus;

typedef struct _ANode {
    int value;
    int key;
    struct _ANode* left;
    struct _ANode* right;
} ANode;

typedef struct{
    ANode* root;
} AA;

AA* aa_New();
AStatus aa_Insert(AA*, int , int);
int aa_Find(AA*, int);
#endif
