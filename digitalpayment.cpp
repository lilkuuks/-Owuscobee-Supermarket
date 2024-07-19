class CreditCardPayment : public Payment {
public:
    void process_payment() override {
        // Implement credit card payment logic
    }

    void validate_payment() override {
        // Implement credit card validation logic
    }

    void issue_refund() override {
        // Implement credit card refund logic
    }

private:
    std::string card_number;
    std::string expiration_date;
    std::string cvv;
};

class CashPayment : public Payment {
public:
    void process_payment() override {
        // Implement cash payment logic
    }

    void validate_payment() override {
        // Implement cash payment validation logic
    }

    void issue_refund() override {
        // Implement cash refund logic
    }

private:
    float cash_tendered;
};

class MobilePayment : public Payment {
public:
    void process_payment() override {
        // Implement mobile payment logic
    }

    void validate_payment() override {
        // Implement mobile payment validation logic
    }

    void issue_refund() override {
        // Implement mobile payment refund logic
    }

private:
    std::string mobile_number;
    std::string provider;
};
