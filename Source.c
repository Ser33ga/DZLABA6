#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	printf("Введите x,y:\n");
	scanf("%f", &x);
	scanf("%f", &y);
	printf(
		"        \\        \n"
		"       /|\\       \n"
		"      /.|.\\      \n"
		"     /..|..\\     \n"
		"   //...|...\\\\   \n"
		"  /.....|.....\\  \n"
		" /......|......\\ \n"
		"/-------+-------\\\n"
		"        |        \n"
	);
	float y1 = x + 4;
	float y2 = -x + 4;
	float y3 = 0;
	if (y <= y1 && y <= y2 && y >= y3) {
		printf("Точка (%.2f, %.2f) лежит в заданой области", x,y);
	}
	else {
		printf("Точка  (%.2f, %.2f) не лежит в заданой области", x, y);
	}
}