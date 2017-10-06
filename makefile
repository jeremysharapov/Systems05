all: string

string: Stringy.c
	gcc Stringy.c

clean:
	rm *~

run: string
	./a.out
