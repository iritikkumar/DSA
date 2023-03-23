#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y;

public:
    friend void distance(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
void distance(Point p1, Point p2)
{
    float d, l;
    l = ((p1.x) - (p2.x)) * ((p1.x) - (p2.x)) + ((p1.y) - (p2.y)) * ((p1.y) - (p2.y));
    // l=pow((p1.x)-(p2.x),2)+pow((p1.y)-(p2.y),2);
    d = sqrt(l);
    cout << "The distance between two points (" << p1.x << ", " << p1.y << ") and (" << p2.x << ", " << p2.y << ") is " << d << endl;
    // cout<<d<<endl;
}

int main()
{
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    Point p(x1, y1);
    p.displayPoint();
    Point q(x2, y2);
    q.displayPoint();
    distance(p, q);

    return 0;
}