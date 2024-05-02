void sort_array(int size, int a[]) {
    int temp, i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}



void sort_even_odd(int n, int a[]) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp = a[i];
            for (j = i; j > 0 && a[j - 1] % 2 != 0; j--) {
                a[j] = a[j - 1];
            }
            a[j] = temp;
        }
    }
}



int find_max_array(int size, int a[]) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}



int is_two_same(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1;
            }
        }
    }
    return 0;
}



void change_max_min(int size, int a[]) {
    int max_index = 0, min_index = 0;
    int max = a[0], min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }
    int temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;
}



int count_positive_above_avg(int matrix[5][5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += matrix[i][i];
    }
    int avg = sum / 5;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > avg) {
                count++;
            }
        }
    }
    return count;
}



#include <stdio.h>

void print_board_color(char letter, char digit) {
    if ((letter - 'A' + digit - '1') % 2 == 0) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }
}

int main() {
    char letter, digit;
    scanf("%c%c", &letter, &digit);
    print_board_color(letter, digit);
    return 0;
}
