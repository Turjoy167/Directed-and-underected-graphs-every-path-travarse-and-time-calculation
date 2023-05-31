#include<stdio.h>
#include<math.h>
#include<time.h>
double nano=pow(10,9);
int main()
{
    static int a[1000][1000];
    int i,j,m=1000,n=1000,v,degree=0,in_degree=0,out_degree=0,Total_out=0,Total_in=0,edge=0,diff=1000,maximum_limit=5000;
    double start,end,time;
    //printf("Enter the number of rows:");
    //scanf("%d",&m);
    //printf("Enter the number of column:");
    //scanf("%d",&n);
    for(v=1000; v<=maximum_limit; v=v+diff)
    {
    start=clock();
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][j]=rand()%2;
            a[i][j]!=a[j][i];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==1)
            {
                degree++;
                if(i==j)
                {
                    degree++;
                }
            }
        }
    }
     for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(a[i][j]==1)
                {
                    edge++;
                }
            }
        }
    end=clock();
    time=((end-start)/CLOCKS_PER_SEC)*nano;
    printf("%0.0lf nano secend\n",time);
    }
    for(i=0; i<n; i++)
    {
        out_degree=0;
        for(j=0; j<m; j++)
        {
            if(a[i][j]==1)
            {
                out_degree=out_degree+1;
                Total_out++;
            }
        }
       // printf("Out degree of %dth row= %d\n",i+1,out_degree);
    }
   // printf("Total out degree = %d\n",Total_out);
    for(j=0; j<m; j++)
    {
        in_degree=0;
        for(i=0; i<n; i++)
        {
            if(a[i][j]==1)
            {
                in_degree=in_degree+1;
                Total_in++;
            }
        }
       // printf("In degree of %dth column = %d\n",j+1,in_degree);
    }
    //printf("Total in degree = %d\n",Total_in);
    //for(i=0; i<m; i++)
   // {
      //  for(j=0; j<n; j++)
       // {
        //    printf("%d ",a[i][j]);
       // }
        //printf("\n");
    //}
   // printf("Total degree=%d",degree);

    return 0;
}
