CC = g++
CFLAGS = -Wall -std=c++11

MAIN_FILE = main
MAIN_FILE2 = stackTemplate
FUN_FILE = exceptions
SIGNATURES_FILE = signatures
BUILD_DIR = build

all: run2
all2: build run clean
template: $(MAIN_FILE).cpp $(FUN_FILE).cpp $(SIGNATURES_FILE).hpp

$(MAIN_FILE).cpp:
	if [ ! -f $(MAIN_FILE).cpp ]; then \
	echo '#include "$(SIGNATURES_FILE).hpp"' > ./$(MAIN_FILE).cpp; \
	echo '' >> ./$(MAIN_FILE).cpp; \
	echo 'int main() {' >> ./$(MAIN_FILE).cpp; \
	echo '  func_inicial();' >> ./$(MAIN_FILE).cpp; \
	echo '  return 0;' >> ./$(MAIN_FILE).cpp; \
	echo '}' >> ./$(MAIN_FILE).cpp; \
	fi

$(FUN_FILE).cpp:
	if [ ! -f $(FUN_FILE).cpp ]; then \
	echo '#include "$(SIGNATURES_FILE).hpp"' > ./$(FUN_FILE).cpp; \
	echo '' >> ./$(FUN_FILE).cpp; \
	echo 'void func_inicial() {' >> ./$(FUN_FILE).cpp; \
	echo '  // Esta función no hace nada' >> ./$(FUN_FILE).cpp; \
	echo '};' >> ./$(FUN_FILE).cpp; \
	fi

$(SIGNATURES_FILE).hpp:
	if [ ! -f $(SIGNATURES_FILE).hpp ]; then \
	echo '#ifndef SIGNATURES_HPP' > ./$(SIGNATURES_FILE).hpp; \
	echo '#define SIGNATURES_HPP' >> ./$(SIGNATURES_FILE).hpp; \
	echo '#include <iostream>' >> ./$(SIGNATURES_FILE).hpp; \
	echo '' >> ./$(SIGNATURES_FILE).hpp; \
	echo 'void func_inicial();' >> ./$(SIGNATURES_FILE).hpp; \
	echo '' >> ./$(SIGNATURES_FILE).hpp; \
	echo '#endif //SIGNATURES_HPP' >> ./$(SIGNATURES_FILE).hpp; \
	fi

build: 
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) ./$(MAIN_FILE).cpp ./$(FUN_FILE).cpp -o ./$(BUILD_DIR)/output.out

run2:
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) ./$(MAIN_FILE2).cpp -o ./$(BUILD_DIR)/output.out
	./$(BUILD_DIR)/output.out

run: 
	./$(BUILD_DIR)/output.out

clean:
	rm -rf $(BUILD_DIR)

documentation-firefox:
	firefox ./html/index.html

documentation-Chrome:
	google-chrome ./html/index.html

.PHONY: all template build run run2 clean documentation-firefox documentation-Chrome
