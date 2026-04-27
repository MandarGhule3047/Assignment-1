#include <stdio.h>

// Function to add two matrices
void addMatrices(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10], i, j;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nAddition of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint(int a[10][10], int r, int c) {
    int i, j, k, min, col;

    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k = 0; k < r; k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle point is: %d\n", min);
            return;
        }
    }

    printf("\nNo saddle point found\n");
}

// Function to find inverse of 2x2 matrix
void inverseMatrix(int a[2][2]) {
    int det;

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse not possible\n");
        return;
    }

    printf("\nInverse matrix:\n");
    printf("%f %f\n", (float)a[1][1]/det, (float)(-a[0][1])/det);
    printf("%f %f\n", (float)(-a[1][0])/det, (float)a[0][0]/det);
}

// Function to check magic square
void magicSquare(int a[10][10], int n) {
    int i, j, sum = 0, temp;

    for(j = 0; j < n; j++)
        sum += a[0][j];

    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a magic square\n");
            return;
        }
    }

    for(j = 0; j < n; j++) {
        temp = 0;
        for(i = 0; i < n; i++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a magic square\n");
            return;
        }
    }

    int diag1 = 0, diag2 = 0;
    for(i = 0; i < n; i++) {
        diag1 += a[i][i];
        diag2 += a[i][n-i-1];
    }

    if(diag1 == sum && diag2 == sum)
        printf("\nIt is a magic square\n");
    else
        printf("\nNot a magic square\n");
}

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrices(a, b, r, c);
    saddlePoint(a, r, c);

    // Inverse (only 2x2)
    if(r == 2 && c == 2) {
        int temp[2][2];
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                temp[i][j] = a[i][j];
            }
        }
        inverseMatrix(temp);
    } else {
        printf("\nInverse only for 2x2 matrix\n");
    }

    // Magic square check (only if square)
    if(r == c) {
        magicSquare(a, r);
    } else {
        printf("\nMagic square requires square matrix\n");
    }

    return 0;
}