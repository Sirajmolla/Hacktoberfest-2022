#include <stdio.h>
#define max 20

int main()
{
	int i, j, n;
	float x[max], f[max], sum, pro, xp, fp;
	printf("Input member of data points:");
	scanf("%d", &n);
	printf("\nOne set each;\n");
	for (i = 0; i < n; i++)
	{
		scanf("%f%f", &x[i], &f[i]);
	}
	printf("\nInput x at which point is required:");
	scanf("%f", &xp);
	sum = 0.0;
	for (i = 1; i <= n; i++)
	{
		pro = 1.0;
		for (j = 1; j <= n; j++)
		{
			if (i != j)
				pro = pro * (xp - x[j]) / (x[i] - x[j]);
		}
		sum = sum + pro * f[i];
	}
	fp = sum;
	printf("\nInterpolated function value");
	printf(" at x=%f is %f\n", xp, fp);
	return 0;
}
