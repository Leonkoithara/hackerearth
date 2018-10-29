#include <stdio.h>

void main()
{ 
	int P, S, T, H, x, cost = 0;

	scanf("%d", &P);	
	scanf("%d", &S);	
	scanf("%d", &T);	
	scanf("%d", &H);	
	scanf("%d", &x);	

	if(x > S-T)
	{ 
		cost += (S-T)*P;
		cost += (x-(S-T))*H;
	}
	else
	{ 
		cost += x*P;
	}
	printf("%d", cost);
}
