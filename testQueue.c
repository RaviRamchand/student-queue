#include "queue.h"
#include <stdio.h>

int main(int argc, char* argv[]){
	Queue newQueue;
	Data data;
	initQueue(&newQueue);

	enqueue(&newQueue, "Ravi", "Popcorn", 100);
	enqueue(&newQueue, "Hello", "Popcorn", 100);
	printQueue(&newQueue);
	dequeue(&newQueue);
	dequeue(&newQueue);
}
