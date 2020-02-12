#include<stdio.h>

int main()
{
    int n,k;
    char s[100];
    scanf("%s%n",s,&n);
    scanf("%d",&k);
    if(s[k-1] == s[n-1])
        printf("yes");
    else
        printf("no");
    return 0;
}
