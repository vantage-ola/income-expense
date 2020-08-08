    #include <stdio.h>
	#include <stdlib.h>

    typedef struct Revenue {
	float inv;
	float vol;
	float pos;
	float corp;
	float cha;
    } Revenue;

    typedef struct Expense {
	float sal;
	float wag;
	float purc;
	float pro;
	float com;
	float expbi;
    } Expense;

    typedef struct year {
	int yrs;
    } year;




    int main() 
{

	Revenue rev;

	Expense exp;

	year yr;

    

	printf("Enter the year for the account your calculating. : ");
	scanf( "%d" , &yr.yrs);

	printf("----------------");

	printf("\n");


	printf("Revenue account for year %ls" , &yr.yrs);

	printf("\n");
	printf("Type the appropriate value for each revenue generated , if none  type '0'");
	printf("\n");



	printf("Investors :$");
	scanf("%f" , &rev.inv);

	printf("Volunteers :$");
	scanf( "%f" , &rev.vol);


	printf("Profit on Services Rendered :$");
	scanf( "%f" ,  &rev.pos);

	printf("Corporate Contributions :$");
	scanf( "%f" , &rev.corp);

	printf("Charity :$");
	scanf("%f" , &rev.cha);


	printf("---------------");
	printf("\n");

	printf("Expenses for the year %d\n" , yr.yrs);

	printf("Type the value for each expenses spent, if none type 0.\n");
	printf("\n");


	printf("Salary :$");
	scanf( "%f" , &exp.sal);

	printf("Wages :$");
	scanf( "%f" , &exp.wag);

	printf("Purchases :$");
	scanf ("%f" , &exp.purc);


	printf("Provision(to cover upcoming liabilities) :$");
	scanf("%f" , &exp.pro);

	printf("Communication fees :$");
	scanf("%f" , &exp.com);

	printf("Electricity bills :$");
	scanf("%f" , &exp.expbi);

	printf("-------------------");
	printf("\n");

	

	float com_rev1=(rev.inv + rev.vol + rev.pos + rev.cha + rev.corp);


	float com_exp1=(exp.sal + exp.wag + exp.purc + exp.pro + exp.com + exp.expbi);


	float com_inc =  (com_rev1 - com_exp1);

	

	FILE * fnp;

	fnp= fopen("income-expense.txt" , "w+");
	
	if (fnp == NULL)
	{
		printf("Error!");
		exit(EXIT_FAILURE);
	}
	fprintf(fnp,"INCOME & EXPENDITURE generated in the year %d\n " ,yr.yrs);
	fputs("---------------------------------------------------------------------\n", fnp);
	
	fputs("\n", fnp);
	fputs(" EXPENDITURES       |AMOUNT($)   			| INCOMES   	|AMOUNT($)  \n", fnp);
	
	fputs("----------------------------------------------------------------------\n", fnp);
	
	fprintf(fnp," Salary             |%.2f       			| Investors 	|%.2f	\n",exp.sal, rev.inv);
	
	fputs("----------------------------------------------------------------------\n", fnp);
	
	fprintf(fnp," Wages              |%.2f       			| Volunteers	|%.2f	\n", exp.wag, rev.vol);
	fputs("----------------------------------------------------------------------\n", fnp);
	
	fprintf(fnp," Purchases          |%.2f       			| Profits   	|%.2f	\n",exp.purc, rev.pos);
	
	fputs("----------------------------------------------------------------------\n", fnp);												
	
	fprintf(fnp," Provision          |%.2f       			| Corporate 	|%.2f	\n",exp.pro, rev.corp);	             	 
	
	fputs("----------------------------------------------------------------------\n", fnp);			
	
	fprintf(fnp," Communication Fees |%.2f       			| Charity		|%.2f	\n",exp.com, rev.cha);
	
	fputs("----------------------------------------------------------------------\n", fnp);
	
	fprintf(fnp," Electricity Bills  |%.2f       			|  NIL      	|NIL	\n",exp.expbi);
	
	fputs("----------------------------------------------------------------------\n", fnp);
	
	fprintf(fnp," TOTAL              |%.2f       			|           	|%.2f   \n", com_inc, com_exp1);

	fclose(fnp);

	printf("Saved info to income-expense.txt \n");
	printf("Check Current Directory to access income-expense.txt.\n");

}	
