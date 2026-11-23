#include <stdio.h>

#define MAX 100000

int Top = -1;
int StackX[MAX];
int StackY[MAX];

void Push(int X, int Y){
    if (Top == MAX - 1){
        return;
    }

    Top++;
    StackX[Top] = X;
    StackY[Top] = Y;
}

int PopX(){
    if (Top == -1){
        return -1;
    }

    return StackX[Top];
}

int PopY(){
    if (Top == -1){
        return -1;
    }

    return StackY[Top--];
}

int** floodFill(int** image, int imageSize, int* imageColSize,
                int sr, int sc, int color,
                int* returnSize, int** returnColumnSizes) {

    int Dx[4] = {0, 0, 1, -1};
    int Dy[4] = {1, -1, 0, 0};

    int Check = image[sr][sc];

    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    if (Check == color){
        return image;
    }

    Top = -1;

    Push(sr, sc);
    image[sr][sc] = color;

    while (Top >= 0){

        int X = PopX();
        int Y = PopY();

        for (int i = 0; i < 4; i++){

            int NewX = X + Dx[i];
            int NewY = Y + Dy[i];

            if (NewX < 0 || NewX >= imageSize ||
                NewY < 0 || NewY >= imageColSize[NewX]){
                continue;
            }

            if (image[NewX][NewY] == Check){

                image[NewX][NewY] = color;

                Push(NewX, NewY);
            }
        }
    }

    return image;
}

//Runtime: 0ms - Beats 100.00%
//Memory 13.62MB - Beats 100.00%