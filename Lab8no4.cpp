#include <stdio.h>

int main() {
    int scores[4] = {70, 85, 60, 90};
    int best[3];
    int i, j, maxIdx;

    for (i = 0; i < 3; i++) {
        maxIdx = 0;
        for (j = 1; j < 4; j++)
            if (scores[j] > scores[maxIdx])
                maxIdx = j;
        best[i] = scores[maxIdx];
        scores[maxIdx] = -1;
    }

    for (i = 0; i < 3; i++)
        printf("%d ", best[i]);

    return 0;
}
