
 

 
# Name of the project
PROJECT_NAME = atmoperation

# Output direct coory
BUILD = build

# All source code files
SRC = main.c\
src/atmoperations.c\


TEST_SRC = src/atmoperations.c\
test/test_atmoperations.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out


# All include folders with header files
INC	= -Iunity\
-Iinc\
-Itest
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out


# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out



# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
