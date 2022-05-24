#include <QDialog>
#include <limits.h>
#include <iostream>
#include <stdio.h>
#include<stdio.h>
using namespace std;

namespace Ui
{
class ShortestPathWindow;
}

class ShortestPathWindow : public QDialog
{
    Q_OBJECT


public:
    explicit ShortestPathWindow(QWidget *parent = nullptr);
    ~ShortestPathWindow();

private:
    void on_pushButton_clicked();

private:
    Ui::ShortestPathWindow *ui;
};

/*void dijkstra(int G[9][9],int n,int startnode)
{
   int cost[9][9],distance[9],pred[9];
   int visited[9],count,mindistance,nextnode,i,j;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
   if(G[i][j]==0)
      cost[i][j]=9999;
   else
      cost[i][j]=G[i][j];
   for(i=0;i<n;i++)
   {
      distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
   }
   distance[startnode]=0;
   visited[startnode]=1;
   count=1;
   while(count<n-1)
   {
      mindistance=9999;
      for(i=0;i<n;i++)
         if(distance[i]<mindistance&&!visited[i])
         {
         mindistance=distance[i];
         nextnode=i;
         }
      visited[nextnode]=1;
      for(i=0;i<n;i++)
         if(!visited[i])
      if(mindistance+cost[nextnode][i]<distance[i])
      {
         distance[i]=mindistance+cost[nextnode][i];
         pred[i]=nextnode;
      }
      count++;
   }

   for(i=0;i<n;i++)
   if(i!=startnode)
   {
      cout<<"Distance to the hospital"<<"="<<distance[i];
   }
}*/

int miniDist(int distance[], bool Tset[]) // finding minimum distance
{
    int minimum=INT_MAX,ind;

    for(int k=0;k<6;k++)
    {
        if(Tset[k]==false && distance[k]<=minimum)
        {
            minimum=distance[k];
            ind=k;
        }
    }
    return ind;
}

void DijkstraAlgo(int graph[6][6],int src) // adjacency matrix
{
    int distance[6]; // // array to calculate the minimum distance for each node
    bool Tset[6];// boolean array to mark visited and unvisited for each node


    for(int k = 0; k<6; k++)
    {
        distance[k] = INT_MAX;
        Tset[k] = false;
    }

    distance[src] = 0;   // Source vertex distance is set 0

    for(int k = 0; k<6; k++)
    {
        int m=miniDist(distance,Tset);
        Tset[m]=true;
        for(int k = 0; k<6; k++)
        {
            // updating the distance of neighbouring vertex
            if(!Tset[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k])
                distance[k]=distance[m]+graph[m][k];
        }
    }
    cout<<"Vertex\t\tDistance from source vertex"<<endl;
    for(int k = 0; k<6; k++)
    {
        char str=65+k;
        cout<<str<<"\t\t\t"<<distance[k]<<endl;
    }
}
