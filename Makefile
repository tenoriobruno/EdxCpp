all:
	g++ -c src/Teacher.cc
	g++ -c src/Student.cc
	g++ -c src/Course.cc
	g++ -c main.cc
	g++ Teacher.o Student.o Course.o main.o
	mkdir bin
	mv *.o *.out ./bin
	./bin/a.out
	rm -rf bin
