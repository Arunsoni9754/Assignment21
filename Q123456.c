#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[30];
    int salary; 
};
struct Employee input()
{struct Employee e;
    scanf("%d",&e.id);
    scanf("\n");
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("\n");
    scanf("%d",&e.salary);
    return e;
}
void display(struct Employee e)
{
    printf("\n%d\n%s\n%d",e.id,e.name,e.salary);
}
int maxsalary(struct Employee e[],int n)
{
    int max=e[0].salary,j=0;
    for(int i=1;i<n;i++)
{
if(e[i].salary>max)
{
    max=e[i].salary;
    j=i;
}
}
return j;
}
void sort(struct Employee e[],int size)
{
    for(int i=0;i<size;i++)
    {   
        for(int j=i+1;j<size;j++)
        {
        if((e[i].salary,e[j].salary))
        {
            struct Employee x=e[i];
            e[i]=e[j];
           e[j]=x;
        }
        }
    }
}
void sorta(struct Employee e[],int size)
{ char s[80];
    for(int i=0;i<size;i++)
    {
        for(int j=i+i;j<size-1;j++)
        {
            int r=strcmp(e[i].name,e[i+1].name);
            if(r>0)
            {
                strcpy(s,e[i].name);
                strcpy(e[i].name,e[i+1].name);
                strcpy(e[i+1].name,s);
            }
        }
    }
}
int main()
{
struct Employee E[10];
int sl,n;
printf("Enter the numbre of employees ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
E[i]=input();
}
sort(E,n);
printf("The sorted employees according to their salaries are \n");
for(int i=0;i<n;i++)
{
display(E[i]);
}
sorta(E,n);
for(int i=0;i<n;i++)
{
display(E[i]);
}
sl=maxsalary(E,n);
printf("\n%s has highest salary ",E[sl].name);
}