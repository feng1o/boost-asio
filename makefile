#makefile 
.PHONY:clean all
CC=g++
SRC=syn-server-1
CFLAG=-Wall -g -lboost_system -lboost_thread-mt
all:$(SRC)
%.o:%.cpp
	$(CC) $(CFLAG)  $^ -o $@
clean:
	rm *.o
