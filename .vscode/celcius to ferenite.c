#include<stdio.h>
float convert_temp(float celcius);
int main()
{
 float  far=convert_temp(100);
printf(" in celcius s %f",far);
return 0;
}
float convert_temp(float celcius)
{
  float far=celcius*(9.0/5.0)+32;
  return far;
}