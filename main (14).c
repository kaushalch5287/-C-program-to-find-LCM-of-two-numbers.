/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, num1, num2, max, lcm=1;
 printf("Enter any two numbers to find LCM: ");
 scanf("%d%d", &num1, &num2);
 max = (num1 > num2) ? num1 : num2;
 i = max;
while(1)
 {
 if(i%num1==0 && i%num2==0)
 {
 lcm = i;
 break;
 }
 i += max;
 }
printf("LCM of %d and %d = %d", num1, num2, lcm);
 return 0;
}