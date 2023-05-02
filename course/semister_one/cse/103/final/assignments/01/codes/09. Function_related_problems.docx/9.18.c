#include <stdio.h>
#include <stdlib.h>

void InputMatrix(int **matrix, int rows, int cols);
void ShowMatrix(int **matrix, int rows, int cols);
void ScalarMultiply(int **matrix, int rows, int cols, int scalar);;

int main() {
    int rows = 3, cols = 5, scalar;

    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
    }

    InputMatrix(matrix, rows, cols);
    scanf("%d", &scalar);

    printf("Original:\n");
    ShowMatrix(matrix, rows, cols);

    ScalarMultiply(matrix, rows, cols, scalar);

    printf("Multiplied by %d:\n", scalar);
    ShowMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

void InputMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int **matrix, int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}
