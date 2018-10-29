#include <stdio.h>

int lcm(int a, int b)
{
	int i, max;

	if(a > b)
		max = a;
	else
		max = b;

	for(i = max;i < a*b;i++)
	{
		if(i%a == 0 && i%b == 0)
			return i;
	}
	return a*b;
}
 
int main()
{ 
	int t, n, a, b, i, j, k, count = 0, lcm_out;

	scanf("%d", &t);

	for(k = 0;k < t;k++)
	{ 
		scanf("%d", &n);
		scanf("%d", &a);
		scanf("%d", &b);
	
		count = (n+1)*(n+2)/2;	
		lcm_out = lcm(a, b);

		for(i = 0;i <= n;i++)
		{ 
			for(j = 1; (lcm_out/a*j)+(lcm_out/b*j) <= i;j++)
			{ 
				count = count - n-i;
			}
		}
	
		printf("%d\n", count);
	}

	return 0;
}
