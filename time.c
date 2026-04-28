#include <stdio.h>

int main(void)
{
int movie, hours, endtime, starttime;

printf("Enter the movie (in min):\n");
scanf("%d", &movie);
//find hours;

printf("Enter start time:\n");
scanf("%d", &starttime);
//print empty line
printf("\n");

// Calculations
 hours = (movie % 60);
 endtime = starttime + hours;
//print time in hours

printf("Runtime (in hours):\n");

// Results
printf("Runtime: %d\n", hours);
printf("Endtime: %d\n", endtime);

}
