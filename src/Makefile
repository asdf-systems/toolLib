## No dragons yet ##################

TARG=testCase
CPPFILES=\
	$(TARG).cpp\
	StringFactory.cpp \
	StringWX.cpp \
	DebugInfo.cpp \
	

CXX = g++
CXXFLAGS += -O2 -Wall
LDFLAGS +=

## Enable WX
CXXFLAGS += `wx-config --cxxflags`
LDFLAGS += `wx-config --libs core base net`

## Enable MySQL
#LDFLAGS += -lmysqlpp -lmysqlclient

## Here be dragons #######

OBJFILES = $(CPPFILES:%.cpp=%.o)

all: obj link

debug:
	CXXFLAGS="${CXXFLAGS} -DDEBUG -ggdb -pg" make all

obj:
	$(CXX) $(CXXFLAGS) -c $(CPPFILES)

link:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJFILES) -o $(TARG)

clean:
	-@rm -f *.o $(TARG) *~

run:
	./$(TARG)

.PHONEY: all
