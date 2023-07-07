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

c:
	make comp

r:
	make run