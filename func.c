#define N 4
#define M 4

int sum_array(int arr[N][M]) {
    int sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}