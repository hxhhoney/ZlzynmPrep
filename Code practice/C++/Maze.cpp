//
//  main.cpp
//  Maze
//
//  Created by Xiaohe Huang on 10/25/15.
//  Copyright © 2015 Xiaohe Huang. All rights reserved.
//

#include <iostream>
#include<list>
class coordinate
{
public:
    int x;
    int y;
    coordinate(int i,int j)
    {x=i;y=j;}
};
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int matrix[4][5]={{1,0,0,0,0},{1,1,1,1,1},{1,0,0,0,0},{0,0,9,0,0}};
    
    int n=sizeof(matrix)/sizeof(matrix[0]);
    int m=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int dx[4]={-1,0,0,1};
    int dy[4]={0,1,-1,0};
    
    //if(matrix==NULL||n==0||m==0) return 0;
    if(matrix[0][0]==9) return 1;
    matrix[0][0]=-1;
    list<coordinate> queue;
    queue.push_back(*new coordinate(0,0));
    while(!queue.empty())
    {
        coordinate cur=queue.front();
        for(int i=0;i<4;i++)
        {
            coordinate next={cur.x+dx[i],cur.y+dy[i]};
            if(next.x>=0&&next.x<n&&next.y>=0&&next.y<m)
            {
                if (matrix[next.x][next.y]==9)
                {printf("%d\n",1);break;}
                else if (matrix[next.x][next.y]==1)
                {
                    queue.push_back(next);
                    matrix[next.x][next.y]=-1;
                }
            }

        }
        queue.pop_front();
    }
    printf("%d\n",0);
    return 0;
}
