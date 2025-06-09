#include <stdio.h>
void main() {
    int days, years, weeks, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    remaining_days = days % 365;
    weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;
    printf("%d days is equivalent to %d year(s), %d week(s), and %d day(s).\n",days, years, weeks, remaining_days);
}