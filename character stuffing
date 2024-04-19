#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],k[150],add,check;
    int i,j=0;
    printf("enter a data:\n");
    scanf("%s",s);
    printf("enter character to insert:\n");
    scanf(" %c",&add);
    printf("enter character of criteria (after) to stuff:\n");
    scanf(" %c",&check);
    for(i=0;i<strlen(s);i++)
    {
        k[j++]=s[i];
        if(s[i]==check)
        k[j++]=add;
    }
    k[j]='\0';
    printf("data after stuffing:%s\n",k);
    return 0;
}
