#include <iostream>
using namespace std;

class Book {
private:
    int id;         // Book ID
    string title;   // Book title
    string author;  // Author name

public:
    // Function to enter book details
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;
    }

    // Function to display one book's details
    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author << endl;
    }

    // Function to check if this book matches the given ID
    bool searchByID(int bookID) {
        return id == bookID;
    }
};

int main() {
    Book library[100];   // Array to store up to 100 books
    int count = 0;       // Number of books added

    int choice;

    do {
        cout << "\n===== LIBRARY MENU =====\n";
        cout << "1. Add a Book\n";
        cout << "2. Search Book by ID\n";
        cout << "3. Display All Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Add a new book
            cout << "\n--- Add New Book ---\n";
            library[count].addBook();
            count++;
            cout << "Book added successfully!\n";
        }

        else if (choice == 2) {
            // Search a book by ID
            int bookID;
            cout << "Enter Book ID to search: ";
            cin >> bookID;

            bool found = false;

            // Loop through all stored books
            for (int i = 0; i < count; i++) {
                if (library[i].searchByID(bookID)) {
                    cout << "\nBook found!\n";
                    library[i].display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book not found.\n";
            }
        }

        else if (choice == 3) {
            // Display all books
            if (count == 0) {
                cout << "No books in the library.\n";
            } else {
                cout << "\n--- List of All Books ---\n";
                for (int i = 0; i < count; i++) {
                    library[i].display();
                }
            }
        }

        else if (choice == 4) {
            cout << "Exiting... Goodbye!\n";
        }

        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);    // Loop continues until user selects Exit

    return 0;
}
