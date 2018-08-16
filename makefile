# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o hello_world.o taran_add.o capitalize.o
	$(CXX) $(CXXFLAGS) -o main main.o hello_world.o taran_add.o capitalize.o

# The main.o target can be written more simply

main.o: main.cpp hello_world.h hello_world.cpp taran_add.cpp capitalize.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

hellow_world.o: hello_world.h 

taran_add.o: taran_add.h

capitalize.o: capitalize.h

