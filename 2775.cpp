#include <iostream>

using namespace std;

int main()
{
    int T,k,n;
    cin >> T;
    for(int i=0; i < T; i++)
    {
        int arr[15][15] = {};
        cin >> k >> n;
        
        for(int i=0; i<15; i++)
        {
            arr[0][i] = i+1;
        }
        for(int i=1; i<15; i++)
        {
            for(int j=0; j<15; j++)
            {
               for(int k=0; k<=j; k++)
                {
                   arr[i][j] += arr[i-1][k];
                }
            }
        }
        cout << arr[k][n-1] << "\n";
    }
}