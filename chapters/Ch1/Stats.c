#include <stdlib.h>
#include <stdio.h>
#include "Node.h"
#include "Bag.h"
#include <math.h>
#include<string.h>
int main(){
    printf("Stats App\n");

    ALGBag* bag = ALGBag_Create();
    
    float myInt;
    int result = scanf("%f", &myInt);
    ALGBag_Add(bag, &myInt);
    float toStore = 5;
    while (toStore > 1) {
        
        
        float newInt;
        ALGBag_Add(bag, &newInt);
        result = scanf("%f", &newInt);
        toStore--;
    }

    printf("ALG Bag Size: %d\n",ALGBag_GetLength(bag));

    int n = ALGBag_GetLength(bag);
    float sum = 0.0;

    ALGNode* node = bag->first;
    while(node != NULL){
        printf("item %f\n",  *(float *)node->item);
        sum += *(float *)node->item;
        node = node->next;
    }
    

    float mean = sum/n;

    node = bag->first;
    while(node != NULL){
        float x = *(float *)node->item;
        sum += (x - mean) * (x - mean);
        node = node->next;
    }
    float stdev = sqrt(sum/(n-1));


    printf("Mean %f\n", mean);
    printf("stdev %f\n", stdev);

    ALGNode_Destroy(node);
    ALGBag_Destroy(bag);
    
}