#ifndef _ALGLIB_BAG_H_
#define _ALGLIB_BAG_H_
#include <stdbool.h>
#include "Node.h"

typedef struct ALGBag_s
{
    int __length;
    ALGNode* first;
}ALGBag;


bool ALGBag_IsEmpty(ALGBag* bag);

int ALGBag_GetLength(ALGBag* bag);

void ALGBag_Add(ALGBag* bag, void* item);

ALGBag* ALGBag_Create();

void ALGBag_Destroy(ALGBag* bag);
#endif