CC=g++
CFLAGS=-I .
BUILD_DIR = ../build
DEPS = main.h board.h search.h eval.h
OBJ = main.o board.o search.o eval.o

../build/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

../build/ninjicken: $(BUILD_DIR)/$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	make clean

.PHONY: clean

clean:
	rm -f ../build/*.o
	rm -f ../src/*.o