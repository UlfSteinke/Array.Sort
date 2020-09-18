#include <iostream>

main()
{
	
	int l;

	printf("Laenge des Arrays eingeben");
	scanf("%i",&l);

	int i[l];

	int c = 0;
	while (c<l)
	{
		printf("Bitte eine Zahl fuer das Array eingeben");
		scanf("%i",&i[c]);
		c++;
	}

	int d = 0;
	int e = 0;
	int m;
	while (d<(l-1))
	{
		e = 0;
		while ((e+d)<(l-1))
		{
			if (i[d + e + 1] < i[d])
			{
				m = i[d + 1 + e];
				i[d + 1 + e] = i[d];
				i[d] = m;

			}
			e++;
		}
		d++;
	}
	int z = 0;
	while(z<l)
	{
		printf("\n%i", i[z]);
		z++;
		
	}
}
