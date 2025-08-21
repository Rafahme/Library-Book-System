#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    cout << "==== Testing Book Class ====\n" << endl;

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

    return 0;
}
