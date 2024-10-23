/*WAP to get students PCM marks from the user and find the average. Use conditional
operator to print if the student is eligible for admission. Eligibility criteria is 50% in
PCM.*/
#include <stdio.h>
int main()
{int p,c,m,avg;
printf("Enter the score of physics:\n");
scanf("%d", &p);
printf("Enter the score of Chemistry:\n");
scanf("%d", &c);
printf("Enter the score of Maths:\n");
scanf("%d", &m);
avg=(p+c+m)/3;
printf("PCM Average:%d \n" , avg);
(avg>=50)?printf("You are eligible."):printf("You are not eligible.");
return 0;}
/*Enter the score of physics:
60
Enter the score of Chemistry:
70
Enter the score of Maths:
80
PCM Average:70
You are eligible.*/
