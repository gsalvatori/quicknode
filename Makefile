all:
	gcc -o quicknode *.c example/example.c
clean:
	rm -f *.o quicknode