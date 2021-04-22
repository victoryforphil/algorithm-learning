#include <stdlib.h>
#include <stdio.h>
#include "Node.h"
#include "Bag.h"
int main(){
    printf("Stats App\n");

    ALGBag* bag = ALGBag_Create();
    
    for(size_t i=0;i<100; i++){
        ALGBag_Add(bag, &i);
    }

    printf("ALG Bag Size: %d\n",ALGBag_GetLength(bag));


    ALGBag_Destroy(bag);
    
}