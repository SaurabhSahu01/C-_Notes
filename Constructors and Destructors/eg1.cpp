#include<iostream>
using namespace std;

class Sample{
    int m,n; // prtivate data members
    public: 
        Sample();
};
Sample::Sample(){
    cout<<"constructor"<<endl;
}
int main(){
    Sample s;
    return 0;
}