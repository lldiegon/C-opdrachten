#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	printf("Vul een karakter in: ");
	int ch = getchar();
	if(isupper(ch)){
		printf("hexadecimaal: %#x\n", ch);
	}
	else if(islower(ch)){
		printf("decimaal: %d\n", ch);
	}
	else if(isalpha(ch) == 0){
		printf("karakter zelf: %c\n", ch);
	}
	return 0;
}
