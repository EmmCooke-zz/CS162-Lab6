CXX = g++
CXXFLAGS =  -std=c++0x
CXXFLAGS +=   -Wall
CXXFLAGS +=   -pedantic-errors
CXXFLAGS +=   -g
#CXXFLAGS +=   -O3
LDFLAGS =  -lboost_date_time
OBJS = DoubleLink.o Menu.o Node.o validateInput.o main.o
SRCS = DoubleLink.cpp Menu.cpp Node.cpp validateInput.cpp main.cpp
HEADERS = DoubleLink.hpp Menu.hpp Node.hpp validateInput.hpp

#target: dependencies
#rule to build
#

Lab6: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o Lab6

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c   $(@:.o=.cpp)

.PHONY: clean
clean:
	rm ${OBJS} Lab6

zip:
	zip -D Lab6_Cooke_Emmet.zip ${HEADERS} ${SRCS} makefile
