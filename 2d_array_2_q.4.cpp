#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout<<"enter n : ";
  cin>>n;
   int arr[n][n];
   int minr=0,maxr=n-1,minc=0,maxc=n-1;
   int a=1;
   while(minr<=maxr && minc<=maxc){
    for(int i=minc;i<=maxc;i++){
        arr[minr][i]  = a;
        a++;
    }
    minr++;

     for(int i=minr;i<=maxr;i++){
        arr[i][maxc]  = a;
        a++;
    }
    maxc--;

     for(int i=maxc;i>=minc;i--){
        arr[maxr][i]  = a;
        a++;
    }
    maxr--;

     for(int i=maxr;i>=minr;i--){
        arr[i][minc]  = a;
        a++;
    }
    minc++;
   }
   //output
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}