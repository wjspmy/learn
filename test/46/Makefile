object := $(wildcard *.h *.cpp)

main : $(object)
	g++ $(object)

gdb : $(object)
	g++ -g $(object);

.PHONY : clean

clean : 
	rm *.out
