#include<bits/stdc++.h>
using namespace std;

//Inheritance

//1) Single
//2) Multilevel
//3) Hirerarical
//4) Multiple
//5) Hybrid


class Parent {

    public:
    int val1;
    bool flag;
        Parent() {
            cout << "Parent Constructor" << endl;
        }
        Parent(int val,bool flag) {
            this->val1 = val;
            this->flag = flag;
        }

        void display() {
            cout << "parent display " << val1 << " " << flag << endl;
        }

};


class Child1 : public Parent {

    //val1,flag
    int val2;
    public:
        Child1() :Parent(){
            cout << "Child1 Constructor" << endl;
        }
        void display() {
            cout << "child " << val1;
        }
};

//ujjwal - child,parent
//ishan -> child
//mer -> parent,child


//exection -> parent,child

//calling order -> child1,parent
int main() {
    Child1 c1;
}