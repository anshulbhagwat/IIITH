#include<stdio.h>
#include<string.h>
int main()
{
    int n=200000;
    int mk;
    char ch[n+1];
    scanf("%s",ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='\0')
        {
            mk=i+1;
            break;
        }
    }
    char c[mk-1];
    char s1[mk];
    char s2[mk];
    for(int i=0;i<mk;i++)
    {
        s1[i]='\0';
        s2[i]='\0';
    }
    for(int i=0;i<mk-1;i++)
        c[i]=ch[i];
    for(int k=0;k<mk-1;k++)
    {
        s1[k]=c[k];
        s2[k]=c[k];
    }
    for(int j=0;j<n-1;j++)
    {
        char t=c[mk-2];
        for(int i=mk-2;i>=0;i--)
        {
            c[i+1]=c[i];
        }
        c[0]=t;
        for(int i=0;i<mk-1;i++)
        {
            ch[i]=c[i];
        }
        if(strcmp(ch,s1)<0)
        {
            for(int k=0;k<mk-1;k++)
                s1[k]=c[k];
        }
        if(strcmp(ch,s2)>0)
        {
            for(int k=0;k<mk-1;k++)
                s2[k]=c[k];
        }
    }
    for(int i=0;i<mk;i++)
        printf("%c",s1[i]);
    printf("\n");
    for(int i=0;i<mk;i++)
        printf("%c",s2[i]);
}