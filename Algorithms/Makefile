CC=g++
CFLAGS=-c -Wall

BS_SOURCES=binary_search.cpp
BS_OBJECTS=$(BS_SOURCES:.cpp=.o)

MS_SOURCES=merge_sort.cpp
MS_OBJECTS=$(MS_SOURCES:.cpp=.o)

QS_SOURCES=quick_sort.cpp
QS_OBJECTS=$(QS_SOURCES:.cpp.=.o)

BS_TARGET=binary_search
QS_TARGET=quick_sort
MS_TARGET=merge_sort


all: $(BS_TARGET) $(QS_TARGET) $(MS_TARGET)

$(BS_TARGET): $(BS_OBJECTS)
	$(CC) $(BS_OBJECTS) -o $@

$(QS_TARGET): $(QS_OBJECTS)
	$(CC) $(QS_OBJECTS) -o $@

$(MS_TARGET): $(MS_OBJECTS)
	$(CC) $(MS_OBJECTS) -o $@

$(BS_SOURCES)$(BS_OBJECTS):
	$(CC) $(CFLAGS) $(BS_SOURCES) -o $(BS_OBJECTS)

$(QS_SOURCES)$(QS_OBJECTS):
	$(CC) $(CFLAGS) $(QS_SOURCES) -o $(QS_OBJECTS)

$(MS_SOURCES)$(MS_OBJECTS):
	$(CC) $(CFLAGS) $(MS_SOURCES) -o $(MS_OBJECTS)

clean:
	del *.o

full_clean:
	del *.o *.exe