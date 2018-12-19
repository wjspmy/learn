object := $(wildcard *.h *.cpp)

main : $(object)
	g++ $(object)

gdb : $(object)
	g++ -g $(object);

mysql : $(object)
	g++ $(object) -lmysqlclient

.PHONY : clean

clean : 
	rm *.out
