#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char *string1,*string2;
    int result;
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string\n");
    scanf("%s",&string1);
    printf("Enter the second string\n");
    scanf("%s",&string2);
}
int stringcompare(char *string1, char *string2)
{
    int i,result;
    for(i=0;string1[i] || string2[i];i++)
    {
        if(string1[i]>string2[i])
        {
            result=1;
        }
        else
        {
            result=2;
        }
    }
    return result;
}
void output(char *string1, char *string2, int result)
{
    printf("This %s string is latger than %s string and the result is %d\n",string1,string2,result);
}