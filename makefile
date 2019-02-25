# include dependencies; rules below
ifeq ($(UNAME),incl.defs)
	include incl.defs
endif

# Directories
SRC=./src
BIN=./bin

CC=g++
CCFLAGS=-std=c++11
SOURCES= StudentDBProgram.cpp StudentRecord.cpp
OBJECTS= StudentDBProgram.o StudentRecord.o

main: $(OBJECTS)
	$(CC) $(CCFLAGS) $(OBJECTS) -o StudentDBProgram $(LIBS)

.cpp.o:
	$(CC) $(CCFLAGS) -c $<

# Type "make depend" to make dependencies
depend:
	$(CC) -M $(SOURCES) > incl.defs

run:
	./StudentDBProgram

clean:
	rm *.o
	rm main
	rm incl.defs
	rm *.tar.gz
