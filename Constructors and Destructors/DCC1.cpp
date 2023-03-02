#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inches;
    public: 
        Distance(): feet(0), inches(0.0){} // no-arg constructor
        Distance(int ft, float in): feet(ft), inches(in){}; // two-arg constructor

        void showDist(){
            cout<<"feet : "<<feet<<" inches: "<<inches<<endl;
        }
};

int main(){
    Distance d1(11, 6.35);
    Distance d2(d1);
    Distance d3 = d2;

    d1.showDist();
    d2.showDist();
    d3.showDist();
    
    return 0;
}