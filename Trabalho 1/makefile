# My makefile
 
# Name of the project
PROJ_NAME=printy
 
# .c files
C_SOURCE=$(wildcard ./source/*.cpp)
 
# .h files
H_SOURCE=$(wildcard ./source/*.hpp)
 
# Object files
OBJ=$(subst .cpp,.o,$(subst source,objects,$(C_SOURCE)))
 
# Compiler and linker
CC=g++
 
# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic  

				# utilizando gtest
				#  -lpthread  
				#  -libgtest.a

#utilizando gcov
#          -ftest-coverage 
# 				 -fprofile-arcs

# LD_FLAGS=-lgcov 
#          --coverage
 
# Command used at clean target
RM = rm -rf
 
#
# Compilation and linking
#
all: objFolder $(PROJ_NAME)
 
$(PROJ_NAME): $(OBJ)
	@ echo 'Building binary using GCC linker: $@'
	$(CC) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '
 
./objects/%.o: ./source/%.cpp ./source/%.hpp
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
./objects/testa_pilha.o: ./source/testa_pilha.cpp $(H_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
objFolder:
	@ mkdir -p objects
 
clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ $(RM) ./objects/*.gcno $(PROJ_NAME) *~
	@ rmdir objects
 
.PHONY: all clean