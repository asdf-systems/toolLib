## No dragons yes ##################

TARG=appname
CPPFILES=\
	$(TARG).cpp\
	additional_files.cpp\

## Here be dragons #################

CXX=g++
CXXFLAGS=-O2
INCLUDES=-I.
LIBS=

## Here be even more dragons #######

OBJFILES = $(CPPFILES:%.cpp=%.o)

all: obj link

debug:
	CXXADDFLAGS="-DDEBUG -ggdb" make all

obj:
	$(CXX) -c $(CXXFLAGS) $(CXXADDFLAGS) $(INCLUDES) $(CPPFILES)

link:
	$(CXX) $(CXXFLAGS) $(CXXADDFLAGS) $(LIBS) $(OBJFILES)  -o $(TARG)

clean:
	-@rm *.o $(TARG) *~ 

run:
	./$(TARG)

.PHONEY: all
