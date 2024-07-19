#include <map>

class Report {
public:
    void generate_daily_report() {
        // Implement daily report generation logic
    }

    void generate_weekly_report() {
        // Implement weekly report generation logic
    }

    void generate_monthly_report() {
        // Implement monthly report generation logic
    }

private:
    int report_id;
    std::string report_type;
    std::map<std::string, float> data;
};
