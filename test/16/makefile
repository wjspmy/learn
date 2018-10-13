object := $(wildcard *.h *.cpp)

main : $(object)
	g++ $(object)

.PHONY : clean

gdb : $(object)
	g++ -g -o a.o $(object)

clean :
	rm *.o*
