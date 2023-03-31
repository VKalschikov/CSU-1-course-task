#ifndef _DLL_H_
#define _DLL_H_

#include <stdint.h>

typedef enum{
    OK,
    ERR
} Status;

typedef struct _Node  {
    int             data;
    struct _Node*   next;
    struct _Node*   prev;
} Node;

typedef struct {
    Node*       head;
    uint32_t    size;     
} DLL;

DLL* dll_New();
Status dll_Insert(DLL*, int);
Node* dll_Find(DLL*, int);

#endif
