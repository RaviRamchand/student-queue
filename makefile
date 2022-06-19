all: testQueue
testQueue: testQueue.o queue.o
	gcc -o testQueue *.o
testQueue.o: testQueue.c 
	gcc -c testQueue.c
queue.o: queue.c 
	gcc -c queue.c
clean:
	rm *.o testQueue
