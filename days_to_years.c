#include <stdio.h>
int main() {
    int days, years, weeks, remaining days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining days = (days % 365) % 7;
    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, remaining_days);
    return 0;
}
