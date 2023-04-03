#include <stdio.h>
#include<string.h>
struct students
{
int roll,chem_marks,maths_marks,physics_marks;
char name[30];
float percentage;
};
struct students input()
{
    struct students s;
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    scanf("%d %d %d %d",&s.roll,&s.chem_marks,&s.maths_marks,&s.physics_marks);
    return s;
}
void display(struct students s)
{ s.percentage=((s.chem_marks+s.maths_marks+s.physics_marks)/3);
    printf("roll no is %d\n name is %s\n chem marks is %d\n maths marks is %d\n physics marks is %d\n percentage is %f\n",s.roll,s.name,s.chem_marks,s.maths_marks,s.physics_marks,s.percentage);
}
int main()
{
    int i;       
    int n;
    printf("Enter the  number of students ");
    scanf("%d",&n);
        struct students s[n];

    for(i=0;i<n;i++)
    {    printf("Enter the name, roll no,chem marks,maths marks,physics marks of %d student\n",i+1);

        s[i]=input();
    }
    for(i=0;i<n;i++)
    {    printf("The name, roll no,chem marks,maths marks,physics marks of %d student\n",i+1);

    display(s[i]);
    }
}