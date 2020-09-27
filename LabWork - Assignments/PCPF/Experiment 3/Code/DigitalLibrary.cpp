#include <iostream>
#include <cstring>

using namespace std;

// parent class Media
class Media {
    public:
        // instance variables
        int id, yearOfPublish;

        // constructor
        Media(int id, int yearOfPublish) {
            this->id = id;
            this->yearOfPublish = yearOfPublish;
        }

        //  virtual method which is overloaded
        virtual void display() {}

};

// sub-class Book
class Book : public Media {
    public:
        // instance variables
        string title;
        float price;
        int pages;

        // constructor
        Book(int id, int yearOfPublish ,string title, float price, int pages)
        :Media(id, yearOfPublish) {
            this->title = title;
            this->price = price;
            this->pages = pages;
        }

        // method to display
        virtual void display() {
            cout << "Book's ID :  " << this->id << endl;
            cout << "Book's Year of publish :  " << this->yearOfPublish << endl;
            cout << "Book's title' :  " << this->title << endl;
            cout << "Book's price :  " << this->price << " rs" << endl;
            cout << "Number of pages in book :  " << this->pages << " pages" << endl;

        }
};

// sub-class Tape
class Tape : public Media {
    public:
        // instance variables
        string title;
        float price;
        float time;

        // constructor
        Tape (int id, int yearOfPublish, string title, float price, float time)
        :Media(id, yearOfPublish) {
            this->title = title;
            this->price = price;
            this->time  = time;
        }

        // method to display
        virtual void display() {
            cout << "Tape's ID :  " << this->id << endl;
            cout << "Tape's Year of publish :  " << this->yearOfPublish << endl;
            cout << "Tape's title' :  " << this->title << endl;
            cout << "Tape's price  :  " << this->price << " rs" << endl;
            cout << "Tape's length :  " << this->time << " hours" << endl;

        }
};

int main() {
    // object of Book
    Media *myBook = new Book(1001, 2077, "To sleep in sea of stars", 399.99, 425);
    myBook->display();
    
    cout << "*******************************************" << endl;

    // object of Tape
    Media *myTape = new Tape(2002, 2001, "2001 Space odessey", 449.99, 2.5);
    myTape->display();
}


