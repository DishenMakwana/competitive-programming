#include<stdio.h>


void main()
{
     //1) quite_big - 1000000000 2000
  //2) also_big - 505000000 10000
    int maxSlice,type;
    scanf("%d",&maxSlice);
    scanf("%d",&type);
    int a[type],index[type],indexptr=0,sum=0;

    FILE *fp;
    FILE *fp1;
    int k=0;
    if (fp = fopen("d_quite_big.txt", "r"))
    {
        while (fscanf(fp, "%d", &a[k]) != EOF)
        {
            ++k;
        }
        fclose(fp);
    }

    for(int i=type-1 ; i>=0 ; i--)
    {
        sum += a[i];
        index[indexptr++] = i;
        if(sum > maxSlice)
        {
            sum -= a[i];
            index[--indexptr] = -1;
        }
    }
        printf("%d",indexptr);
        printf("\n");
        for(int i=indexptr-1 ; i>=0 ; i-- )
            printf("%d ",index[i]);

    fp1 = fopen("quite_big_output.txt","w");
        for(long int i=indexptr-1; i>=0 ; i--)
        {
            printf("%d ",index[i]);
            int tmp=index[i];
            fprintf(fp1,"%d ",tmp);
        }
    fclose(fp1);
}
