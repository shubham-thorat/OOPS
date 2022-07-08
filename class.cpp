#include<bits/stdc++.h>
using namespace std;

// Encapsulation -> binding of together of the same entity
// 1) information Hiding 

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

int main() {


    Marvel m1("IronMan 1","02/11/2004");

    Marvel m2 = m1; //shallow copy;

}
/*
int main() {
    //static memory
   
   
    Marvel ironMan;
    Marvel ironMan3("Iroman 3","2/3/2005");
    //constructor -> initialization of objects
    //1) default constructor
    //2) paramaterized constructor
    //3) copy constructor


    ironMan.setReleaseDate("07/08/2001");
    ironMan.setTitle("Iron Man");

    // ironMan.display();

    // cout << ironMan.getReleaseDate() << endl;
    // cout << ironMan.getTitle() << endl;



    Marvel *ironman2 = new Marvel();

    ironman2->setReleaseDate("11/2/2002");
    ironman2->setTitle("Ironman 2");

    // ironman2->display();

    // cout << sizeof(Marvel) << endl;

    ironMan3.display();
}
*/