#include <stdlib.h>
#include <stdio.h>
#include "Node.h"
#include "Queue.h"
#include <math.h>
#include<string.h>
void testVal(ALGQueue* queue, int val){
    ALGQueue_Enqueue(queue, val);
    printf("Added %d, queue length: %d\n",val, ALGQueue_GetLength(queue));
    printf("\t- Peek: %d\n", ALGQueue_Peek(queue));
    
    printf("\t- Values: ");
    {
        ALGNode* _node = queue->__first;

        //Clear all nodes
        while(_node != NULL){
            printf("%d ", (_node->item));
            _node = _node->next;   
        }
    }
    printf("\n");
}
int main(){
    printf("Queue Test App\n");

    ALGQueue* queue = ALGQueue_Create();
    
    testVal(queue, 10);
    testVal(queue, 5);
    testVal(queue, 20);
    testVal(queue, 8);

    int* item = ALGQueue_Dequeue(queue);
    printf("DeQueued and Got %d\n", item);
    printf("\t- Values: ");
    {
        ALGNode* _node = queue->__first;

        //Clear all nodes
        while(_node != NULL){
            printf("%d ", (_node->item));
            _node = _node->next;   
        }
    }
    printf("\n");

    

    ALGQueue_Destroy(queue);
    
}