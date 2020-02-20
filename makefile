library : main.o
	g++ -o library main.o
class.o : class.hpp
	g++ -c class.hpp
main.o : main.cpp
	g++ -c main.cpp class.hpp
