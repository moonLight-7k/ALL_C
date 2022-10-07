#include <stdio.h>
int main()
{
  int w,x, y, z;

  printf("Enter three numbers to add\n");

  scanf("%d%d%d", &x, &y,&w);

  z = w + x + y ;

  printf("Sum of the numbers = %d\n", z);

  return 0;
}