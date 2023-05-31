#include<stdio.h>
#include<math.h>
#include<time.h>
int a[5000][5000];
double nano=1000000000;
int main()
{
    int i,j,n=4000,m=n,Total_out=0,Total_in=0;
    double start,end,time;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            a[i][j]=rand()%2;
        }
    }
    start=clock();
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]==1)
            {
                Total_out++;
            }
        }
    }

    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(a[i][j]==1)
            {
                Total_in++;
            }
        }
    }

    end=clock();
    time=((end-start)/CLOCKS_PER_SEC)*nano;
    printf("%0.0lf nano secend\n",time);

    return 0;
}
