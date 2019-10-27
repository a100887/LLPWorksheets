all: create-directory rebuild

rebuild: clean build-normal build-extended

build-normal:
	gcc -Wall -DNORMAL 11.c -o "release/counter"
	gcc -Wall -DNORMAL -g -O0 11.c -o "debug/counter"

build-extended:
	gcc -Wall -DEXTENDED 11.c -o "release/counter2"
	gcc -Wall -DEXTENDED -g -O0 11.c -o "debug/counter2"
	

clean:
	-rm "release/counter"
	-rm "release/counter2"
	-rm "debug/counter"
	-rm "debug/counter2"

create-directory:
	[ ! -d "Desktop/lo1/debug" ] && mkdir debug || echo "Directory already exists"
	[ ! -d "Desktop/lo1/release" ] && mkdir release || echo "Directory already exists"