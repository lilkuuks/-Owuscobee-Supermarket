class Payment {
public:
    virtual void process_payment() = 0;
    virtual void validate_payment() = 0;
    virtual void issue_refund() = 0;

protected:
    int payment_id;
    float amount;
    std::string payment_method;
};
