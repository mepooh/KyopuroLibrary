.SILENT:
comp: main.cpp
	g++ -std=c++17 main.cpp

exec: 
	./a.out

run:
	make comp && make exec

txt:
	make run > result.txt

cmp: 
	make comp 2> cmopile_result.txt

r:
	make cmp && make exec > result.txt && cat result.txt

c:
	sh check.sh
