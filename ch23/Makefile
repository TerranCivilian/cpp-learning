CC= g++
RM= rm -vf
CFLAGS= -Wall -g
CPPFLAGS= -Wall -g -std=c++11
SRCFILES= $(wildcard *.cpp)
OBJFILES= $(patsubst %.cpp, %.o, $(SRCFILES))
PROGFILES= $(patsubst %.cpp, %, $(SRCFILES))

.PHONY: all clean

all: $(PROGFILES)
clean:
	$(RM) $(OBJFILES) $(PROGFILES) *~
