#include<stdio.h>
#include<limits.h>
void main()
{
    int A[100][100],row,col,c=0,i,j,k;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            int maxRow=0,maxCol=0,minRow=INT_MAX,minCol=INT_MAX;
            for(k=0;k<row;k++)
            {
                if(A[k][j]>=maxCol)maxCol=A[k][j];
            }
            for(k=0;k<col;k++)
            {
                if(A[i][k]>=maxRow)maxRow=A[i][k];
            }
            for(k=0;k<row;k++)
            {
                if(A[k][j]<=minCol)minCol=A[k][j];
            }
            for(k=0;k<col;k++)
            {
                if(A[i][k]<=minRow)minRow=A[i][k];
            }
            if((A[i][j] == maxCol && A[i][j] == minRow)||(A[i][j] == minCol && A[i][j] == maxRow)){
                c = 1;
                printf("(%d, %d) = %d\n",i,j,A[i][j]);
            }
        }
    }
    if(c == 0){
        printf("None");
    }
}
