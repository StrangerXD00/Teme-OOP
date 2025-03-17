#ifdef CANVAS_H
#define CANVAS_H
class Canvas 
{
private:
	int width, height;
	char** matrice;
public:
	Canvas(int lungime, int latime)
	~Canvas();//destructor pt eliberarea memoriei
	void DrawCircle(int x, int y, int ray, char ch);
	void FillCircle(int x, int y, int ray, char ch);
	void DrawRect(int stanga, int sus, int dreapta, int jos, char ch);
	void FillRect(int stanga, int sus, int dreapta, int jos, char ch);
	void SetPoint(int x, int y, char ch);
	void DrawLine(int x1, int y1, int x2, int y2, char ch);
	void Print();
	void Clear();
 };
#endif