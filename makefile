
lab10: lab10Driver.o graph.o
	g++ -std=c++11 -o lab10 lab10Driver.o graph.o

graph.o: graph.cpp
	g++ -std=c++11 -c -g graph.cpp

lab10Driver.o: lab10Driver.cpp
	g++ -std=c++11 -c -g lab10Driver.cpp

clean:
	rm *.o lab10
