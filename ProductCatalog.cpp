#include <map>

class ProductCatalog {
public:
    void add_product(const InventoryItem& product) {
        products[product.item_id] = product;
    }

    void remove_product(int product_id) {
        products.erase(product_id);
    }

    InventoryItem find_product(int product_id) {
        return products[product_id];
    }

private:
    int catalog_id;
    std::map<int, InventoryItem> products;
};
