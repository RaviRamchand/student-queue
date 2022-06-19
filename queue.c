#include "queue.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

static Node* createNewNode(char*, char*, int);

void initQueue(Queue* queue){
	queue->nodeCount = 0;
	queue-> head = queue-> tail = NULL; 
}

void enqueue(Queue* queue, char* name, char* class, int grade){
	Node* newNode = createNewNode(name, class, grade);
	
	if(queue->head == NULL){
		queue->head = queue->tail = newNode; 
	}
	else{
		queue->tail->next = newNode; 
		queue->tail = newNode;
	}
	queue->nodeCount++;
}

void dequeue(Queue* queue){
	if(queue->head != NULL){
		Node* temp; 
		temp = queue->head;
		queue->head = queue->head->next;
		free(temp);
		queue->nodeCount--;
	}
	else{
		printf("Queue is empty!");
	}
}

void printQueue(Queue* queue){
	Node* current = queue->head;
	for(int i = 0; i<queue->nodeCount; i++){
		printf("%s %s %d\n", current->student.studentName, current->student.class, current->student.grade);
	current = current->next;
	}
}

Node* createNewNode(char* name, char* class, int grade){
	Node* newNode = malloc(sizeof(Node));
	assert(newNode);
	
	strcpy(newNode->student.studentName, name);
	strcpy(newNode->student.class, class);
    newNode->student.grade = grade; 
   
    newNode->next = NULL;

	return newNode;
}
