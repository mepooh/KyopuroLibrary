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
	make comp

c:
	make comp

r:
	make run