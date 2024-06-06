CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
SRCS = Math.cpp Log.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = myprogram

compile: $(OBJS)

link: $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)

run:
	./myprogram.exe

all: compile link run clean

# pattern rule to compile each source file into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: compile link clean