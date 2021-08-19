#include<stdio.h>

void close(int n)
{
    switch(n)
    {
        //case 0:
        case 1:printf(")");         break;
        case 2:printf("))");        break;
        case 3:printf(")))");       break;
        case 4:printf("))))");      break;
        case 5:printf(")))))");     break;
        case 6:printf("))))))");    break;
        case 7:printf(")))))))");   break;
        case 8:printf("))))))))");  break;
        case 9:printf(")))))))))"); break;
    }
}

void open(int n)
{
    switch(n)
    {
        //case 0:
        case 1:printf("(");         break;
        case 2:printf("((");        break;
        case 3:printf("(((");       break;
        case 4:printf("((((");      break;
        case 5:printf("(((((");     break;
        case 6:printf("((((((");    break;
        case 7:printf("(((((((");   break;
        case 8:printf("((((((((");  break;
        case 9:printf("((((((((("); break;
    }
}

int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1 ; t<=test ; t++)
    {
        char s[100];
        scanf("%s",s);
        int len = strlen(s);
        printf("Case #%d: ",t);
        int ans[100],ptr=0;
        int f = (int)(s[0]-'0');
        open(f);
        printf("%c",s[0]);
        for(int i=1 ; i<len ; i++)
        {
            if(s[i-1]>s[i])
            {
                int dif = (int)(s[i-1]-s[i]);
                close(dif);
                printf("%c",s[i]);
            }
            else if(s[i-1]<s[i])
            {
                int diff = (int)(s[i]-s[i-1]);
                open(diff);
                printf("%c",s[i]);
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        int cls = (int)(s[len-1]-'0');
        close(cls);
        printf("\n");
    }
    return 0;
}