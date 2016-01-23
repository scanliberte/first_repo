// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdlib.h>

#define START	2
#define END		18
#define ROW		2
#define COUNT	5

int main()
{
	/*int i = 0, j = 0, k = 0, l = 0, cnt = 0;

	for (i = START; i <= END; i+=COUNT) {
		for (l = i; l <= i+COUNT-1; l+=ROW) {
			for (j = 1; j <= 9; j++) {
				for (k = l; k < (l+ROW > END ? END : (l+ROW > i+COUNT ? i+COUNT : l+ROW)); k++) {
					printf("%2dx%2d=%3d\t", k, j, k*j);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}*/

	int num1 = 0;
	int i = 0, j = 0, k = 0, w = 0;
	int avg = 0, avg1 = 0;

	avg = (START + END) / COUNT;
	avg1 = COUNT / ROW;

	if ((START + END) % COUNT > 0) {
		avg += 1;   //3
	}
	if (COUNT%ROW > 0) {
		avg1 += 1;   //2
	}

	for (i = 0; i<avg; i++) {
		for (k = 1; k<10; k++) {
			for (w = START + (COUNT*i); w<(w>END ? 0 : ((START + (COUNT*i)) + ROW)); w++) {
				printf("%2d X%2d=%3d\t", w, k, w*k);
				//printf("%2d\t", w);
			}
			printf("\n");
		}
		printf("\n");

		for (j = 0; j<avg1 - 1; j++) {
			for (k = 1; k<10; k++) {
				for (w = START + (COUNT*i) + (ROW*(j + 1)); w<(w>END ? 0 : w>(COUNT*(i + 1)) + 1 ? 0 : (START + (COUNT*i)) + (ROW*(j + 2))); w++) {
					printf("%2d X%2d=%3d\t", w, k, w*k);
					//printf("%2d\t", w);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}

    return 0;
}

