#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, negativos;
    
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    
    int mat[n][n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    
    cout << endl << "DIAGONAL PRINCIPAL: " << endl;
    for (int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
        for (int j = 0; j < n; j++) {
            }
    }
    
    negativos = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                negativos++;
            }
            }
    }
    
    cout << endl << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;
    
    return 0;
}
