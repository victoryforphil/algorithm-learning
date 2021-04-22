#ifndef _ALGLIB_NODE_H_
#define _ALGLIB_NODE_H_


typedef struct ALGNode_s{
    void *item;
    void *next;
} ALGNode;
void ALGNode_Destroy(ALGNode* node);
ALGNode* ALGNode_Create();


#endif