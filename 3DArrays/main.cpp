#include <iostream>

#define MAX_ROWS (5)
#define MAX_COLS (2)

using namespace std;

void show3dArray(int arr[MAX_ROWS][MAX_COLS]);

int main()
{
    int multiArray[5][2] = {
                              {34,7},
                              {120,80},
                              {-960,41},
                              {-324,80},
                              {-500,100}
                           };

    show3dArray(multiArray);
    return 0;
}

void show3dArray(int arr[][2]) {
    for(int i=0;i<5;i++) {
        for(int j=0;j<2;j++) {
            cout << arr[i][j];
        }
    }
}
