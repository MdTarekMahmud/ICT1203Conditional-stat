#include<stdio.h>
int main()
{
    int id,unit_csm;
    char name[50];
    float charge_p_unit,pri_bill,surcharge,net_charge;
    top:
    printf("\nEnter your id,name & number of Unit consumed :\n");
    scanf("%d %s %d",&id,&name,&unit_csm);

    printf("Customer IDNO: %d\n",id);
    printf("Customer Name: %s\n",name);
    printf("Unit Consumed: %d\n",unit_csm);
//condition level -1
    if(unit_csm>=0 && unit_csm<200)
    {
       charge_p_unit =1.20;
       pri_bill =(float)unit_csm*charge_p_unit;
       printf("Amount Charges @Rs. %.2f per unit : %.2f\n",charge_p_unit,pri_bill);

       if(pri_bill>400.00)
            {
                surcharge = (pri_bill*15)/100;
                printf("Surcharge Amount : %.2f\n",surcharge);
          
            }
        else
            {
                printf("Surcharge Amount : 0.00\n");

            }

        net_charge = surcharge + pri_bill;
        if(net_charge>=1 && net_charge<101)
            {
                printf("Net Amount Paid By the Customer : 100(minimum charge.)\n");
            }
        else if(net_charge>100)
            {
                printf("Net Amount Paid By the Customer : %.2f\n",net_charge);
            }
    }
//condition level -1

    else if(unit_csm>=200 && unit_csm<400)
    {
        charge_p_unit=1.50;
        pri_bill =(float)unit_csm*charge_p_unit;

        printf("Amount Charges @Rs. %.2f per unit : %.2f\n",charge_p_unit,pri_bill);
        if(pri_bill>400.00)
            {
                surcharge = (pri_bill*15)/100;
                printf("Surcharge Amount : %.2f\n",surcharge);
            }
        else
            {
                printf("Surcharge Amount : 0.00\n");
            }

        net_charge = surcharge + pri_bill;
        if(net_charge>=1 && net_charge<101)
            {
                printf("Net Amount Paid By the Customer : 100(minimum charge.)\n");
            }
        else if(net_charge>100)
            {
                printf("Net Amount Paid By the Customer : %.2f\n",net_charge);
            }


    }
    //condition level -1
     else if(unit_csm>=400 && unit_csm<600)
    {
        charge_p_unit=1.80;
        pri_bill =(float)unit_csm*charge_p_unit;

        printf("Amount Charges @Rs. %.2f per unit : %.2f\n",charge_p_unit,pri_bill);
        if(pri_bill>400.00)
            {
                surcharge = (pri_bill*15)/100;
                printf("Surcharge Amount : %.2f\n",surcharge);
            }
        else
        {
            printf("Surcharge Amount : 0.00\n");
        }

        net_charge = surcharge + pri_bill;
        if(net_charge>=1 && net_charge<101)
            {
                printf("Net Amount Paid By the Customer : 100(minimum charge.)\n");
            }
        else if(net_charge>100)
            {
                printf("Net Amount Paid By the Customer : %.2f\n",net_charge);
            }
    }
     
     //condition level -1
     else if(unit_csm>=600)
    {
        charge_p_unit=2.00;
        pri_bill =(float)unit_csm*charge_p_unit;

        printf("Amount Charges @Rs. %.2f per unit : %.2f\n",charge_p_unit,pri_bill);
        if(pri_bill>400.00)
            {
                surcharge = (pri_bill*15)/100;
                printf("Surcharge Amount : %.2f\n",surcharge);
            }
        else
            {
                printf("Surcharge Amount : 0.00\n");
            }

        net_charge = surcharge + pri_bill;
        if(net_charge>=1 && net_charge<101)
            {
                printf("Net Amount Paid By the Customer : 100(minimum charge.)\n");
            }
        else if(net_charge>100)
            {
                printf("Net Amount Paid By the Customer : %.2f\n",net_charge);
            }
    }

    goto top;

    return 0;
}