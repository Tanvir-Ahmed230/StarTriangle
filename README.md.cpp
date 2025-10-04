# StarTriangle
Pattern of the ascending order of stars in the shape of a right angled triangle
#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter row number : ";
    cin>>row;
    for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
