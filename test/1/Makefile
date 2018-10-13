objects:= $(wildcard *.h *.cpp)

main: $(objects)
	g++ $(objects)

gdb : $(objects)
	g++ -g $(objects)


.PHONY : clean

clean:
	-rm *.out

