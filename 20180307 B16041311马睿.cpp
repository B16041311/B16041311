#include<iostream>
using namespace std;
int main()
{
    int count=1;
	int arr[4][4];
	for(int i=0;i<4;i++){
		for (int j = i; j < 4; j++)
		{
			arr[j][i] = count ;
            arr[i][j] = arr[j][i];
			count++;
		}

	}




	for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
            cout<<arr[k][l]<<' ';
        }
        cout<<endl;
	}
    return 0;
}
