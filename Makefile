.SILENT:

TMP_DIR := ./runner/target

comp: main.cpp
	g++ -std=c++17 main.cpp -o $(TMP_DIR)/kyopuro.out

exec: 
	$(TMP_DIR)/kyopuro.out

clean:
	rm $(TMP_DIR)/*

run:
	make comp && make exec && make clean

r:
	make comp && make exec > $(TMP_DIR)/run_result.txt && cat $(TMP_DIR)/run_result.txt && make clean

c:
	sh ./runner/check.sh