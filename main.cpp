#include"output.hpp"
#include "myMath.hpp"
#include<stdio.h>
#include <iostream>

int main()
{
  testEigen();

  float a[3] = {1.2,2.2,4.5};
  float b[3] = {0.2,0.2,6.5};
  float c[3] = {0.0};

  vectorAdd(a,b,c,3);
  printf("a =[%f,%f,%f]\n",a[0],a[1],a[2]);
  printf("b =[%f,%f,%f]\n",b[0],b[1],b[2]);
  printf("c =[%f,%f,%f]\n",c[0],c[1],c[2]);

  return 0;
}
