
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = 0;
        int high = 0;

        // Find the minimum and maximum possible ship capacity
        for (int i = 0; i < weights.size(); i++) {
            low = max(low, weights[i]); // Heaviest package
            high += weights[i];        // Sum of all weights
        }

        // Binary search for the minimum capacity
        while (low < high) {
            int mid = low + (high - low) / 2;

            int daysNeeded = 1;
            int currentWeight = 0;

            // Check how many days are needed with capacity mid
            for (int i = 0; i < weights.size(); i++) {

                if (currentWeight + weights[i] > mid) {
                    daysNeeded++;       // Start a new day
                    currentWeight = 0;  // Reset today's weight
                }

                currentWeight += weights[i]; // Load the package
            }

            if (daysNeeded <= days) {
                high = mid;      // Capacity works; try smaller
            } else {
                low = mid + 1;   // Capacity is too small
            }
        }

        return low; // Minimum ship capacity
    }
};
