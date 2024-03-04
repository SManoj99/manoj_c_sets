#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char *string1[100],*string2[100];
    input_two_strings(&string1,&string2);
     result=stringcompare(&string1,&string2);
    output(&string1,&string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("enter the string1 value:\n");
    scanf("%s",string1);
    printf("enter the string2 value:\n");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{ 
    int i;
    for (i=0;string1[i]!='\0' && string2[i]!='\0';i++)
    {
        if(string1[i] != string2[i])
        {
            return 1;
        }
    }
}
void output(char *string1, char *string2, int result)
{
    if(result==1)
    {
        printf("%s is not equal to %s",string1,string2);
    }
    else
    {
        printf("%s is equal to %s",string1,string2);
    }
    
}