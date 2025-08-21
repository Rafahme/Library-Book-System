#include <iostream>
#include <vector>
#include <algorithm>
#include "Book.h"
using namespace std;

int main() {
    cout << "==== Testing Book Class ====
" << endl;

    // ✅ Correct initialisation
    Book book1;
    book1.setBookDetails("Death Marker", "George Orwell", "001", "Available", "01/01/2020");
    cout << "[Test 1] Valid book initialisation:" << endl;
    book1.displayBookDetails();

    // ❌ Incorrect: invalid ISBN (letters in numeric field)
    Book book2;
    cout << "\n[Test 2] Invalid book (letters in ISBN):" << endl;
    book2.setBookDetails("Brave New World", "Aldous Huxley", "00A", "Available", "11/11/2019");
    book2.displayBookDetails();

    // ❌ Incorrect: missing required fields
    Book book3;
    cout << "\n[Test 3] Incomplete book data (missing fields):" << endl;
    book3.setBookDetails("", "", "", "", "");
    book3.displayBookDetails();

    // Sorting test
    cout << "\n==== Sorting Books ====" << endl;
    vector<Book> library = {book1, book2, book3};

    // Ascending order
    sort(library.begin(), library.end(), [](Book a, Book b) {
        return a.getISBN() < b.getISBN();
    });
    cout << "\n[Ascending Order by ISBN]" << endl;
    for (Book b : library) b.displayBookDetails();

    // Descending order
    sort(library.begin(), library.end(), [](Book a, Book b) {
        return a.getISBN() > b.getISBN();
    });
    cout << "\n[Descending Order by ISBN]" << endl;
    for (Book b : library) b.displayBookDetails();

    return 0;
}

