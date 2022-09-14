#include <iostream>
#include "snake.h"
#include <conio.h>

using namespace std;

int main(){
	snake ob;
	ob.veKhung();

	while (1){
		ob.veRan();
		ob.veTao();
		
		ob.dieuKhien();
		ob.kiemTraAn();
		ob.kiemTraThua();
	}

	_getch();
	return 0;
}