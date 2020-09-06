OBJS	= main.o ToDo.o
SOURCE	= main.cpp ToDo.cpp
HEADER	= TodoStatus.h ToDo.h
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


clean:
	rm -f $(OBJS) $(OUT)

