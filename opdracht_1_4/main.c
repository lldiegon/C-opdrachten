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
	printf("1 x %d = %d\n", i, i);
	printf("2 x %d = %d\n", i, 2*i);
	printf("3 x %d = %d\n", i, 3*i);
	printf("4 x %d = %d\n", i, 4*i);
	printf("5 x %d = %d\n", i, 5*i);
	printf("6 x %d = %d\n", i, 6*i);
	printf("7 x %d = %d\n", i, 7*i);
	printf("8 x %d = %d\n", i, 8*i);
	printf("9 x %d = %d\n", i, 9*i);
	printf("10 x %d = %d\n", i, 10*i);
	return 0;
}
