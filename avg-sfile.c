#include <stdio.h>

int avg( int x, int y, int z )
{
  int sum = x + y + z;
  return sum / 2;
}

int main()
{
  int a = 10;
  int b = 20;
  int c = 34;
  int d = avg( a, b, c );
  printf( "average of %d, %d and %d is %d\n", a, b, c, d );
  return  0;
}