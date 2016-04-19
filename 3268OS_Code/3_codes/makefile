# makefile
.PHONY:clean all
CC=gcc
flag=-lstdc++ -Wall  
src=test tcp_sync_echo_client  tcp_sync_echo_server
all:$(src)
%.out:%.cpp
	$(CC) $(flag)  -lboost_system -lboost_thread-mt -c $^ -o $@
clean:
	rm *.out
