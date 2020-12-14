#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mynumbers[2] [3]={
     {4,5,6},
     {9,8,7}
};
 for(int i=0;i<2;i++)
for(int j=0;j<3;j++)

 {
     printf("mynumbers[[%d][%d]=%d\n",i,j,mynumbers[i][j]);
 }


}
