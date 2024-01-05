
//Write a program to display the details of the employees whose salary is less than given salary


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
   
    float $;
    printf("Enter the given salary : ");
    scanf("%f",&$);

    int id[n];
    char name[n][25];
    float salary[n];

    printf("Enter the details of the employees\n") ;
 
    for(int i=0;i<n;i++)
    {
        printf("Enter the id of %d employee : ",i+1);
        scanf("%d",&id[i]);
    }
   
    printf("\n");


    for(int j=0;j<n;j++)
    {
        printf("Enter the name of the %d employee :",j+1);
        scanf("%s",name[j]);
    }

    printf("\n");

    for(int k=0;k<n;k++)
    {
        printf("Enter the salary of %d employee : ",k+1);
        scanf("%f",&salary[k]);
    }

    printf("The details of employees with salary less than %f is/are : ",$);

    for(int p=0;p<n;p++)
    {
        if(salary[p]<$)
        {
          printf("%d  %s  %f\n",id[p],name[p],salary[p]);
        }
    }
    return 0;
}





