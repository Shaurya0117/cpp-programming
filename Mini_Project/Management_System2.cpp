//                                          Library Management System

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool issued;

public:
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;

        cout << "\nBook Added Successfully!\n";
    }

    void displayBook() {
        cout << "\n----------------------------";
        cout << "\nBook ID : " << bookID;
        cout << "\nTitle   : " << title;
        cout << "\nAuthor  : " << author;

        if (issued)
            cout << "\nStatus  : Issued";
        else
            cout << "\nStatus  : Available";

        cout << "\n----------------------------\n";
    }

    int getBookID() {
        return bookID;
    }

    void issueBook() {
        if (issued)
            cout << "\nBook is already issued.\n";
        else {
            issued = true;
            cout << "\nBook Issued Successfully!\n";
        }
    }

    void returnBook() {
        if (!issued)
            cout << "\nBook is already available.\n";
        else {
            issued = false;
            cout << "\nBook Returned Successfully!\n";
        }
    }
};

int main() {
    Book library[100];
    int count = 0;
    int choice;
    int id;
    bool found;

    do {
        cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            library[count].addBook();
            count++;
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Books Available.\n";
            } else {
                for (int i = 0; i < count; i++)
                    library[i].displayBook();
            }
            break;

        case 3:
            cout << "\nEnter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < count; i++) {
                if (library[i].getBookID() == id) {
                    library[i].displayBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;

        case 4:
            cout << "\nEnter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < count; i++) {
                if (library[i].getBookID() == id) {
                    library[i].issueBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;

        case 5:
            cout << "\nEnter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < count; i++) {
                if (library[i].getBookID() == id) {
                    library[i].returnBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}