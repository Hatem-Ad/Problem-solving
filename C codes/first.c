#include <stdio.h>
int main()
{ 
  int a=0 , b=0;
  for (int i = 0; i < 10; i++)
  {
  	
  	if (i%2==0)
  	{
  		a++;
  		printf("i = %d\n",i);
  		printf("a = %d\n",a);
  		printf("b = %d\n",b);
  		printf("********************\n");
  	}
  	else
  	{
  		b++;
  		printf("i = %d\n",i);
  		printf("a = %d\n",a);
  		printf("b = %d\n",b);
  		printf("********************\n");
  	}
  }
  printf("A = %d\n",a);
  printf("B = %d",b);
}
