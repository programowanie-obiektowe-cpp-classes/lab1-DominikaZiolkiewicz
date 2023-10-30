class Wektor2D
{
    public:
        Wektor2D(){
            x = 0.;
            y = 0.;
        }
        Wektor2D(double a, double b){
            x = a;
            y = b;
        }

        void setX(double a){
            x = a;
        }

        void setY(double a){
            y = a;
        }

        double getX(){
            return x;
        }
        double getY(){
            return y;
        }

        Wektor2D operator+=(const Wektor2D& v1){
            x += v1.x;
            y += v1.y;
            return *this;
        }
        Wektor2D operator+(const Wektor2D& v1){
            Wektor2D tmp(*this);
            tmp += v1;
            return tmp;
        }

        double operator*(const Wektor2D& v1){
            return (this->x*v1.x + this->y*v1.y);
        }

        
    private:
        double x;
        double y;
};
