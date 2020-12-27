CC=g++
CFLAGS=-I .
DEPS = main.h board.h search.h eval.h
OBJ = main.o board.o search.o eval.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ninjicken: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o