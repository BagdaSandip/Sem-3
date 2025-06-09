#include <stdio.h>
void main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter number of seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);
}