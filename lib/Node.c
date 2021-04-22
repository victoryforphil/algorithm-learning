#include "Node.h"
#include <stdlib.h>
ALGNode* ALGNode_Create(){
    ALGNode* _node = malloc(sizeof(ALGNode));
    _node->item = NULL;
    _node->next = NULL;
    return _node;
}

void ALGNode_Destroy(ALGNode* node){
    free(node);
}