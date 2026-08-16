#include <string>
using namespace std;

struct DashboardStats {
    int totalTasks;
    int completedTasks;
    int pendingTasks;
};

double completionRate(const DashboardStats& stats) {
    if (stats.totalTasks <= 0) {
        return 0.0;
    }

    return (static_cast<double>(stats.completedTasks) /
            stats.totalTasks) * 100.0;
}
