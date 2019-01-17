#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h>
int deposit(int *);
void balance(int);
int withdraw(int *);
void goingBack();
int main()
{
	for (;;){
		int pinCode, choice;
		long long accountNo;
		printf("\n\n                        WELCOME TO YOUR OWN PERSONAL ATM ");
		printf("\n\nEnter your PIN code: ");
		scanf("%d", &pinCode);
		if (pinCode == 4721)
		{
			for (;;){
				static int ab2 = 10000;
				accountNo = 9548301293406842;
				printf("\n\n-------------------------------Welcome Hashim!-------------------------------");
				printf("\nAccount no: %lli", accountNo);
				printf("\nYou can withdraw or enter more funds in your account\n");
				printf("\n1) Check Balance\n2) Withdraw\n3) Deposit\n4) Return\nOption: ");
				scanf("%d", &choice);

				if (choice == 1)
					balance(ab2);
				else if (choice == 2)
					withdraw(&ab2);
				else if (choice == 3)
					deposit(&ab2);
				else if (choice == 4){
					goingBack();
					break;
				}
				else
					printf("Invalid Entry");
			}
		}
		if (pinCode == 1234)
		{
			for (;;){
				accountNo = 6216570011833745;
				static int ab3 = 20000;
				printf("\n\n-------------------------------Welcome Nabeel!-------------------------------");
				printf("\nAccount no: %lli", accountNo);
				printf("\nYou can withdraw or enter more funds in your account\n");
				printf("\n1) Check Balance\n2) Withdraw\n3) Deposit\n4) Return\nOption: ");
				scanf("%d", &choice);

				if (choice == 1)
					balance(ab3);
				else if (choice == 2)
					withdraw(&ab3);
				else if (choice == 3)
					deposit(&ab3);
				else if (choice == 4){
					goingBack();
					break;
				}
				else
					printf("Invalid Entry");
			}
		}
		if (pinCode == 7894)
		{
			for (;;){
				accountNo = 7263012894235681;
				static int ab1 = 30000;
				printf("\n\n-------------------------------Welcome Ali!-------------------------------");
				printf("\nAccount no: %lli", accountNo);
				printf("\nYou can withdraw or enter more funds in your account\n");
				printf("\n1) Check Balance\n2) Withdraw\n3) Deposit\n4) Return\nOption: ");
				scanf("%d", &choice);

				if (choice == 1)
					balance(ab1);
				else if (choice == 2)
					withdraw(&ab1);
				else if (choice == 3)
					deposit(&ab1);
				else if (choice == 4){
					goingBack();
					break;
				}
				else
					printf("Invalid Entry");
			}
		}
		if (pinCode == 3333)
		{
			for (;;){
				accountNo = 5832912408713519;
				static int ab5 = 40000;
				printf("\n\n-------------------------------Welcome Ehsan!-------------------------------");
				printf("\nAccount no: %lli", accountNo);
				printf("\nYou can withdraw or enter more funds in your account\n");
				printf("\n1) Check Balance\n2) Withdraw\n3) Deposit\n4) Return\nOption: ");
				scanf("%d", &choice);

				if (choice == 1)
					balance(ab5);
				else if (choice == 2)
					withdraw(&ab5);
				else if (choice == 3)
					deposit(&ab5);
				else if (choice == 4){
					goingBack();
					break;
				}
				else
					printf("Invalid Entry");
			}
		}
		if (pinCode == 5555)
		{
			for (;;){
				accountNo = 7923642091234654;
				static int ab = 50000;
				printf("\n\n-------------------------------Welcome Usman!-------------------------------");
				printf("\nAccount no: %lli", accountNo);
				printf("\nYou can withdraw or enter more funds in your account\n");
				printf("\n1) Check Balance\n2) Withdraw\n3) Deposit\n4) Return\nOption: ");
				scanf("%d", &choice);

				if (choice == 1)
					balance(ab);
				else if (choice == 2)
					withdraw(&ab);
				else if (choice == 3)
					deposit(&ab);
				else if (choice == 4){
					goingBack();
					break;
				}
				else
					printf("Invalid Entry");
			}
		}
		else if (pinCode != 1234 && pinCode != 4721 && pinCode != 7894 && pinCode != 3333 && pinCode != 5555)
			printf("Invalid Pin code");
	}
}

void balance(int abl)
{
	printf("Balance: %d", abl);
}

int withdraw(int *ab1)
{
	int withdraw;
	printf("How much money do you want to withdraw? ");
	scanf("%d", &withdraw);
	*ab1 -= withdraw;
	printf("Your remaining balance is %d", *ab1);
	printf("\nThankyou for using this Atm!");
	return *ab1;
}

int deposit(int *a)
{
	int deposit;
	printf("How much money do you want to deposit? ");
	scanf("%d", &deposit);
	*a += deposit;
	printf("Your remaining balance is %d", *a);
	printf("\nThankyou for using this Atm!");
	return 0;
}
void goingBack()
{
	printf("Thankyou for using this Atm!");
	_getch();
	system("cls");
}
