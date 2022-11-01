// bank interest rate program in c program...

#include <stdio.h>

int main() {
    double loan_amount, interest_rate, number_of_year, total_amount, monthly_amount;

    printf("Enter the value of loan amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter the value of interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter the value of number of year: ");
    scanf("%lf", &number_of_year);

    total_amount = loan_amount + loan_amount * interest_rate * number_of_year / 100.00;
    monthly_amount = total_amount / (number_of_year * 12);

    printf("Total amount is: %0.2lf \n", total_amount);
    printf("Monthly amount is: %0.2lf \n", monthly_amount);

return 0;
}
