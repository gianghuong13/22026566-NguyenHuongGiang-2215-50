int** transpose(int** matrix, int nRows, int nCols) {
    int** transpose = new int*[nCols];
    for (int i = 0; i < nCols; i++) {
        transpose[i] = new int[nRows];
    }
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}