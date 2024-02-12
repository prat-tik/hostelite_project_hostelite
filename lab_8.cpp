#include<iostream>
using namespace std;
class polygon
{
    public:
    int l,b;
    virtual  void area()=0;

};
class recatangle: public polygon
{
    public:
    int a;
    int b;
    void area()
    {
        a=10;
        b=45;
        cout<<l*b;
    }
};
class triangle: public polygon
{
    public:
    int l,b;
    void area()
{
    l=10;
    b=15;
        cout<<(1/2)*l*b;
    }
};
int main(void)
{
    polygon *p;
    recatangle r;
    triangle t;
    p=&r;
    p ->area();
}