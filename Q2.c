//Write The program for finding largest of three numbers in all three methods

//Using ternary

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("Enter the third number : ");
    scanf("%d",&c);

    max = (a>b)? (a>c?a:c) : (b>c?b:c);

    printf("The greatest number is %d",max);

    return 0;
}

//using else if


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("Enter the third number : ");
    scanf("%d",&c);

if(a>=b && a>=c)
{
printf("%d is the greatest number",a);
}

else if(b>=a && b>=c)
{
printf("%d is the greatest number",b);
}

else
{
printf("%d is the greatest number",c);
}

return 0;

}


// using nested if


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("Enter the third number : ");
    scanf("%d",&c);

   if(a>b)
   {
    if(a>c) printf("%d is the greatest number",a);
    else printf("%d is the greatest number",c);
   }
   else
   {
     if(b>c) printf("%d is the greatest number",b);
    else printf("%d is the greatest number",c);
   }

return 0;

}