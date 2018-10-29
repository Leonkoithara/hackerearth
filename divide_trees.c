#include <stdio.h>
#include <stdlib.h>

typedef struct graph_vertex
{ 
	int edges;
	char *neighbours;
}vertex;

int main()
{ 
	vertex *g;

	int n, i, v1, v2;
	long int w;

	scanf("%d", &n);
	scanf("%ld", &w);

	g = (vertex*)malloc(n*sizeof(vertex));

	for(i = 0;i < n;i++)
	{
		g[i].edges = 0;
		g[i].neighbours = (char*)malloc(n*sizeof(char));
	}

	for(i = 0;i < n-1;i++)
	{ 
		scanf("%d", &v1);
		scanf("%d", &v2);

		g[v1].edges++;
		g[v1].neighbours[v2] = 1;
		 
		g[v2].edges++;
		g[v2].neighbours[v1] = 1;
	}

	for(i = 0;i < n;i++)
	{}
	 
	return 0;
}
