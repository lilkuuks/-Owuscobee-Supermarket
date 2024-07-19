#include <iostream>
#include <vector>
#include <string>

class Item {
    // Define Item class as needed
};

class SalesTransaction {
public:
    SalesTransaction(int id) : transaction_id(id), total_amount(0.0) {}

    void add_item(const Item& item) {
        items_sold.push_back(item);
    }

    float calculate_total() {
        // Implement calculation logic
        return total_amount;
    }

    void generate_receipt() {
        // Implement receipt generation logic
    }

private:
    int transaction_id;
    std::vector<Item> items_sold;
    float total_amount;
    std::string date_time;
};
