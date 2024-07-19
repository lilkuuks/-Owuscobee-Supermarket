class InventoryItem {
public:
    InventoryItem(int id, std::string n, int q, float p) 
        : item_id(id), name(n), quantity(q), price(p), reorder_point(0) {}

    void update_quantity(int amount) {
        quantity += amount;
    }

    void set_reorder_point(int level) {
        reorder_point = level;
    }

    void receive_shipment(int amount) {
        update_quantity(amount);
    }

private:
    int item_id;
    std::string name;
    int quantity;
    float price;
    int reorder_point;
};
