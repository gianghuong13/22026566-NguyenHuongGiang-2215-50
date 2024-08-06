int** transpose(int** matrix, int nRows, int nCols) {
    int** matrixT = new int*[nCols];
    for (int i = 0; i < nCols; i++) {
        matrixT[i] = new int[nRows];
    }
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            matrixT[j][i] = matrix[i][j];
        }
    }
    return matrixT;
}

