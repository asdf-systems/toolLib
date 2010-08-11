## No dragons yes ##################

TARG=testCase
CPPFILES=\
	StringFactory.cpp \
	StringWX.cpp \
	String.cpp \
	$(TARG).cpp\
	#String.cpp\
	#DebugInfo.cpp \
	
## Here be dragons #################

CXX=colorgcc
CXXFLAGS=-O2 -Wall -pg `wx-config --cxxflags` -ggdb 
LDFLAGS := -pg `wx-config --libs media core base net` -L/usr/local/lib -lmysqlpp -lmysqlclient -lnsl -lz -lm
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
	$(CXX) $(CXXFLAGS) $(CXXADDFLAGS) $(LIBS) $(OBJFILES) $(LDFLAGS)  -o $(TARG)

clean:
	-@rm *.o $(TARG) *~ 

run:
	./$(TARG)

.PHONEY: all
