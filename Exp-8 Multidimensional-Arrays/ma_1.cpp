#include<iostream>
using namespace std;

int main(){

    int m, n;

    cout<<"Enter the number of rows: ";
    cin>>m;

    cout<<"Enter the number of columns: ";
    cin>>n;

    int mat[m][n];

    cout<<"Enter elements of Matrix: "<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Entered Matrix is:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;

}


/*==========OUTPUTS==========
Enter the number of rows: 3
Enter the number of columns: 3
Enter elements of Matrix: 
1
2
3
4
5
6
7
8
9
Entered Matrix is:
1	2	3	
4	5	6	
7	8	9
*/