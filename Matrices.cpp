// Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Macías Gutiérrez Angel Adair
//Contacto: adair_macias@outlook.com
// 16/10/2020

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int a = 5;
    const int b = 5;
    const int c = 5;

    int A[a][b] = {};

    array<array<int, b>, a> B = {};
    srand((int)time(0)); // Mi semilla

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            A[i][j] = (rand() % 9) + 1;
            B[i][j] = (rand() % 9) + 1;
        }
    }

    cout << "Matriz A" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Matriz B" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }

    void sumaMatriz(int A[a][b], int B[a][b]); {
        int C[a][b];

        cout << "La suma de las matrices A + B es: " << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                C[i][j] = A[i][j] + B[i][j];
                cout << C[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void restaMatriz(int A[a][b], int B[a][b]); {
        int D[a][b];

        cout << "La resta de las matrices A - B es: " << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                D[i][j] = A[i][j] - B[i][j];
                cout << D[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void divMatriz(int A[a][b], int B[a][b]); {
        int E[a][b];

        cout << "La division de las matrices A / B es: " << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                E[i][j] = A[i][j] / B[i][j];
                cout << E[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void multMatriz(int A[a][b], int B[a][b]); {
        int D[a][b];

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                D[i][j] = 0;
            }
        }

        cout << "La multiplicacion de las matrices A * B es: " << endl;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                for (int z = 0; z < c; z++) {
                    D[i][j] += A[i][z] * B[z][j];
                    
                }
                cout << D[i][j] << "  ";
            }
            cout << endl;
        }
    }

    return 0;
    }
 


