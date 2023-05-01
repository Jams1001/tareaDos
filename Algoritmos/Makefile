CC = g++
CFLAGS = -Wall -std=c++11

template: main fun signatures
all: build run clean

main.cpp:
	if [ ! -f main.cpp ]; then \
	echo '#include "signatures.hpp"' > ./main.cpp
	echo '' >> ./main.cpp
	echo 'int main() {' >> ./main.cpp
	echo '  func_inicial();' >> ./main.cpp
	echo '  return 0;' >> ./main.cpp
	echo '}' >> ./main.cpp

fun.cpp:
	if [ ! -f fun.cpp ]; then \
	echo '#include "signatures.hpp"' > ./fun.cpp
	echo '' >> ./fun.cpp
	echo 'void func_inicial() {' >> ./fun.cpp
	echo '  // Esta función no hace nada' >> ./fun.cpp
	echo '};' >> ./fun.cpp

signatures.cpp:
	if [ ! -f signatures.cpp ]; then \
	echo '#ifndef HEADER' > ./signatures.hpp
	echo '#define HEADER' >> ./signatures.hpp
	echo '#include <iostream>' >> ./signatures.hpp
	echo '' >> ./signatures.hpp
	echo 'void func_inicial();' >> ./signatures.hpp
	echo '' >> ./signatures.hpp
	echo '#endif //HEADER' >> ./signatures.hpp

build: 
	$(CC) $(CFLAGS) ./main.cpp ./fun.cpp -o ./output.out

run: 
	./output.out

clean:
	rm -f ./*.out

documentation-firefox:
	firefox ./html/index.html

documentation-Chrome:
	google-chrome ./html/index.html

.PHONY: all template build run clean documentayion-firefox documentation-Chrome
