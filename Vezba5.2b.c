// Vezba5.2b.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char ime[21],prezime[26];
	int godiste;
	printf("Unesite ime: \n");
	gets(ime);// cita ceo red
	puts("Unesite prezime: ");
	//getchar(); // ako sledeci gets ne radi
	gets(prezime);// cita ceo red
	// duzina stringa
	int duzImena = strlen(ime);
	printf("Duzina imena je: %d\n",
		duzImena);
	// kopiranje i spajanje stringova
	char imeprezime[47];
	strcpy(imeprezime, ime);
	puts(imeprezime);
	strcat(imeprezime, " ");
	strcat(imeprezime, prezime);
	puts(imeprezime);
	// uporedjivanje stringova
	if (strcmp(ime, prezime) == 0)
		printf("Ime i prezime su isti\n");
	else
		if(strcmp(ime, prezime) < 0)
			printf("Ime je pre prezimena\n");
		else // >0
			printf("Prezime je pre imena\n");
	// unos godista konverzija stringa u broj
	printf("Unesite godiste: ");
	char god[6];
	gets(god);
	// da li su svi znakovi cifre
	int i = 0;
	while (god[i] != '\0')
	{
		if (!isdigit(god[i]))
			break;
		i++;
	}
	if (god[i] == '\0')
	{
		godiste = atoi(god);
		printf("Godiste je: %d\n", godiste);
	}
	else
		printf("Niste uneli broj\n");
}
