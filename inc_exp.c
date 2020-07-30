    #include <stdio.h>
	
	//simple program to calculate income and expenditure
	
    typedef struct Revenue {
	float inv;
	float vol;
	float pos;
	float corp;            //I call the  variables for revenue
	float cha;
    } Revenue;

    typedef struct Expense {
	float sal;
	float wag;
	float purc;                //I call varables for expenses
	float pro;
	float com;
	float expbi;
    } Expense;

    typedef struct year {
	int yrs;
    } year;




    int main() {

	Revenue rev;

	Expense exp;

	year yr;

        FILE *incp;

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

	printf("Type the value for each expenses spent, if none type 0.");
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

	printf("This is the INCOME and EXPENDITURE generated in the year %d " ,

		yr.yrs);



	float com_rev1=(rev.inv + rev.vol + rev.pos + rev.cha + rev.corp);


	float com_exp1=(exp.sal + exp.wag + exp.purc + exp.pro + exp.com + exp.expbi);


	float com_inc =  (com_rev1 - com_exp1);

	printf("\n");
	printf("INCOME : $%f"  , com_inc);
	printf("\n");
	printf("EXPENDITURE : $%f" , com_exp1);
	printf("\n");


    }
