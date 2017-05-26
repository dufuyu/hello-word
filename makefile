main:main.o queue.o queue.h stack.o stack.h BTree.o BTree.h 
	gcc -o main main.o queue.o queue.h stack.o stack.h BTree.o BTree.h 
main.o:main.c
	gcc -c main.c
queue.o:queue.c
	gcc -c queue.c
stack.o:stack.c
	gcc -c stack.c
BTree.o:BTree.c
	gcc -c BTree.c 
clean:
	rm main.o main queue.o stack.o BTree.o 
