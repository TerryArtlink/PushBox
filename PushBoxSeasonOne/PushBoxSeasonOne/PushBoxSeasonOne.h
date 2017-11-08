#pragma once


#define N 15
#define M 15
//create class
class PushBox {
public:
	int move(int map[N][M], char ch); //move the box
	void Drop(int map[N][M]); //Box UI
	int juide(int map[N][M]); //judge are the box all in position, secceed 1, failed 0.
private:
	int push(int map[N][M], int x1, int x2, int y1, int y2);
	void Color(int m);
	void Position(int map[N][M], int *i, int *j);
};

