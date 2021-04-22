#include "Bag.h"
#include "Node.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>



bool ALGBag_IsEmpty(ALGBag* bag){
    return (bag->first == NULL);
}

int ALGBag_GetLength(ALGBag* bag){
    return bag->__length;
}

void ALGBag_Add(ALGBag* bag, void* item){
    ALGNode* oldFirst = bag->first;
    bag->first = ALGNode_Create();
    bag->first->item = item;
    bag->first->next = oldFirst;
    bag->__length++;
}

ALGBag* ALGBag_Create(){
    ALGBag* _bag = malloc(sizeof(ALGBag));
    _bag->first = NULL;
    _bag->__length = 0;
    return _bag;
}

void ALGBag_Destroy(ALGBag* bag){

    ALGNode* _node = bag->first;

    //Clear all nodes
    while(_node != NULL){
        _node = _node->next;
        ALGNode_Destroy(_node);
    }

    free(bag);
}

