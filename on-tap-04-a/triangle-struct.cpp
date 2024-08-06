Point::Point() {
        x = 0;
        y = 0;
    }
Point::Point(double _x, double _y) {
        x = _x;
        y = _y;
    }
Point::Point(const Point& p) {
        x = p.x;
        y = p.y;
    }
Triangle::Triangle(const Point& _p1, const Point& _p2,  const Point& _p3) {
        p1 = _p1;
        p2 = _p2;
        p3 = _p3;
    }
double Triangle::getPerimeter() const {
        double p12 = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        double p23 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        double p13 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
        return p12 + p23 + p13;
    }
double Triangle::getArea() const {
        double p12 = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        double p23 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        double p13 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
        double halfPerimeter = (p12+p23+p13)/2; 
        return sqrt(halfPerimeter*(halfPerimeter-p12)*(halfPerimeter-p23)*(halfPerimeter-p13));
    }