main:main.o add.h print.h
	gcc -o main main.o add.h print.h
main.o:main.c
	gcc -c main.c
clean:
	rm main.o main
