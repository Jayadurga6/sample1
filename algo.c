#include<stdio.h>
void main()
{
    int p[6],i,j,temp,t1,t2,c1,c2,n;
    int p1[6],p2[6];
    printf("enter the n processors time: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&p[i]);	
      }
	printf(" processors process time: ");		
	  for(i=0;i<n;i++)
       	{
		
	 printf("%d  ",p[i]);
	}
	 for(i=0;i<n;i++)
	   {
	     for(j=0;j<n;j++)
				
               {
		  if(p[i]>p[j])
		{
		    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                  }
              }
       }
       p1[0]=p[0];
       t1=p[0];
       c1=1;
       p2[0]=p[1];
       t2=p[1];
       c2=1;
          for(i=2;i<n;i++)
            {
              if(t1<t2)
               {
                  p1[c1]=p[i];
                  c1++;
                  t1=t1+p[i];
                }
            else
            {
            p2[c2]=p[i];
            c2++;
            t2=t2+p[i];
          }
      }
       printf(" processor 1: ");
       for(i=0;i<c1;i++)
      {
      printf("%d  ",p1[i]);
       }
        printf("processor 1 execution time: %d",t1);
       for(i=0;i<c2;i++)
     {
       printf("%d  ",p2[i]);
      } 
     printf("processor 2 execution time: %d",t2);
     printf("total time for execution: ");
        if(t1>t2)
          printf("%d  " ,t1);
        else
           printf("%d  ",t2);
}


