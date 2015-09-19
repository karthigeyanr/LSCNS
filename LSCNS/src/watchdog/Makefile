CPP_FILES := $(wildcard ./*.cpp)
OBJ_FILES := $(addprefix ../bin/,$(notdir $(CPP_FILES:.cpp=.o)))
#LD_FLAGS := 
CC_FLAGS := -I../includes/

proj.exe: $(OBJ_FILES)
	echo done compiling folder
#	g++ $(LD_FLAGS) -o $@ $^

../bin/%.o: ./%.cpp
	g++ $(CC_FLAGS) -c -o $@ $<
