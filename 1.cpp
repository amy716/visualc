#include <iostream>
#include <cmath>
using namespace std;
class Point {	//����Point��Ķ���
public:	//���к�����Ա
	void initPoint(float x = 0, float y = 0) { this->x = x; this->y = y;}
	void move(float offX, float offY) { x += offX; y += offY; }
	float getX() const { return x; }
	float getY() const { return y; }
private:	//˽�����ݳ�Ա
	float x, y;
};
class Rectangle: public Point {	//�����ඨ�岿��
public:	//�������к�����Ա
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y); //���û��๫�г�Ա����
		this->w = w;
		this->h = h;
	}
	float getH() const { return h; }
	float getW() const { return w; }
private:	//����˽�����ݳ�Ա
	float w, h;
};
int main() {
	Rectangle rect;	//����Rectangle��Ķ���
	rect.initRectangle(2, 3, 20, 10);	//���þ��ε�����
	rect.move(3,2);	//�ƶ�����λ��
	cout << "The data of rect(x,y,w,h): " << endl;
	cout << rect.getX() <<", "	//������ε���������
		<< rect.getY() << ", "
		<< rect.getW() << ", "
		<< rect.getH() << endl;
	return 0;
}





