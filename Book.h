#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    string availability;
    string dateAdded;

public:
    void setBookDetails(string t, string a, string i, string avail, string date) {
        title = t;
        author = a;
        ISBN = i;
        availability = avail;
        dateAdded = date;
    }

    void displayBookDetails() const {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nISBN: " << ISBN << "\nAvailability: " << availability
             << "\nDate Added: " << dateAdded << "\n" << endl;
    }

    string getISBN() const { return ISBN; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
};

#endif
