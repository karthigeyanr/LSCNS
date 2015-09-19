OBJ_FILES := $(addprefix ./bin/,$(notdir $(CPP_FILES:.cpp=.o)))
LD_FLAGS := 

myproj: $(OBJ_FILES)
#	make -C app
#	make 
#	make -C ../parser
#	make
#	make -C ../watcdog
#	make
#	make -C ../
	g++ $(LD_FLAGS) -o $@ $^
