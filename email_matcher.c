#include <stdio.h>

int main() {
	char regex[] = "\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,}\\b";
	printf("E-mails may be validated by using the following regex: %s\n", regex);
	return 0;
}
