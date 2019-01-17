#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;
int funcbor(char *books[80][2], bool booknum[], int l, int m)
{
	for (;;)
	{
		int i;
		system("cls");
		printf("\nPlease enter the 3 digit reg number of the book you wish to deposit back :");
		char ch2[9];
		gets(ch2);
		for (i = 0; i < l; i++)
		{
			if (strcmp(*books[i], ch2) == 0)
			{
				break;
			}
		}
		if (i == l)
			printf("\nError: such reg# not found, try again..");
		else
		{
			printf("\nBook found\ninformation is as follows:\n\n");
			for (int j = 0; j < 2; j++)
			{
				printf("%s", books[i][j]);
				printf("\t");
			}
			printf("\nDo you want to issue it? (y/n)");
			char c = toupper(_getch());
			if (c == 'Y'){
				printf("\nYour book has been issued...");
				booknum[i] = 1;
				printf("\nDo you want to issue another one? (y/n)");
				char c = toupper(_getch());
				if (c == 'N')
					return 0;
			}
			else if (c == 'N')
				system("cls");
		}
	}
}
int funcret(char *books[80][2], bool booknum[], int l, int m)
{
	for (;;)
	{
		int i;
		system("cls");
		printf("\nPlease enter the 3 digit reg number of the book you wish to deposit back :");
		char ch2[9];
		gets(ch2);
		for (i = 0; i < l; i++)
		{
			if (strcmp(*books[i], ch2) == 0)
			{
				break;
			}
		}
		if (i == l)
			printf("\nError: such reg# not found, try again..");
		else
		{
			if (booknum[i] == 0){
				printf("\nThe book is already present in library...");
				_getch();
			}
			else
			{
				printf("\ninformation is as follows:\n\n");
				for (int j = 0; j < 2; j++)
				{
					printf("%s", books[i][j]);
					printf("\t");
				}
				printf("\nDo you want to continue? (y/n)");
				char c = toupper(_getch());
				if (c == 'Y'){
					printf("\nYour book has been depositted...");
					booknum[i] = 0;
					printf("\nDo you want to deposit another one? (y/n)");
					char c = toupper(_getch());
					if (c == 'N')
						return 0;
				}
				else if (c == 'N')
					system("cls");
			}
		}
	}
}
const char* func1(bool x)
{
	char *a = " Borrowed", *b = "Available";

	if (x == 0)
		return b;
	else if (x == 1)
		return a;
}
int main(void)
{
	static int k = 0, l = 50, m = l - 1;
	static bool booknum[80];
	char ch1 = ' ';
	for (int i = 0; i < l; i++)
		booknum[i] = 0;
	char *books[80][2] = { { "001", "ULYSSES by ames Joyce" }, { "002", "THE GREAT GATSBY by F. Scott Fitzgerald" }, { "003", "A PORTRAIT OF THE ARTIST AS A YOUNG MAN by James Joyce" }, { "004", "LOLITA by Vladimir Nabokov" }, { "005", "BRAVE NEW WORLD by Aldous Huxley" }, { "006", "THE SOUND AND THE FURY by William Faulkner" }, { "007", "CATCH-22 by Joseph Heller" }, { "008", "DARKNESS AT NOON by Arthur Koestler" }, { "009", "SONS AND LOVERS by D.H. Lawrence" }, { "010", "THE GRAPES OF WRATH by John Steinbeck" }, { "011", "UNDER THE VOLCANO by Malcolm Lowry" }, { "012", "THE WAY OF ALL FLESH by Samuel Butler" }, { "013", "1984 by George Orwell" }, { "014", "CLAUDIUS by Robert Graves" }, { "015", "TO THE LIGHTHOUSE by Virginia Woolf" }, { "016", "AN AMERICAN TRAGEDY by Theodore Dreiser" }, { "017", "THE HEART IS A LONELY HUNTER by Carson McCullers" }, { "018", "SLAUGHTERHOUSE-FIVE by Kurt Vonnegut" }, { "019", "INVISIBLE MAN by Ralph Ellison" }, { "020", "NATIVE SON by Richard Wright" }, { "021", "HENDERSON THE RAIN KING by Saul Bellow" }, { "022", "APPOINTMENT IN SAMARRA by John O’Hara" }, { "023", "U.S.A.(trilogy)by John Dos Passos" }, { "024", "WINESBURG, OHIO by Sherwood Anderson" }, { "025", "A PASSAGE TO INDIA by E.M. Forster" }, { "026", "THE WINGS OF THE DOVE by Henry James" }, { "027", "THE AMBASSADORS by Henry James" }, { "028", "TENDER IS THE NIGHT by F. Scott Fitzgerald" }, { "029", "THE STUDS LONIGAN TRILOGY by James T. Farrell" }, { "030", "THE GOOD SOLDIER by Ford Madox Ford" }, { "031", "ANIMAL FARM by George Orwell" }, { "032", "THE GOLDEN BOWL by Henry James" }, { "033", "SISTER CARRIE by Theodore Dreiser" }, { "034", "A HANDFUL OF DUST by Evelyn Waugh" }, { "035", "AS I LAY DYING by William Faulkner" }, { "036", "ALL THE KING’S MEN by Robert Penn Warren" }, { "037", "THE BRIDGE OF SAN LUIS REY by Thornton Wilder" }, { "038", "HOWARDS END by E.M. Forster" }, { "039", "GO TELL IT ON THE MOUNTAIN by James Baldwin" }, { "040", "THE HEART OF THE MATTER by Graham Greene" }, { "041", "LORD OF THE FLIES by William Golding" }, { "042", "DELIVERANCE by James Dickey" }, { "043", "A DANCE TO THE MUSIC OF TIME (series) by Anthony Powell" }, { "044", "POINT COUNTER POINT by Aldous Huxley" }, { "045", "THE SUN ALSO RISES by Ernest Hemingway" }, { "046", "THE SECRET AGENT by Joseph Conrad" }, { "047", "NOSTROMO by Joseph Conrad" }, { "048", "THE RAINBOW by D.H.Lawrence" }, { "049", "WOMEN IN LOVE by D.H.Lawrence" }, { "050", "TROPIC OF CANCER by Henry Miller " }, { "051", "  " }, { "052", "  " }, { "053" }, { "054" }, { "055" }, { "056" }, { "057" }, { "058" }, { "059" }, { "060" }, { "061" }, { "062" }, { "063" }, { "064" }, { "065" }, { "066" }, { "067" }, { "068" }, { "069" }, { "070" }, { "071" }, { "072" }, { "073" }, { "074" }, { "075" }, { "076" }, { "077" }, { "078" }, { "079" }, { "080" } };
	printf("\nPress any key to continue....\n");
	_getch();
	for (;;)
	{
		printf("\n****Welcome to THE FICTION LIBRARY****\nPlease chose an option.\n");
		printf("\n|1|  See list of books & their status. ");
		printf("\n|2|  Issue a book. ");
		printf("\n|3|  Deposit an issued book. ");
		ch1 = _getch();
		switch (ch1)
		{
		case '1':
			system("cls");
			printf("\nPress any key to return to the main menu...\n\n");
			printf("Status\t\tReg#\tName\\Auther Name\n");
			for (int i = 0; i < l; i++)
			{
				printf("\n");
				printf("%s", func1(booknum[i]));
				printf("\t");
				for (int j = 0; j < 2; j++)
				{
					printf("%s", books[i][j]);
					printf("\t");
				}
				k++;
			}
			k = 0;
			_getch();
			system("cls");
			break;
		case '2':
			funcbor(books, booknum, l, m);
			system("cls");
			break;
		case '3':
			funcret(books, booknum, l, m);
			system("cls");
			break;
		default:
			system("cls");
			printf("\nInvalid Entry");
			break;
		}
	}
	return 0;
}
