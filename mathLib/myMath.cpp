#include"myMath.hpp"
#include <iostream>
#include <Eigen/Dense>

float add(float a, float b)
{
  return a+b;
}


float times(float a, float b)
{
  return a*b;
}

using Eigen::MatrixXd;
int testEigen()
{
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
    return 0;
}

void vectorAdd(float *a,float *b,float *c,int length)
{
  for(int i = 0;i<length;i++)
  {
    c[i] = a[i]+b[i];
  }
}




