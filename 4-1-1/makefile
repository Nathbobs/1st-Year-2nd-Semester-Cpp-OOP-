all: simple_shape.o
	g++ -o simple_shape simple_shape.o

simple_shape.o: simple_shape.cc
	g++ -c -o simple_shape.o simple_shape.cc

clean:
	rm simple_shape.o simple_shape
