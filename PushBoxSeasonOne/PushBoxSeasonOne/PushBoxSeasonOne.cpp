// PushBoxSeasonOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "PushBoxSeasonOne.h"

using namespace std;

#define N 15
#define M 15

int main()
{
	int map[N][M] = { 0 };
	PushBox box;

    return 0;
}




//class member method
int PushBox::move(int map[N][M], char ch) {
	static int step = 0;
	int x1, x2, y1, y2;
	switch (ch) {
	case 's':
	case 'S': x1 = 1; x2 = 2; y1 = 0; y2 = 0;
		if (push(map, x1, x2, y1, y2)) step++; return step;

	case 'w':
	case 'W': x1 = -1; x2 = -2; y1 = 0; y2 = 0;
		if (push(map, x1, x2, y1, y2)) step++; return step;

	case 'A':
	case 'a': x1 = 0; x2 = 0; y1 = -1; y2 = -2;
		if (push(map, x1, x2, y1, y2)) step++; return step;
	case 'D':
	case 'd': x1 = 0; x2 = 0; y1 = 1; y2 = 2;
		if (push(map, x1, x2, y1, y2)) step++; return step;
	}
}

void PushBox::Drop(int map[N][M]) {
	int i, j;
	for (i = 0; i < N, i++) {
		for (j = 0; j < M; j++) {
			switch (map[i][j])
			{
			case 0: Color(7); cout << "  "; break;
			case 1: Color(4); cout << "■"; break;
			case 2: Color(10); cout << "△"; break;
			case 3: Color(5); cout << "□"; break;
			case 4: Color(1); cout << "☆"; break;
			case 5: Color(7); cout << "◆"; break;
			case 6: Color(10); cout << "△"; break;
			default: cout << "default"; 
				break;
			}
			cout << "\n";
		}
	}
}

int PushBox::juide(int map[N][M]) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 6) 
				return 0;
			if (map[i][j] == 4)
				return 0;
		}
		if (i == N - 1 && j == M - 1)
			return 1;
	}
}
int PushBox::push(int map[N][M], int x1, int x2, int y1, int y2) {
	int i, j;
	Position(map, &i, &j);
	//player step on the blank
	if (map[i][j] == 2) {
		//player behind box, box on the blank
		if (map[i + x1][j + y1] == 3) {
			//箱子前面为空格S
			if (map[i + x2][j + y2] == 0) {
				
			}
		}
	}
}
void PushBox::Color(int m) {

}

void PushBox::Position(int map[N][M], int *i, int *j) {

}