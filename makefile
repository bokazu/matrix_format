gcc_options = -std=c++17 -Wall --pedantic-errors -g


program1 : sample1.o
		g++ -o $@ $^

sample1.o : sample1.cpp
		g++ -c $(gcc_options) $<

program2 : sample2.o
		g++ -o $@ $^

sample2.o : sample2.cpp
		g++ -c $(gcc_options) $<

program3 : sample3.o
		g++ -o $@ $^

sample3.o : sample3.cpp
		g++ -c $(gcc_options) $<


run : program1 program2 program3
		./program1
		./program2
		./program3

clean : 
		rm -f ./program1
		rm -f ./program2
		rm -f ./program3

.PHONY : run clean

#ERROR CODE
# program : sample1.o sample2.o sample3.o
# 		g++ -o $@ $^

# sample1.o : sample1.cpp
# 		g++ -c $(gcc_options) $<

# sample2.o : sample2.cpp
# 		g++ -c $(gcc_options) $<

# sample3.o : sample3.cpp
# 		g++ -c $(gcc_options) $<

# run : program
# 		./program

# clean :
# 		rm -f ./program