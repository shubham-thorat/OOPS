#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
        string name;
        int age;
        //initialization list
    Base(string name,int age):name(name),age(age) {
        
    }

    virtual void show() {
        cout << "base class : " << name << " " << age << endl;
    }
};


class Child1:public Base {
    public:

    Child1(string name,int age):Base(name,age) {

    }
    void show() {
        cout << "Child1 class : " << name << " " << age << endl;
    }      
};


class Child2:public Base {
    public:
    Child2(string name,int age):Base(name,age) {

    }
    void show() {
        cout << "child2 class : " << name << " " << age << endl;
    }      
};

int main() {
    Base *next[2];

    Child1 c1("shubham",20);
    Child2 c2("ujjawal",21);

    next[0] = &c1;
    next[1] = &c2;

    next[0]->show();
    next[1]->show();

    // c1.show();
}