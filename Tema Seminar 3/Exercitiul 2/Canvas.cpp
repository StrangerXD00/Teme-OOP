#include "Canvas.h"
#include <iostream>
#include <cmath>

using namespace std;

Canvas::Canvas(int lungime, int latime):width(lungime), height(latime)
{
	matrice = new char* [latime];
	for (int i = 0;i < latime;i++)
		matrice[i] = new char[lungime];
		for (int j = 0;j < latime;j++)
			matrice[i][j] = ' ';
}
Canvas::~Canvas()
{
	for (int i = 0;i < latime;i++)
		delete[] matrice[i];
	delete[] matrice;
}
void Canvas::SetPoint(int x, int y, char ch)
{
	if (x >= 0 and x < latime and y >= 0 and y < latime)
		matrice[y][x] = ch;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int dx = 0, dy = ray;
	int d = 3 - 2 * ray;
	while (dx <= dy)
	{
		SetPoint(x + dx, y + dy, ch);
		SetPoint(x - dx, y + dy, ch);
		SetPoint(x + dx, y - dy, ch);
		SetPoint(x - dx, y - dy, ch);
		SetPoint(x + dy, y + dx, ch);
		SetPoint(x - dy, y + dx, ch);
		SetPoint(x + dy, y - dx, ch);
		SetPoint(x - dy, y - dx, ch);
		if (d < 0)
			d = d + 4 * dx + 6;
		else
		{
			d = d + 4 * (dx - dy) + 10;
			dy--;
		}
		dx++;
	}
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for(int i=-ray;i<=ray;i++)

}