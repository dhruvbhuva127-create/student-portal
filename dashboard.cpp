#include <string>
using namespace std;

struct DashboardStats {
    int totalTasks;
    int completedTasks;
    int pendingTasks;
};

bool hasValidTaskCounts(const DashboardStats& stats) {
    return stats.totalTasks >= 0 &&
           stats.completedTasks >= 0 &&
           stats.pendingTasks >= 0 &&
           stats.completedTasks + stats.pendingTasks == stats.totalTasks;
}

string getConflictResolutionStrategy() {
    return "Keep validated dashboard settings and latest user settings.";
}
