#include <stdio.h>
#include <stdbool.h>


int getIntegers(char* filename, int a[100], int size){
	FILE * file = fopen(filename, "r");
	if (file ==  NULL){
		printf("file niet gevonden");
		return 0;
	}
	
    bool negatief = false;
    char c;
	int cijfer = 0;
	int i = 0;
	
	while((c = fgetc(file)) != EOF) {
        if (c == '-'){
            c = fgetc(file);
            if(c >= '0' && c <= '9'){
                negatief = true;
            }
        }
        while(c >= '0' && c <= '9'){
                cijfer *= 10;
                cijfer += c - '0';
                a[i] = cijfer;
                c = fgetc(file);
        }
        if (negatief == true){
            cijfer *= -1;
            a[i] = cijfer;
            negatief = false;
            i++;
        }
        if(cijfer > 0 ){
            i++;
        }
        cijfer = 0;
    }
	fclose(file);
	return i;
}
int main(void) {
	int a[100];
	int n = getIntegers("../getallen.txt",a, 100);

	if (n > 0) {
		puts("gevonden getallen: ");
		for (int i = 0;i < n; i++){
		printf("%d ",a[i]);
		}
	putchar('\n');
	}

 return 1;
}
