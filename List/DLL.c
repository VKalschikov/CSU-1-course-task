#include <stdlib.h>
#include "DLL.h"

DLL* dll_New(){
    DLL* list = (DLL*)malloc(sizeof(DLL));
    if (list == NULL){
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

Status dll_Insert(DLL* list, int data){
    Node* new_node;
    if (list == NULL){
        return ERR;
    }

    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL){
        return ERR;
    }

    new_node -> data = data;
    new_node -> next = NULL;
    new_node -> prev = NULL;
    
    if (list -> head == NULL ){
        new_node -> next = new_node;
        new_node -> prev = new_node;
        list->head = new_node;
    }else {
        Node* start = list -> head;
        Node* tail = start-> prev;
        new_node -> next = start;
        new_node -> prev = tail;
        start->prev = new_node;
        tail->next = new_node;
    }
    list->size += 1;
    return OK;
}

Node* dll_Find(DLL* list, int data){
    Node* i;
    
    if (list == NULL){
        return NULL;
    }

    if (list->head == NULL){
        return NULL;
    }

    for(i=list->head; i->next!=list->head; i = i->next){
        if (i->data == data){
            return i;
        }
    }
    if (i->data == data){
        return i;
    }
    return NULL;
}
