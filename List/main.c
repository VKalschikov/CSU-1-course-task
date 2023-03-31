#include <stdio.h>
#include <stdlib.h>
#include "DLL.h"

int main(){
    DLL* l = dll_New();
    Node* elem;
    if (l == NULL){
        printf("List create error\n");
        exit(-1);
    }
    dll_Insert(l, 1);
    dll_Insert(l, 2);
    elem = dll_Find(l, 1);
    if (elem == NULL){
        printf("1 not found\n");
    }
    elem = dll_Find(l, 2);
    if (elem == NULL){
        printf("2 not found\n");
    }
    elem = dll_Find(l, 3);
    if (elem == NULL){
        printf("3 not found\n");
    }
    return 0;
}  
