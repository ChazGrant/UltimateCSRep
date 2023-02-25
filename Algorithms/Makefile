CC=g++
CFLAGS=-c -Wall

BS_SOURCES=binary_search.cpp
BS_OBJECTS=$(BS_SOURCES:.cpp=.o)

QS_SOURCES=quick_sort.cpp
QS_OBJECTS=$(QS_SOURCES:.cpp.=.o)

BS_TARGET=binary_search
QS_TARGET=quick_sort


all: $(BS_TARGET) $(QS_TARGET)

$(BS_TARGET): $(BS_OBJECTS)
	$(CC) $(BS_OBJECTS) -o $@

$(QS_TARGET): $(QS_OBJECTS)
	$(CC) $(QS_OBJECTS) -o $@

$(BS_SOURCES)$(BS_OBJECTS):
	$(CC) $(CFLAGS) $(BS_SOURCES) -o $(BS_OBJECTS)

$(QS_SOURCES)$(QS_OBJECTS):
	$(CC) $(CFLAGS) $(QS_SOURCES) -o $(QS_OBJECTS)

clean:
	del *.o

full_clean:
	del *.o *.exe