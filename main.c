#include <stdio.h>

int main(void)
{
	int nbr;
	printf("Choisissez un nombre: ");
	scanf("%d",&nbr);
	int nbr_choisi;
	printf("Entrez un nombre: ");
	scanf("%d",&nbr_choisi);
	int i;
	i = 0;
	while (nbr_choisi != nbr)
	{
		if (i != 0)
		{
			printf("Entrez un nombre: ");
			scanf("%d",&nbr_choisi);
		}
		i = 1;
		if (nbr_choisi < nbr )
		{
			printf("c'est plus\n");
		}
		else if (nbr_choisi > nbr)
		{
			printf("c'est moins\n");
		}
	}
	printf("Chiken Chiken WINNER\n");
	return 0;
}
