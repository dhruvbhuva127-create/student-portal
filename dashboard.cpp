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

int pendingTasks(const DashboardStats& stats) {
    if (stats.totalTasks < 0 || stats.completedTasks < 0) {
        return 0;
    }

    if (stats.completedTasks > stats.totalTasks) {
        return 0;
    }

    return stats.totalTasks - stats.completedTasks;
}

bool isTaskCompleted(int completedTasks, int totalTasks) {
    if (totalTasks <= 0 || completedTasks < 0) {
        return false;
    }

    return completedTasks == totalTasks;
}
