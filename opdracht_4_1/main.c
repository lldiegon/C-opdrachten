#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *fp1, *fp2;
	int ch1, ch2;
	char* file1 = "../bestand1.txt";
	char* file2 = "../bestand2.txt";
	
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "r");
	
	if (fp1 == NULL) {
		printf("Kan %s niet openen", file1);
		exit(1);
	} else if (fp2 == NULL) {
		printf("Kan %s niet openen", file2);
		exit(1);
	} else {
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);
	
		while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
			ch1 = fgetc(fp1);
			ch2 = fgetc(fp2);
		}
	
		if (ch1 == ch2)
			printf("De bestanden zijn hetzelfde n");
		else if (ch1 != ch2)
			printf("De bestanden zijn verschillend n");
	
		fclose(fp1);
		fclose(fp2);
	}
	return (0);
}
