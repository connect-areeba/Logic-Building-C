#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];
    int m = 10;

    storeTable(tables, 0, m, 2);   // store table of 2 in row 0
    storeTable(tables, 1, m, 3);   // store table of 3 in row 1

    // print table of 2
    for (int i = 0; i < m; i++) {
        printf("%d ", tables[0][i]);
    }
    printf("\n");

    // print table of 3
    for (int i = 0; i < m; i++) {
        printf("%d ", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int arr[][10], int n, int m, int number) {
    for (int i = 0; i < m; i++) {
        arr[n][i] = number * (i + 1);
    }
}
