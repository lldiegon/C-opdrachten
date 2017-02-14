#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int status = 1;
	printf("Druk op een getal: ");
	int ch = getchar();
	
	if((ch == '-')||(ch == "+")){
		if(ch == "-"){
			status = -1;
		}
	}
	
	else if((ch <= '9')&&(ch >= '0')){
		i *= 10;
		i += ch - '0';
	}
	
	while((ch = getchar() != '\n')){
		i *= 10;
		i += ch - '0';
	}
	
	printf("%d", i * status);
	return 0;
}
