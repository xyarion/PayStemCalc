#include <stdio.h>

int main(void)
{
char name[5][20];
float Rate[5]; 
float Hours[5];
float Overtime[5];
float Gross[5];
float Tax[5];
float Net[5];
float Base[5];
float OvertimePay[5];
    for(int i = 0; i < 5; i++)
    {
        
        printf("Enter your first name:\n");
        scanf("%s", name[i]);
        printf("Enter your hourly pay rate:\n");
        scanf("%f", &Rate[i]);
            if(Rate[i] == -1)
            {
                break;
            }
        printf("Enter your hours worked:\n");
        scanf("%f", &Hours[i]);
            if(Hours[i] == -1)
            {
                break;
            }
    }

    for(int i = 0; i <5; i++)
    {
        if(Hours[i] > 40)
        {
            Overtime[i] = Hours[i] - 40;
            Gross[i] = (Rate[i] * Hours[i]) + ((Rate[i] * Overtime[i]) * 1.5) - (Rate[i] * Overtime[i]);
            Tax[i] = Gross[i] * 0.2;
            Net[i] = Gross[i] - Tax[i];
            Base[i] = Gross[i] - ((Rate[i] * Overtime[i]) * 1.5);
            OvertimePay[i] = ((Rate[i] * Overtime[i]) * 1.5);
        }
        else
        {
            Gross[i] = Rate[i] * Hours[i];
            Tax[i] = Gross[i] * 0.2;
            Net[i] = Gross[i] - Tax[i];
            Base[i] = Gross[i];
            OvertimePay[i] = 0;
        }
        printf("Pay to: %s\n", name[i]);
        printf("Hourly Rate: %.2f\n", Rate[i]);
        printf("Hours Worked: %.2f\n", Hours[i]);
        printf("Gross Pay: %.2f\n", Gross[i]);
        printf("Base Pay: %.2f\n", Base[i]);
        printf("Overtime Pay: %.2f\n", OvertimePay[i]);
        printf("Taxes Paid: %.2f\n", Tax[i]);
        printf("Net Pay: %.2f\n\n", Net[i]);
    }

}