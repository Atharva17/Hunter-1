#include <stdio.h>
int main(void)
{
     int i,j,k=0,a[10],b[10],n,count=0,t;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
        if(a[i]==a[j])
          {
          	count++;
          b[k]=a[i];
          k++;
          }
          
       if(count==0)
       printf("unique");
       else
       {
       	for(i=0;i<count;i++)
       	   {
       	   	for(j=i+1;j<count;j++) 
       	if(b[i]>b[j])
       	{
       		t=b[i];
       		b[i]=b[j];
       		b[j]=t;
       	}
       	printf("%d\t",b[i]);
       }
       }
     return 0;
}
