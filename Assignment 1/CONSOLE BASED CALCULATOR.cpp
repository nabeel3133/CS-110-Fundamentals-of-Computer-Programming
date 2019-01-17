/* CONSOLE BASED CALCULATOR */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

int main()

{
	printf("                             *****CALCULATOR*****     \n \n");
	/* Initializing Variables in the below two lines */
	int operation,x;
	float firstNumber,secondNumber,result;
	
	/* Assigning Operations in the below four lines */
	printf("Please enter the number of the operation that you would like to execute!\n \nAddition(1)\tSubtraction(2)\tMultiplication(3)\nDivision(4)\t");
	printf("Square(5)\tCube(6)\nSquareroot(7)\tCuberoot(8)\tInverse(9)\nFactorial(10)\tLog(11)\t        Exponential(12)\nPower(13)\tPower of 10(14)");
	printf("\tPercentage(15)\nSinx(16)\tCosx(17)\tTanx(18)\nCosecx(19)\tSecx(20)\tCotx(21)\nArcSinx(22)\tArcCosx(23)\tArcTanx(24)\nSinhx(25)\tCoshx(26)");
	printf("\tTanhx(27)");
	
	printf("\n\nOption:"); //Option which user want//
	scanf("%d" ,&operation); //Option to be input by the user//
	
	if (operation==0) // Invalid Choice //
	printf("\nInvalid option!\n");
	
	else if(operation==1){
		printf("\nYou chose to do Addition \n");
		printf("\nEnter your first number: ");
		scanf("%f",&firstNumber);
		printf("\nEnter your second number: ");
		scanf("%f",&secondNumber);
		result= firstNumber+secondNumber;
		printf("\nResult: %f added to %f is %f",firstNumber,secondNumber,result);
		return 0;}
	
	else if(operation==2){
			printf("\nYou chose to do Subtraction \n");
		printf("\nEnter your first number: ");
		scanf("%f",&firstNumber);
		printf("\nEnter your second number: ");
		scanf("%f",&secondNumber);
		result= firstNumber-secondNumber;
		printf("\nResult: %f subtracted by %f is %f",firstNumber,secondNumber,result);
	return 0;}
	
	else if(operation==3){
		printf("\nYou chose to do Multiplication \n");
		printf("\nEnter your first number: ");
		scanf("%f",&firstNumber);
		printf("\nEnter your second number: ");
		scanf("%f",&secondNumber);
		result= firstNumber*secondNumber;
		printf("\nResult: %f multiplied by %f is %f",firstNumber,secondNumber,result);
	return 0;}
	
	else if(operation==4){
			printf("\nYou chose to do Division \n");
		printf("\nEnter your first number: ");
		scanf("%f",&firstNumber);
		printf("\nEnter your second number: ");
		scanf("%f",&secondNumber);
		result= firstNumber/secondNumber;
		printf("\nResult: %f divided by %f is %f",firstNumber,secondNumber,result);
	return 0;}
		
	else if(operation==5){
		printf("\nYou chose to get the square of a number \n");
		printf("\nEnter the number you want the square of: \n");
		scanf("%f",&firstNumber);
		result= firstNumber*firstNumber;
		printf("\nResult: The Square of %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==6){
		printf("\nYou chose to get the cube of a number \n");
		printf("\nEnter the number you want the cube of: ");
		scanf("%f",&firstNumber);
		result= firstNumber*firstNumber*firstNumber;
		printf("\nResult: The Cube of %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==7){
		printf("\nYou chose to get the squareroot of a number \n");
		printf("\nEnter the number you want the squareroot of: ");
		scanf("%f",&firstNumber);
		result= sqrt(firstNumber);
		printf("\nResult: The squareroot of %.2f is %2f",firstNumber,result);
	return 0;}

    else if(operation==8){
	printf("\nYou chose to get the cuberoot of a number \n");
	printf("\nEnter the number you want the cuberoot of: ");
	scanf("%f",&firstNumber);
	result= cbrt(firstNumber);
	printf("\nResult: The cuberoot of %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==9){
	printf("\nYou chose to get the inverse of a number \n");
	printf("\nEnter the number you want the inverse of: ");
	scanf("%f",&firstNumber);
	result= 1/firstNumber;
	printf("\nResult: The inverse of %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==10){
	printf("\nYou chose to get the factorial of a number \n");
    printf("\nEnter the number you want the facorial of: ");
    scanf("%f", &firstNumber);
    result = 1;
    for(x = 1; x<= firstNumber; x++) {
    result = result *x;}
    printf("\nResult: %.f! is %.f",firstNumber,result);
    return 0;}
		
	else if(operation==11){
	printf("\nYou chose to get the Log of any number \n");
	printf("\nEnter the number which you want the Log of: ");
	scanf("%f",&firstNumber);
	result= log10(firstNumber);
	printf("Result: log10(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==12){
	printf("\nYou chose to get the exponential function \n");
	printf("\nEnter the power which you want the exponential of: ");
	scanf("%f",&firstNumber);
	result=exp(firstNumber);
	printf("e to the power %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==13){
	printf("\nYou chose to get the power of a number \n");
	printf("\nEnter the number you want the power of: ");
	scanf("%f",&firstNumber);
	printf("Enter the power: ");
	scanf("%f",&secondNumber);
	result= pow(firstNumber,secondNumber);
	printf("\nResult: %f to the power %f is %f",firstNumber,secondNumber,result);
	return 0;}
	
	else if(operation==14){
	printf("\nYou chose to get the power of 10 \n");
	printf("\nEnter the power which you want of 10: ");
	scanf("%f",&firstNumber);
	result= pow(10,firstNumber);
	printf("\nResult: 10 to the power %f is %f",firstNumber,result);
	return 0;}
	
	else if(operation==15){
	printf("\nYou chose to get the percentage of a number \n");
	printf("\nEnter the number you want the percentage of: ");
	scanf("%f",&firstNumber);
	printf("What percentage do you want of %f?",firstNumber);
	scanf("%f",&secondNumber);
	result= (firstNumber*secondNumber)/100;
	printf("\nResult: %fpercent of %f is %f",firstNumber,secondNumber,result);
	return 0;}
    
	else if(operation==16){
	printf("\nYou chose to get the Sin of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=sin(firstNumber*PI/180);
	printf("Result: Sin(%f)= %f",firstNumber,result);
	return 0;}
		
	else if(operation==17){
	printf("\nYou chose to get the Cos of any number \n");
	printf("\nEnter the number which you want the Cos of: ");
	scanf("%f",&firstNumber);
	result=cos ( firstNumber * PI / 180);
	printf("Result: cos(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==18){
	printf("\nYou chose to get the Tan of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=tan(firstNumber*PI/180);
	printf("Result: tan(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==19){
	printf("\nYou chose to get the Cosec of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=1/sin(firstNumber*PI/180);
	printf("Result: cosec(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==20){
	printf("\nYou chose to get the Sec of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=1/cos(firstNumber*PI/180);
	printf("Result: sec(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==21){
	printf("\nYou chose to get the Cot of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=1/tan(firstNumber*PI/180);
	printf("Result: cot(%f)= %f",firstNumber,result);
	return 0;}

    else if(operation==22){
	printf("\nYou chose to get the arcsin of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=asin(firstNumber)*180/PI;
	printf("Result: arcsin(%f)= %f",firstNumber,result);
	return 0;}
		
	else if(operation==23){
	printf("\nYou chose to get the arccos of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=acos(firstNumber)*180/PI;
	printf("Result: arccos(%f)= %f",firstNumber,result);
	return 0;}
			
	else if(operation==24){
	printf("\nYou chose to get the arctan of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=atan(firstNumber)*180/PI;
	printf("Result: arctan(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==25){
	printf("\nYou chose to get the sinh of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=sinh(firstNumber);
	printf("Result: sinh(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==26){
	printf("\nYou chose to get the cosh of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=sinh(firstNumber);
	printf("Result: cosh(%f)= %f",firstNumber,result);
	return 0;}
	
	else if(operation==27){
	printf("\nYou chose to get the tanh of x \n");
	printf("\nEnter x: ");
	scanf("%f",&firstNumber);
	result=tanh(firstNumber);
	printf("Result: tanh(%f)= %f",firstNumber,result);
	return 0;}
	
	else
	printf("\nInvalid Option!");
	
	return 0;
}
