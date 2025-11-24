#include <iostream>
using namespace std;

class Product {
private:
    string name;     // product name
    float price;     // price of one item
    int quantity;    // how many items

public:
    // Function to read product details
    void input() {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    // Function to calculate total price of THIS product
    float getTotal() {
        return price * quantity;
    }
};

int main() {
    Product p[50];   // allows up to 50 items in cart
    int count = 0;   // number of products added
    char choice;

    // Loop to add multiple products
    do {
        cout << "\n--- Add New Product ---\n";
        p[count].input();
        count++;

        cout << "Add another product? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    float totalBill = 0;

    // Calculating total bill of all products
    for (int i = 0; i < count; i++) {
        totalBill += p[i].getTotal();
    }

    float discount = 0;

    // Applying discount using if-else
    if (totalBill > 5000)
        discount = totalBill * 0.10;   // 10% discount
    else if (totalBill > 3000)
        discount = totalBill * 0.05;   // 5% discount

    float finalAmount = totalBill - discount;

    // Displaying final bill
    cout << "\n======= BILL SUMMARY =======\n";
    cout << "Total Amount: " << totalBill << endl;
    cout << "Discount Applied: " << discount << endl;
    cout << "Final Amount to Pay: " << finalAmount << endl;

    return 0;
}
