# Name of the project
PROJECT_NAME = routh_array

# Output directory
BUILD = build

# All source code files
SRC = src/auxiliary_equation.c\
src/complete_routh_array.c\
src/sign_changes.c\
src/start_routh_array.c\

# All test source files
TEST_SRC = src/auxiliary_equation.c\
src/complete_routh_array.c\
src/sign_changes.c\
src/start_routh_array.c\
test/test_routh_array.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/test_$(PROJECT_NAME).$(EXEC)

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc project_main.c $(SRC) $(INC) -o $(PROJECT_OUTPUT)
#	gcc project_main.c $(SRC) $(INC)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
	
#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
#	$(RM) $(BUILD) $(DOCUMENTATION_OUTPUT)
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) $(BUILD)

# Create new build folder if not present
$(BUILD):
	mkdir build
