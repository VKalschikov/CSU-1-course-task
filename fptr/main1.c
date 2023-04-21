#include <stdio.h>
#include <stdlib.h>

int add (int a, int b ){
	return a+b;
}
int sub (int a, int b ){
	return a-b;
}
int mul (int a, int b ){
	return a*b;
}
int mdiv (int a, int b ){
	return a/b;
}

typedef int (*calc_func)(int, int);

int main(){
	int a , b ;
	char op;
	calc_func func = NULL;
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf ("%c", &op);
	
	switch (op){
		case '+':
			func = add;
			break;
		case '-':
			func = sub;
			break;
		case '*':
			func = mul;
			break;
		case '/':
			func = mdiv;
			break;
		default:
			printf("Error!\n");
	}
	if (func != NULL){
		printf("%d %c %d = %d\n", a, op, b, func(a,b));
	}
	return 0;

}
