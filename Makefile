OBJS	= main.o ToDo.o TodoVector.o
SOURCE	= main.cpp ToDo.cpp TodoVector.cpp
HEADER	= TodoStatus.h ToDo.h TodoVector.h
OUT	= todo
CC	 = g++
FLAGS	 = -ggdb -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

ToDo.o: ToDo.cpp
	$(CC) $(FLAGS) ToDo.cpp 

TodoVector.o: TodoVector.cpp
	$(CC) $(FLAGS) TodoVector.cpp 

clean:
	rm -f $(OBJS) $(OUT)

