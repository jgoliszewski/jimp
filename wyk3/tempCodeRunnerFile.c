void pwekt(double *v, int n)
{
	printf("[ ");
	while (n--)
	{
		printf("%g ", *v);
		v++;
	}
	printf("]");
}