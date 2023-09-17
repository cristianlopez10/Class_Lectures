class Triangle{

    private:
    int sides[3];


    public:

    //Getters
    int getSide1(){ return sides[0]; }
    int getSide2(){ return sides[1]; }
    int getSide3(){ return sides[2]; }

    //Setters
    void setSide1(int s){sides[0]=s;}
    void setSide1(int s){sides[0]=s;}
    void setSide1(int s){sides[0]=s;}

    Triangle (int a, int b, int c){

        sides[0]= a;
        sides[1]= b;
        sides[2]=c;
    }

// Returns the area of a triangle
double getArea(){
double s = (this->getSide1() + this->getSide2() + this->getSide3())/2.0;
    double area = sqrt(s*(s-this->getSide1())*(s-this->getSide2())*(s-this->getSide3()));
    return area;
}

};