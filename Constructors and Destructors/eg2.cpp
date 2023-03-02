#include<iostream>
using namespace std;

class Counter{
    private:
        unsigned int count;
    public:
        // default constructor
        Counter(){
            count = 0;
        }

        void inc_count(){
            count++;
        }
        
        void dec_count(){
            count--;
        }

        unsigned int get_count(){
            return count;
        }
};

int main(){
    Counter c1, c2; // initialising 2 objects
    cout<<"c1 count : "<<c1.get_count()<<endl; 
    cout<<"c2 count : "<<c2.get_count()<<endl;
    c1.inc_count();
    c2.inc_count();
    cout<<"c1 count now: "<<c1.get_count()<<endl; 
    cout<<"c2 count now: "<<c2.get_count()<<endl;
    return 0;
}