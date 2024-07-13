#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[25];
    int count=0,flag;
    printf("Enter string: ");
    gets(a);
  if((a[0]>='a'&& a[0]<='z') ||(a[0]>='A' && a[0]<='Z') ||(a[0] == '_'))
    {
        for(int i=1;i<=strlen(a);i++)
        {
            if((a[i]>='a'&& a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]>='0'&& a[i]<='9')||(a[i]=='_'))
            {
                count++;
            }
        }

        if(count==strlen(a))

        {
            flag=0;
        }
    }
    else
    {
        flag=1;
    }

    if(flag==1)
        printf ("\n Not valid identifier");
    else
        printf("\n Valid identifier");
    return 0;

}
