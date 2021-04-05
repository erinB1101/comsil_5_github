SRCS:=array.cpp rangearray.cpp main.cpp
OBJ:=$(SRCS:%.cpp=%.o)

exe: $(OBJ)
	g++ $(OBJ) -o exe

%.o:%.cpp Array.h RangeArray.h
	g++ -c $< -o $@

.PHONY: clean
clean:
	rm $(OBJ) exe
