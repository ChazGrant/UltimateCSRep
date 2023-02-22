CC=g++
CFLAGS=-c -Wall
BS_SOURCES=binary_search.cpp
BS_OBJECTS=$(BS_SOURCES:.cpp=.o)
BS_TARGET=binary_search

all: $(BS_SOURCES) $(BS_TARGET)

$(BS_TARGET): $(BS_OBJECTS)
	$(CC) $(BS_OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	del *.o

full_clean:
	del *.o *.exe