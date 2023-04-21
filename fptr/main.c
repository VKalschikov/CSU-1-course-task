#include <stdio.h>
#include <stdlib.h>

void print_hello(){
	printf("Hello, world!\n");
}

void print_hello1(){
	printf("Hello, world! 1 func\n");
}

void print_hello2(){
	printf("Hello, world! 2 func\n");
}

int main(int argc, char** argv){
	switch(argc){
		case 1:
			print_hello();
			break;
		case 2:
			print_hello1();
			break;
		default:
			print_hello2();
			break;
	}
	return 0;
}
