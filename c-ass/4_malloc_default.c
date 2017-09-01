#include<stdio.h>
#include<malloc.h>

int main(){
int **p;
int i,j;

p=malloc(sizeof(int *)*5);
for(i=0;i<5;i++)
p[i]=malloc(sizeof(int)*10);

for( i=0;i<5;i++){
for( j=0;j<10;j++)
//printf("p[%d][%d]::%d<-->",i,j,p[i][j]);
printf("%d	",p[i][j]);
printf("\n");

//cout<<"p["<<i<<"]["<<j<<"]::"<<p[i][j];
//cout<<endl;
}
printf("done..!!\n");
}

