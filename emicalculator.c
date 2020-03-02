#include <math.h>
#include <stdio.h>
// Function to calculate EMI
float calculate_EMI(float p, float r, float t){
   float emi;
   r = r / (12 * 100); // one month interest
   t = t * 12; // one month period
   emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
   return (emi);
}
int main(){
   float principal, rate, time, emi;
   principal = 2000;
   rate = 5;
   time = 4;
   emi = calculate_EMI(principal, rate, time);
   printf("\nMonthly EMI is= %f\n", emi);
   return 0;
}
