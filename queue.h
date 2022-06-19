#ifndef ___queue_h___
#define ___queue_h___

typedef struct{
	char studentName[20];
	char class[50];
	int grade; 
}Data;

typedef struct node_def{
	Data student;
	struct node_def* next;
}Node;

typedef struct{
	int nodeCount; 
	Node* head;
	Node* tail;
}Queue;

void initQueue(Queue*);

void enqueue(Queue*, char*, char*, int);

void dequeue(Queue*);

void printQueue(Queue*);

//void getData(Data*, char*, char*, int);

#endif
