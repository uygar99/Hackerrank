#include <iostream>
using namespace std;
void rotatematrix(int m, int n, int mat[][10]) 
{ 
    int row = 0, col = 0; 
    int prev, curr; 
    while (row < m && col < n) 
    { 
  
        if (row + 1 == m || col + 1 == n) 
            break; 
        prev = mat[m-2][col]; 
        for (int i = col; i < n; i++) 
        { 
            curr = mat[m-1][i]; 
            mat[m-1][i] = prev; 
            prev = curr; 
        } 
        m--; 
        for (int i = m-1; i >= row; i--) 
        { 
            curr = mat[i][n-1]; 
            mat[i][n-1] = prev; 
            prev = curr; 
        } 
        n--; 
         if (col < n) 
        { 
            for (int i = n-1; i >= row; i--) 
            { 
                curr = mat[row][i]; 
                mat[row][i] = prev; 
                prev = curr; 
            } 
        } 
        row++; 
        
        if (row < m) 
        { 
            for (int i = row; i < m; i++) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
    }     
} 
int main()
{
	int size1,size2,rotatecount;
	cin>>size1>>size2>>rotatecount;
	int arr[size1][10];
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			cin>>arr[i][j];
		}
	}
	int cycle;
	if(size1>size2) cycle=size2;
	else cycle=size1;
	for(int i=0;i<rotatecount;i++)
	{
			rotatematrix(size1,size2,arr);
	}

	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
	
}
