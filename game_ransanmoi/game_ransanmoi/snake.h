#include <Windows.h>
#include <vector>

#pragma once

#define HEIGHT 20
#define WIDTH 40
#define X0 18
#define Y0 10
#define CHAR 219

struct ToaDo{
	int x0;
	int y0;
	int x;
	int y;
};

enum STYLE{LEFT = 0, RIGHT, UP, DOWN};

class snake
{
private:
	ToaDo head;
	std::vector<ToaDo>  tail;
	bool gameOver;
	int prev;
	unsigned int score;
	ToaDo tao;
	int soDuoi;
	int speed = 50;
public:
	snake();
	~snake();
	void veKhung();
	void veRan();
	void dieuKhien();
	void xoaDiem(int x, int y);
	void kiemTraThua();
	void veTao();
	void veDiem();
	void kiemTraAn();
	void initPrev(ToaDo& td);
};

