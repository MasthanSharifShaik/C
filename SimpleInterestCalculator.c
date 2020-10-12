//Program to calculate Simple Interest


#include <stdio.h>

int main()
{
  float PrincipalAmount,RateOfInterest,Time,SimpleInterest;
  printf("Enter PrincipalAmount,Rate of Interest and Time(in years) respectively!\n");
  scanf ("%f%f%f",&PrincipalAmount,&RateOfInterest,&Time);
  SimpleInterest=(PrincipalAmount*RateOfInterest*Time)/100;
  printf ("Simple Interest is: %f\n",SimpleInterest);
  
  return 0;
}