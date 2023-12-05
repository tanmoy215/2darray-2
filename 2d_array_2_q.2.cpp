#include<iostream>
using namespace std;
int main(){
    int n=3;
    int m=3;
    int arr[n][m]={{1,2,3},{4,5,6},{7,8,9}};
      //reverse
      int k=0;
      while(k<n){
        for(int i=0,j=m-1;i<j;i++,j--){
            int temp = arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
        }
        k++;
      }
      
      //transpose operation
      for(int i=0;i<n;i++){
          for(int j=i;j<m;j++){
              int temp=arr[i][j];
              arr[i][j]=arr[j][i];
              arr[j][i]=temp;
          }
      }
      //output
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
}