morse: morse.cpp
	g++ -Wall morse.cpp -o morse

.PHONY: clean
clean:
	rm morse

.PHONY: all
all:
	clean morse