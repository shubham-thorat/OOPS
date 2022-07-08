#include<bits/stdc++.h>
using namespace std;

class Base {
    int *ptr;
    int val;

    public:
        Base(int pt,int val) {
            this->ptr = new int;
            *ptr = pt;
            this->val = val;
        }

        Base(Base &b) {
            this->ptr = new int;
            *ptr = *b.ptr;
            val = b.val;
        }

        void setPtr(int v) {
            *ptr = v;
        }

        void display() {
            cout << "pointer : " << (*ptr) << endl;
            cout << "Value : " << val << endl << endl;
        }
};


int main() {

    Base b1(10,20);

        //10,20
    Base b2 = b1; //10 ,20
    b2.setPtr(50); //50,20

    b1.display();
    b2.display();
}