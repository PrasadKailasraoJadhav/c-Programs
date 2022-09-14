#include <stdio.h>
int main()
{
	int A , B;

	printf("Enter two numbers: ");
	scanf("%d %d", &A, &B);

	if (A > B)
		printf("%d is Max number.",A);

	if(B >A)
		printf("%d is Max number.",B);

    if(A == B)
    {
        printf("Both are equal");
    }
	return 0;
}
