*if,else-if,else*

#include <stdio.h>

int main()
{
  int a=5,b=6,c=7;

    if (a>b)
    {
      printf("A is Big");
    }
    else if (b>c)
    {
      printf("B is Big");
    }
    
    else
    {
      printf("C is Big");
    }
    

    return 0;
}



*Shorthand Property if-else*

#include <stdio.h>

int main()
{
  int age=18;
  // int age=17;

  (age>=18)? printf("You can drive") : printf("You can not drive");

    return 0;
}

*task -------------*
#include <stdio.h>

int main()
{
  int number;
  
  printf("Enter Number: ");
  scanf("%d",&number);

  if (number>0)
  {
      printf("Number Is Positive");
  }
  else if (number<0)
  {
          printf("Number Is Negative");
  }
  else
  {
          printf("Number Is Zero");
  }
  

    return 0;
}

-----------------------
*odd-even*

#include <stdio.h>

int main()
{
  int number;
  
  printf("Enter Number: ");
  scanf("%d",&number);

  if (number%2==0)
  {
      printf("Number Is Even");
  }
  
  else
  {
          printf("Number Is Odd");
  }
  

    return 0;
}

*switch case----------------------*

#include <stdio.h>

int main()
{
  int number;

  printf("Enter Number 1 to 7: ");
  scanf("%d", &number);

  switch (number)
  {
  case 1:
    printf("Sun\n");
    break;
  case 2:
    printf("Mon\n");
    break;
  case 3:
    printf("tue\n");
    break;
  case 4:
    printf("wen\n");
    break;
  case 5:
    printf("thi\n");
    break;
  case 6:
    printf("fri\n");
    break;
  case 7:
    printf("sat\n");
    break;
  
  default:
    printf("Invalid");
  break;
  }
  return 0;
}

-------------------------------------
*while loop*

#include <stdio.h>

int main()
{
  int number,time;
  
  printf("Enter Number:");
  scanf("%d",&number);
  
  printf("Enter time:");
  scanf("%d",&time);

while (number <= time) {
  printf("%d Hello \n", number);
  number++;
}


  return 0;
}

--------------------------------------
*do-while*

#include <stdio.h>

int main()
{
  int number,time;
  
  printf("Enter Number:");
  scanf("%d",&number);
  
  printf("Enter time:");
  scanf("%d",&time);

do
{
 printf("%d Hello \n", number);
  number++;
} 
while (number <= time);



  return 0;
}

-----------------------------------
*for loop*

#include <stdio.h>

int main()
{
  int number;
  
  printf("Enter Number:");
  scanf("%d",&number);
  

for (int i = 1; i <= number; i++)
{
  printf("%d Hello World! \n",i);
}


  return 0;
}