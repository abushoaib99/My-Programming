#include<stdio.h>
//আিম যিদ 􀄶তামােক দশ হাজার টাকা ঋণ িদই 35% সুেদ এবং টাকাটা পাঁচ বছর সমেয়র মেধ􀆎 􀄶তামােক সুেদ-আসেল পিরেশাধ করেত
//বিল, তাহেল পাঁচ বছের 􀄶মাট কত টাকা 􀄶তামার িদেত হেব এবং 􀆢িত মােস কত টাকা িদেত হেব? ঋণটা যিদ জ􀆱ল িকছু না হয়, তাহেল 􀄶তামার
//􀄶মাট পিরেশাধ করেত হেব 10000 + 10000 * 35 / 100 টাকা
int main()

{
    float loan_amount, interest_rate, number_of_years, total_amount,
    monthly_amount;
    printf("Enter the loan amount: ");
    scanf("%f", &loan_amount);
    printf("\nEnter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("\nNumber of years: ");
    scanf("%f", &number_of_years);
    total_amount = loan_amount + (loan_amount * interest_rate) / 100.00;
    monthly_amount = total_amount / (number_of_years * 12);
    printf("\nTotal amount: %0.2f\n", total_amount);
    printf("Monthly amount: %0.2f\n", monthly_amount);
    return 0;
}
