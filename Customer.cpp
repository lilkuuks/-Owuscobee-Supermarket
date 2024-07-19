class Customer {
public:
    Customer(int id, std::string n, std::string contact)
        : customer_id(id), name(n), contact_details(contact) {}

    void update_contact_details(const std::string& details) {
        contact_details = details;
    }

    void add_purchase(const SalesTransaction& transaction) {
        purchase_history.push_back(transaction);
    }

    std::vector<SalesTransaction> get_purchase_history() {
        return purchase_history;
    }

private:
    int customer_id;
    std::string name;
    std::string contact_details;
    std::vector<SalesTransaction> purchase_history;
};
