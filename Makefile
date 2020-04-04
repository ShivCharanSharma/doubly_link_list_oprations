.PHONY: solution run_solution1 1a solution1/1a  run_solution2a 2a 2b q2 q3 run_solution2b run_solution3  build clean

build: solution

solution: 1a 1b q2 q3

1a: solution1/1a

1b: solution1/1b/a4q1b 

q2: 2a 2b

q3: solution3/a4q3

2a: solution2/2a/a4q2

2b: solution2/2b/gcd

solution1/1a: solution1/1a/a4q1aint solution1/1a/a4q1achar

solution1/1a/a4q1aint: solution1/1a/a4q1a_int.c
	gcc -Wall -DINT $^ -o $@

solution1/1a/a4q1achar: solution1/1a/a4q1a_char.c
	gcc -Wall -DCHAR $^ -o $@

solution1/1b/a4q1b: solution1/1b/a4q1b.c  solution1/1b/sorted_list.c solution1/1b/sorted_list.h
	gcc -Wall -DINT $^ -o $@ 


solution2/2a/a4q2: solution2/2a/a4q2.c solution2/2a/sorted_list.c solution2/2a/sorted_list.h
	gcc -Wall -DINT  $^ -o $@

solution2/2b/gcd: solution2/2b/a4q2b.c
	gcc -Wall -O3 $^ -o $@

solution3/a4q3: solution3/a4q3.c  solution3/sorted_list.c solution3/sorted_list.h solution3/a.c solution3/a.h solution3/functions.c solution3/functions.h
	gcc -Wall -DFRACT  $^ -o $@ 


run_solution1b:
	@cd solution1/1b && chmod +x a4q1b && ./a4q1b cmd.txt

run_solution1a_int:
	@cd solution1/1a && chmod +x a4q1aint && ./a4q1aint cmd1.txt

run_solution1a_char:
	@cd solution1/1a && chmod +x a4q1achar && ./a4q1achar cmd2.txt

run_solution2a:
	@cd solution2/2a && chmod +x a4q2 && ./a4q2 cmd.txt

run_solution2b:
	@cd solution2/2b && chmod +x gcd && ./gcd cmd.txt

run_solution3:
	@cd solution3/   && chmod +x a4q3 && ./a4q3 cmd.txt


clean:
	rm solution1/1a/a4q1aint solution1/1a/a4q1achar
	rm solution1/1b/a4q1b
	rm solution2/2a/a4q2 solution2/2b/gcd
	rm solution3/a4q3
