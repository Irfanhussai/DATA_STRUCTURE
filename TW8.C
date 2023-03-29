/*
PRIMS ALGORITHM*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,n,cost[10][10];
printf("Enter the number of nodes v=");
scanf("%d",&n);
printf("Enter the Matrix ");
for(i=1;i<n;i++){
    for(j=1;j<n;j++){
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)//The edge which has been visited should  not br visited again
            cost[i][j]=999;//therefore set the value of that edge infinity;
    }
}
prims(n,cost);
}
void prims(int n,int cost[10][10]){
    int i,j,u,v,minCost=0,visited[10],ne=1;//ne=number of edges
    for(i=1;i<n;i++){
        visited[i]=0;
    }
    printf("The edges consider for MST are\n");
    visited[1]=1;
   while(ne<n){
    for(i=1;minCost=999;i<n;i++){
        for(j=1;j<n;j++){
            if(cost[i][j]<minCost){
                if(visited[i]=0)
                    continue;
                else{
                    minCost=cost[i][j];
                    u=i;
                    v=j;
                }

            }
        }
    }
    if(visited[u]==0||visited[v]==0){
        printf("%d edge (%d%d)=%d",ne++,u,v,minCost);
    }
   }
}
