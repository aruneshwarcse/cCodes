#include<stdio.h>
#include <stdlib.h>

int main()
{

int n,a[50][50];
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
int count=0;
int rsum[50],csum[50];
for(int i=0;i<n;i++){
    rsum[i]=0;
    csum[i]=0;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        rsum[i]=rsum[i]+a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        csum[i]=csum[i]+a[j][i];
    }
}
for(int i=0;i<n;i++){
    
        if(rsum[i]==csum[i]){
            count++;
        }
}
printf("%d",count);

}
