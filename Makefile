all: addlib.o addlib_test

clean: 
	rm -rf addlib.o addlib_test

addlib.o: addlib.c addlib.h

addlib_test: addlib.c addlib.h unity.c unity.h unity_internals.h addlib_test.c


