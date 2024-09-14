#include <stdio.h>

int main()
{
  /*for(int i=10; i>=1; i = i-1) {
   printf("%d \n", i);
   }*/
  /*for(float i=1.0; i<=5.0; i++) {
      printf("%f \n", i);
  }*/
  /*for(char ch='a'; ch<='z'; ch++) {
   printf("%c\n", ch);
   }*/

  /*int i=1;
  while(i<=5) {
      printf("Hello world\n");
      i++;
  }*/

  /*(for(int i=1; i<=10; i++) {
   printf("%d\n", i);
  }*/

  /*int i = 3;
  do {
    printf("%d \n", i);
    i++;
  }while(i<=50);*/

  /*int n;
  for(int i=1; i<=10; i++) {
    printf("%d\n", n*i);
  }*/
  // not complete

  /*for(int i=1; i<=5; i++) { break loop
    if(i == 3) {
      break;
    }
    printf("%d \n", i);
  }
  printf("end");*/

  /*int i;

  for (i = 0; i < 10; i++) { break loop
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }*/

  /*for (int i = 1; i <= 5; i++) //continue loop
  {
    if (i == 4)
    {
      continue;
    }
    printf("%d\n", i);
  }*/

  /*for(int i=5; i<=50; i++) {
   if(i % 2 !=0){
     printf("%d\n", i);
   }
  }*/

 int sum = 0;
 for(int i=5; i<=50; i++) {
  sum += i;
 }

 printf("sum is %d", sum);

  return 0;
}