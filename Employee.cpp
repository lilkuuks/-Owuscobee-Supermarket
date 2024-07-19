class Employee {
public:
    Employee(int id, std::string n, std::string r) 
        : employee_id(id), name(n), role(r) {}

    void clock_in() {
        // Implement clock-in logic
    }

    void clock_out() {
        // Implement clock-out logic
    }

    void record_sale(const SalesTransaction& transaction) {
        sales_record.push_back(transaction);
    }

private:
    int employee_id;
    std::string name;
    std::string role;
    std::vector<SalesTransaction> sales_record;
};
