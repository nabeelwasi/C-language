#include<stdio.h>
#include<conio.h>
int main()
{
	int key;
	printf("Find you months say about you\nEnter month number=");
	scanf("%d",&key);
	
switch(key)
	{
	case 1:
		printf("\nJanuary\nYou are Bold and rude");
	break;
	case 2:
		printf("\nFebuary\nYou are lucky and royal");
	break;
	case 3:
		printf("\nMarch\nYou are Naughty and genuine");
	break;
	case 4:
		printf("\nApril\nYou are Caring and strong");
	break;
	case 5:
		printf("\nMay\nYou are Loving and practical");
	break;
	case 6:
		printf("\nJune\nYou are Romantic and curious");
	break;
	case 7:
		printf("\nJuly\nYou are Adveturous and honest");
	break;
	case 8:
		printf("\nAugust\nYou are Active and harkworking");
	break;
	case 9:
		printf("\nSeptember\nYou are Sensitive and pretty");
	break;
	case 10:
		printf("\nOctober\nYou are Stylish and pretty");
	break;
	case 11:
		printf("\nNovember\nYou are Talented and creative");
	break;
	case 12:
		printf("\nDecember\nYou are Confident and freedom");
	break;
default:
	printf("You entered wrong month number :/\n");
	}
getch();
}

