#include <stdio.h>

int main(int argc, char **argv)
{
	int i=0;
	int status = 1;
	int print = 0;
	printf("Druk op een getal: ");
	int ch = getchar();
	
	if((ch == '-')||(ch == '+')){
		if(ch == '-'){
			status = -1;
		}
	}
	
	else if((ch <= '9')&&(ch >= '0')){
		i *= 10;
		i += ch - '0';
		print = 1;
	}
	
	while((ch = getchar()) != '\n'){
		if((ch <= '9')&&(ch >= '0')){
			i *= 10;
			i += ch - '0';
			print = 1;
		}
	}
	
	if(print==1){
		printf("%d", i * status);
	}
	else if(print==0){
		printf("Foutieve invoer!");
	}
	return 0;
}
