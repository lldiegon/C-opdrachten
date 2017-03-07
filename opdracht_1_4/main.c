#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
    printf("tik een getal in: ");
    fflush(stdout);
    while(!scanf("%d", &i) || i < 0 || i > 100 ) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ;
        printf("tik een getal in: ");
    }
	for(int vermenigvuldiging = 1; vermenigvuldiging < 11; vermenigvuldiging++){
		printf("%3d x %d = %4d\n", vermenigvuldiging, i, vermenigvuldiging*i);
	}
	return 0;
}
