#include <stdio.h>
#include <stdlib.h>

int main()
{

#define r2min 1
#define r2max 100
#define count 100

  double r2array[count];
  double rstep = (r2max - r2min) / (count - 1);
  int i;

  r2array[0] = r2min;

  double iarray[count];

  char v1[100];
  char r2[100];
  double v_1;
  double r_2;

  double vout[count];

  printf("Please enter an integer value for V1 between 1 and 100: ");
  fgets(v1, 100, stdin);

  printf("Please enter an integer value for R1 between 1 and 100: ");
  fgets(r2, 100, stdin);

  v_1 = atof(v1);
  r_2 = atof(r2);

  printf("R2 is: ");
  for (i =1;i < count; i = i+1){
    r2array[i] = r2array[i-1] + rstep;
 }

  double power[count];

  int i2;
  for (i2 = 0; i2 < (count); i2 = i2 +1){
    iarray[i2] = v_1 / (r_2 + r2array[i2]);
    printf("R2: %f,", r2array[i2]);
    printf("I: %f,", iarray[i2]);
    vout[i2] = iarray[i2] * r2array[i2];
      printf("Vout: % f,", vout[i2]);
      power[i2] = iarray[i2] * vout[i2];
      printf("P: %f,", power[i2]);
  }


  return 0;
}
