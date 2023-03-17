#include <iostream>
using namespace std;

int main() {
  // cout << "Hello world!" << endl;
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int nRows=3,mCols=3;

//   for(int i=0;i<nRows;i++){
//     for(int j=0;j<mCols;j++)
//       cin>>arr[i][j];
//   }

   for(int c=0;c<mCols;c++)
   {
       if(c&1){
        //odd wala column
           for(int r=nRows-1;r>=0;r--)
            cout<<arr[r][c]<<" ";
           }
       else
            //even wala
            for(int r=0;r<nRows;r++)
                cout<<arr[r][c]<<" ";

      cout<<endl;
    
   }
  return 0;
}