#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char dc(int x){
	if (x == 0)
		return '.';
	else if (x == 1)
		return 'x';
}
int possf(int s[])
{
	int poss = 0;
	int disnum = 0;
	for (int i = 1; i < 9; i++)
	{
		if (s[i]>poss){
			poss = s[i];
			disnum = i;
		}
	}
	return disnum;
}
void medf(int x)
{
	system("cls");
	if (x == 1)
	{
		printf("\nYou may possible have Acute Myocardial infarction");
		printf("\n\nSolution­­s:-\n");
		printf("\n\nAspirin­­­.300mg stat\nthen 75mg bd.\nTab Angised sublingual\ntab mepressor 50mg tds\ntab capoten 25mg tds");
	}
	else if (x == 2)
	{
		printf("\nYou may possible have acute liver failure ");
		printf("\nSolutions:­­-\n");
		printf("\n\nflagyl 200mg tds\nsyp duphalac 2tsf tds\nIV mannitol 100ml stat\nInj Vit K IM for 3 days\ninj Zantac 50mg Iv bd\ndextrose infusion\nsyp hepamerz 1tsf tds\nFFPS if bleeding");
	}
	else if (x == 3)
	{
		printf("\nYou may possible have Tonsils");
		printf("\nSolutions:­­-\n");
		printf("\n\nTab Augmentin 1G BD for 5 days\ntab panadol 1 tds\nbenzol throat spray\nbenzerine gargles");
	}
	else if (x == 4)
	{
		printf("\nYou may possible have Sinusitus");
		printf("\nSolutions:­­-\n");
		printf("\n\ntab erythromycin 1 tab bd\nfor 5 days\ntab panadol 1 tab tds\nxylometazoline nasal spray\nsteam inhalation tds");
	}
	else if (x == 5)
	{
		printf("\nYou may possible have peptic ulcer disease");
		printf("\nSolutions:­­-\n");
		printf("\n\ncap Risek 40mg 1od\ntab Clarithro 500mg od\ntab flagyl 400mg tds\nall for 14 days");
	}
	else if (x == 6)
	{
		printf("\nYou may possible have Urinary tract infection");
		printf("\nSolutions:­­-\n");
		printf("\n\ntab leflox 500mg bd\nsyp Citral ka 2tsf tds in a glass of water\ntab voren 1 tab tds");
	}
	else if (x == 7)
	{
		printf("\nYou may possible have asthma");
		printf("\nSolutions:­­-\n");
		printf("\n\ntab Moxiget 400mg od 5 days\ntab deltacortil 5mg 5 days\nInhaler salmicort 2 puffs bd\ninhaler salbo 2 puffs tds\ntab theograde 1/2 Tab 10 days");
	}
	else if (x == 8)
	{
		printf("\nYou may possible have Respiratory tract infection");
		printf("\nSolutions:­­-\n");
		printf("\n\ntab klaritek 500mg bd\ntab Rigix 10mg 1 Tab at night\nsyp reltus expectorant 2tsf tds\ntab panadol 1 tab tds");
	}
}
void questionf(int s[])
{
	printf("\nAnswer in yes(Y) and no(N)");
	if (s[1] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Do you get pain in chest at night?");
		a = tolower(_getch());
		if (a == 'y')
			s[1]++;
		char a2 = ' ';
		printf("\nQuestion#Do you have pain in limbs also?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[1]++;
		char a3 = ' ';
		printf("\nQuestion#Taking panadol cures the pain?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[1]++;
	}
	if (s[2] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Is your urine is abnormally colored?");
		a = tolower(_getch());
		if (a == 'y')
			s[2]++;
		char a2 = ' ';
		printf("\nQuestion#Are you taking acetone?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[2]++;
		char a3 = ' ';
		printf("\nQuestion#Do you consume alchohol?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[2]++;
	}
	if (s[3] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Do you have pain in throat?");
		a = tolower(_getch());
		if (a == 'y')
			s[3]++;
		char a2 = ' ';
		printf("\nQuestion#Smoker?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[3]++;
		char a3 = ' ';
		printf("\nQuestion#Do you have problem drinking hot or very cold water?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[3]++;
	}
	if (s[4] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Have problem breathing from nose?");
		a = tolower(_getch());
		if (a == 'y')
			s[4]++;
		char a2 = ' ';
		printf("\nQuestion#Have sleeping issues?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[4]++;
		char a3 = ' ';
		printf("\nQuestion#Irritation in nose?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[4]++;
	}
	if (s[5] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Do you have severe stomach pain?");
		a = tolower(_getch());
		if (a == 'y')
			s[5]++;
		char a2 = ' ';
		printf("\nQuestion#Do you have blood in vomit?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[5]++;
		char a3 = ' ';
		printf("\nQuestion#Do you have pale color skin usually?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[5]++;
	}
	if (s[6] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Do you urinate more than 8 times a day?");
		a = tolower(_getch());
		if (a == 'y')
			s[6]++;
		char a2 = ' ';
		printf("\nQuestion#Do you have blood in urine?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[6]++;
		char a3 = ' ';
		printf("\nQuestion#Do you have very light coloured urine?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[6]++;
	}
	if (s[7] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Have you problem sleeping when heater is turned on?");
		a = tolower(_getch());
		if (a == 'y')
			s[7]++;
		char a2 = ' ';
		printf("\nQuestion#Do you have problem breathing in dark?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[7]++;
		char a3 = ' ';
		printf("\nQuestion#Do you have problem walking frequently ?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[7]++;
	}
	if (s[8] >= 3)
	{
		char a = ' ';
		printf("\nQuestion#Are you having fever more than 102 degree?");
		a = tolower(_getch());
		if (a == 'y')
			s[8]++;
		char a2 = ' ';
		printf("\nQuestion#Does your cough has blood?");
		a2 = tolower(_getch());
		if (a2 == 'y')
			s[8]++;
		char a3 = ' ';
		printf("\nQuestion#Do you have loss of appetite ?");
		a3 = tolower(_getch());
		if (a3 == 'y')
			s[8]++;
	}

}
int main(){
	for (;;){
		int dof = 0;
		static int dis[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		static int s[18];
		for (int i = 0; i < 18; i++){
			s[i] = 0;
		}
		printf("\nPress any key to continue with the medical softawre....");
		_getch();
		system("cls");
		for (;;){
			printf("*******Welco­­me to 'medical assistance software'******\n");
			printf("[a] (%c) Headache\n", dc(s[1]));
			printf("[b] (%c) Fever \n", dc(s[2]));
			printf("[c] (%c) Jaundice\n", dc(s[3]));
			printf("[d] (%c) vomiting \n", dc(s[4]));
			printf("[e] (%c) Bleeding \n", dc(s[5]));
			printf("[f] (%c) Epigastric pain\n", dc(s[6]));
			printf("[g] (%c) Retrosternal pain \n", dc(s[7]));
			printf("[h] (%c) Diarrhea \n", dc(s[8]));
			printf("[i] (%c) Fatigue \n", dc(s[9]));
			printf("[j] (%c) Muscle ache\n", dc(s[10]));
			printf("[k] (%c) Flu \n", dc(s[11]));
			printf("[l] (%c) Sore throat\n", dc(s[12]));
			printf("[m] (%c) Indigestion \n", dc(s[13]));
			printf("[n] (%c) Shortness of breath \n", dc(s[14]));
			printf("[o] (%c) Cough \n", dc(s[15]));
			printf("[p] (%c) Frequent urine \n", dc(s[16]));
			printf("[q] (%c) Dysuria \n", dc(s[17]));
			printf("[x] (%c) Reset \n", dc(s[0]));
			printf("[space bar] (%c) Proceed \n", dc(s[0]));
			puts("What you want to chose?");
			char ch = tolower(_getch());
			if (ch == 'a')
				s[1] = 1;
			else if (ch == 'b')
				s[2] = 1;
			else if (ch == 'c')
				s[3] = 1;
			else if (ch == 'd')
				s[4] = 1;
			else if (ch == 'e')
				s[5] = 1;
			else if (ch == 'f')
				s[6] = 1;
			else if (ch == 'g')
				s[7] = 1;
			else if (ch == 'h')
				s[8] = 1;
			else if (ch == 'i')
				s[9] = 1;
			else if (ch == 'j')
				s[10] = 1;
			else if (ch == 'k')
				s[11] = 1;
			else if (ch == 'l')
				s[12] = 1;
			else if (ch == 'm')
				s[13] = 1;
			else if (ch == 'n')
				s[14] = 1;
			else if (ch == 'o')
				s[15] = 1;
			else if (ch == 'p')
				s[16] = 1;
			else if (ch == 'q')
				s[17] = 1;
			else if (ch == 'x')
				break;
			else if (ch == ' ')
			{
				if (s[1])
				{
					dis[4]++;
					dis[4]++;
				}
				if (s[2])
				{
					dis[3] = dis[3] + 2;
					dis[8] = dis[8] + 2;
				}
				if (s[3])
				{
					dis[2] = dis[2] + 2;
				}
				if (s[4])
				{
					dis[4] = dis[4] + 2;
				}
				if (s[5])
				{
					dis[2] = dis[2] + 2;
				}
				if (s[6])
				{
					dis[5] = dis[5] + 2;
				}
				if (s[7])
				{
					dis[1] = dis[1] + 2;
				}
				if (s[8])
				{
					dis[5] = dis[5] + 2;
				}
				if (s[9])
				{
					dis[7] = dis[7] + 2;
				}
				if (s[10])
				{
					dis[7] = dis[7] + 2;
				}
				if (s[11])
				{
					dis[4] = dis[4] + 2;
				}
				if (s[12])
				{
					dis[3] = dis[3] + 2;
				}
				if (s[13])
				{
					dis[2] = dis[2] + 2;
				}
				if (s[14])
				{
					dis[7] = dis[7] + 2;
				}
				if (s[15])
				{
					dis[8] = dis[8] + 2;
					dis[7] = dis[7] + 2;
				}
				if (s[16])
				{
					dis[6] = dis[6] + 2;
				}
				if (s[17])
				{
					dis[6] = dis[6] + 1;
				}
				for (int i = 1; i < 9; i++)
				{
					if (dis[i] > 2)
						dof = 1;
				}
				if (dof == 0)
				{
					printf("\n\n You don't seem to have any disease \n because you have less symptoms\npress anyy key to exit");
					_getch();
					exit(0);
				}
				system("cls");
				printf("****Question­­session*****");
				_getch();
				questionf(dis);
				int poss = possf(dis);
				medf(poss);
				printf("\n\nNote:-\n­­od=once a day\nbd=two times a day\ntds=thrice a day\n\n\nPrescriptio­­n has been printed\nshow this to any medical store to get these \nIf condition doesn't cures contact a doctor\n\nThankyou for using the software...\npress any key to exit");
				_getch();
				exit(0);
			}
			system("cls");
		}
		system("cls");
	}
	return 0;
}
