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
	int max = 20;
	printf("%*d x %d = %d\n", max, 1, i, i);
	printf("%*d x %d = %d\n", max, 2, i, 2*i);
	printf("%*d x %d = %d\n", max, 3, i, 3*i);
	printf("%*d x %d = %d\n", max, 4, i, 4*i);
	printf("%*d x %d = %d\n", max, 5, i, 5*i);
	printf("%*d x %d = %d\n", max, 6, i, 6*i);
	printf("%*d x %d = %d\n", max, 7, i, 7*i);
	printf("%*d x %d = %d\n", max, 8, i, 8*i);
	printf("%*d x %d = %d\n", max, 9, i, 9*i);
	printf("%*d x %d = %d\n", max, 10, i, 10*i);
	return 0;
}
