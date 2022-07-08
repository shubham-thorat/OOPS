#include<bits/stdc++.h>
using namespace std;

//Polymorphism
// one functions ,many forms
// 1) compile time,static,early binding 
    // i> function overloading ii> operator overloading
// 2) Run time ,dynamic ,late binding

class Marvel {
    string title; //32bytes
    bool issuperHero,hasParts; //2bytes
    int videoLength; //4bytes
    string releaseDate; //32bytes
    public:
    //default constructor
    Marvel() {
    }

    //paramaterized constructor
    Marvel(string title,string rd) {
        this->title = title;
        this->releaseDate = rd;
    }

    //copy constructor


    //Setter
    void setTitle(string title) {
        this->title = title;
    }

    void setReleaseDate(string date) {
        this->releaseDate = date;
    }

    //function overloading
    void setter() {
        title = "Iron Man";
    }

    void setter(bool issuper,int vl) {
        this->issuperHero = issuper;
    }

    void setter(bool a,bool b) {

    }
    //Function 
    // matter -> functin name -> same
    //paramter -> difference ,-> no of paramater,data types
    // int setter() {

    // }


    //Getter
    string getTitle() {
        return title;
    }
    string getReleaseDate() {
        return releaseDate;
    }

    void display() {
        cout << "Title : " << title << endl;
        cout << "Release Date : " << releaseDate << endl;
    }
};

//parameter argument

class Number {
    int x,y;
    public:
        Number() {
            
        }
        Number(int x,int y) {
            this->x = x;
            this->y = y;
        }

        void operator+(Number &obj) {

            Number n3;
            n3.x = this->x + obj.x;
            n3.y = this->y + obj.y;
            n3.display();
            // return n3;
        }

        void display() {
            cout << "x : " << x << endl;
            cout << "y : " << y << endl;
        }

};


int main() {
    int a = 1,b = 2;
    cout << (a + b) << endl;

    Number n1(10,20);
    Number n2(30,40);
    // Number n3 = n1 + n2;
     n1.operator+(n2);


    // n3.display();
}