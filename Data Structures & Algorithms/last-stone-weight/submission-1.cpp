class Solution {
public:
    int lastStoneWeight(vector<int>& stone) {
        priority_queue<int> maxHeap(stone.begin(), stone.end());
        while(maxHeap.size() > 1){
            int stone1 = maxHeap.top();
            maxHeap.pop();
            int stone2 = maxHeap.top();
            maxHeap.pop();
            if(stone1 != stone2){
                maxHeap.push(stone1 - stone2);
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
        
    }
};