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
	int i = 0, j = 0, k = 0, l = 0, cnt = 0;

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
	}

    return 0;
}

