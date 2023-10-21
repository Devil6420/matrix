#include<iostream>
using namespace std;
int main()

{
    int mat[2][2]={{1,2},
                   {3,4}};
    int hat[2][2]={{5,6},
                   {3,4}};               
    int ab[2][2];
    int ba[2][2];
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        cout<<"\t"<<mat[i][j];
        }
        cout<<endl;
    }
    
    cout<<"SUM-"<<endl;
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        cout<<"\t"<<hat[i][j];
        }
        cout<<endl;
    }
   for (int  i=0;i<2;i++)
   {
    for (int j=0;j<2;j++)
    {
        ab[i][j]=mat[i][j]+hat[i][j];
        cout<<"\t"<<ab[i][j];

    }
    cout<<endl;
    cout<<"transpose"<<endl;
   }
     for (int  i=0;i<2;i++)
   {
    for (int j=0;j<2;j++){
        mat[i][j]=ba[j][i];
        cout<<"\t"<<ba[j][i];
    }
    cout<<endl;
   }

}