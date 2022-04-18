#include <stdio.h>

int main() {
	char regex[] = "/\\*.*\\*/";
	printf("Multiple-line comments are caught by using the following regex: %s\n", regex);	

	return 0;
}