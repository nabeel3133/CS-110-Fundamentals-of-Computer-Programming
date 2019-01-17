/* Pension Calculator */
#include<stdio.h>
int main()
{
	/* Assigning variables in the below five lines */
	int age,joiningDay,joiningMonth,joiningYear,retirementDay,retirementMonth,retirementYear,service_sincemarriage;
	int marriageDay,marriageMonth,marriageYear,months_sincemarriage,serviceMonth;
	float basicPay,tax_deduction,oldAllowance,houseRent,totalSalary;
    float pension1,pension2,pension3,pension4,totalPension;
	char martial;

	
	printf("                      *******PENSION CALCULATOR******\n\n");
	
	printf("Enter your basic pay before retirement: ");        //Asking for the basic pay of the user before retirement//
	scanf("%f",&basicPay);           //Basic pay to be input by the user//
	printf("Enter day/month/year of joining: ");       //Asking for the day/month/year of joining//
	scanf("%d/%d/%d",&joiningDay,&joiningMonth,&joiningYear);      //input day/month/year of joining to be given by the user//
	printf("Enter day/month/year of retirement: ");   //Asking for the day/month/year of retirement//
	scanf("%d/%d/%d",&retirementDay,&retirementMonth,&retirementYear);     //input day/month/year of retirement to be given by the user//

	serviceMonth=((retirementDay-joiningDay)/30)+(retirementMonth-joiningMonth)+(retirementYear-joiningYear)*12; //Formula to calculate months in service of job//
	printf("\nMonths in service: %d",serviceMonth);              //Calculate months in service of job//
	tax_deduction= basicPay-((basicPay*0.05)+(basicPay*0.07));          //Formula to calculate the tax deduced pay//

	printf("\nMonthly pay after deduction of income tax and provincial tax is: %f",tax_deduction);    //Calculates the tax deduced pay//
	printf("\n\nEnter your age in years: ");  //Asking for the age of the user//
	scanf("%d",&age);          //Age to be input by the user//

	if(age<45){
	printf("No old age allowance for people below 45\n");}
	
	if(age>=45 && age<=55){
		oldAllowance=basicPay*0.1;           //Formula to calculate the old age allowance for people of age in between 45 to 55 years//
		printf("Old age allowance: %f\n",oldAllowance);}   //Calculates old age allowance for people of age in between 45 to 55 years//
		
	if(age>55){
			oldAllowance=tax_deduction*0.15;     //Formula to calculate the old age allowance for people above 55 years of age//
		printf("Old age allowance: %f\n",oldAllowance);}   //Calculates old age allowance for people above 55 years of age//

	printf("\nEnter your martial status(Y/N)\nEnter Y for married and N for unmarried: ");   //Asking for the martial status of user//
	scanf("%s",&martial);           //Martial status to be input by the user//

	if(martial=='Y' || martial=='y'){
	printf("\nEnter day/month/year of marriage: ");          //Asking for the day/month/year of marriage//
	scanf("%d/%d/%d",&marriageDay,&marriageMonth,&marriageYear);       //day/month/year of marriage to be input by the user//
	months_sincemarriage=((retirementDay-marriageDay)/30)+(retirementMonth-marriageMonth)+(retirementYear-marriageYear)*12; //Formula to calculate months since marriage//

    if (serviceMonth>months_sincemarriage){
	service_sincemarriage= months_sincemarriage;             
	printf("\nMonths in service since marriage: %d",service_sincemarriage);}
	
	
    if (serviceMonth<months_sincemarriage){
    service_sincemarriage= serviceMonth;
    printf("\nMonths in service since marriage: %d",service_sincemarriage);}
	
	houseRent=tax_deduction*0.15;       //Formula to calculate the house rent//
	printf("\nHouse rent: %f",houseRent);}       //Calculation of house rent//
	
	else
	printf("\nNo house rent\n");

	totalSalary=tax_deduction+oldAllowance+houseRent; //Formula for the actual salary of the user after deduction of taxes and addition of old age and house allowances//
    
	/* Pension Calculation */
	pension1=(basicPay*2)*serviceMonth;    //Basic Pay is doubled and multiplied with the number of months in service//
	pension2=oldAllowance*3;      //Old age allowance is multiplied with 3//
	pension3=houseRent*service_sincemarriage;   //House rent is multiplied with the number of months in service since marriage//
	pension4=totalSalary*2;      //The actual salary is multiplied with 2//
    totalPension=pension1+pension2+pension3+pension4;  //Adding the above four pensions to calculate the total pension of the user//

	printf("\n\nYour total Pension is: %f",totalPension);      //Calculates the total pension of the user//

	return 0;
}
