#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>


ALGQueue* ALGQueue_Create(){
    ALGQueue* _queue = malloc(sizeof(ALGQueue));
    _queue->__first = NULL;
    _queue->__last = NULL;
    _queue->__length = 0;
    return _queue;
}

bool ALGQueue_IsEmpty(ALGQueue* queue){
    return queue->__first == NULL;
}

int ALGQueue_GetLength(ALGQueue* queue){
    return queue->__length;
}

void* ALGQueue_Peek(ALGQueue* queue){
    if(ALGQueue_IsEmpty(queue)){
        return NULL;
    }

    return queue->__first->item;
}

void ALGQueue_Enqueue(ALGQueue* queue, void* value){
    ALGNode* _oldLast = queue->__last;
    // Copy the value from the pointer so we dont have to do this in the driver
    queue->__last = ALGNode_Create();
    queue->__last->item = value;
    queue->__last->next = NULL;

    if(ALGQueue_IsEmpty(queue)){
        queue->__first = queue->__last;
    }else{
        _oldLast->next = queue->__last;
    }
    queue->__length++;
}

void* ALGQueue_Dequeue(ALGQueue* queue){
    if(ALGQueue_IsEmpty(queue)){
        return NULL;
    }

    void* _item = queue->__first->item;
    queue->__first = queue->__first->next;
    queue->__length--;
    if(ALGQueue_IsEmpty(queue)){
        queue->__last = NULL;
    }
    return _item;
}


void ALGQueue_Destroy(ALGQueue* queue){

    ALGNode* _node = queue->__first;

    //Clear all nodes
    while(_node != NULL){
        _node = _node->next;
        ALGNode_Destroy(_node);
    }

    free(queue);
}