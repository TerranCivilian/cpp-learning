CC= g++
RM= rm -vf
CFLAGS= -Wall -g
CPPFLAGS= -Wall -g -std=c++11
SRCFILES= file1.cpp file2.cpp
OBJFILES= file1.o file2.o
PROGFILES= program

.PHONY: all clean

progam: $(OBJFILES)
	$(CC) -o $(PROGFILES) $(CPPFLAGS) $(SRCFILES)
clean:
	$(RM) $(OBJFILES) $(PROGFILES) *~
