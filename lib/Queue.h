#ifndef _ALGLIB_QUEUE_H_
#define _ALGLIB_QUEUE_H_
#include <stdbool.h>
#include "Node.h"

typedef struct ALGBag_s
{
    int __length;
    ALGNode* __first;
    ALGNode* __last;
}ALGQueue;


bool ALGQueue_IsEmpty(ALGQueue* queue);

int ALGQueue_GetLength(ALGQueue* queue);

void* ALGQueue_Peek(ALGQueue* queue);
void ALGQueue_Enqueue(ALGQueue* queue, void* value);
void* ALGQueue_Dequeue(ALGQueue* queue);
ALGQueue* ALGQueue_Create();

void ALGQueue_Destroy(ALGQueue* bag);
#endif