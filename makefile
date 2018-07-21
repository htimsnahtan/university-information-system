CXX = g++
CXXFLAGS = -std=c++0x

OBJS = Building.o Instructor.o libraryFunctions.o main.o Person.o Student.o University.o

SRCS = Building.cpp Instructor.cpp libraryFunctions.cpp main.cpp Person.cpp Student.cpp University.cpp

HEADERS = Building.hpp Instructor.hpp libraryFunctions.hpp Person.hpp University.hpp

informationSystem: ${OBJS} ${HEADERS}
	${CXX} ${SRCS} -o informationSystem
	
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
	
clean:
	rm ${OBJS}