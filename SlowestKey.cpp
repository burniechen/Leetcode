class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char slowest_char = 'a';
        int start = 0, slowest_time = 0;
        for(int i=0; i<releaseTimes.size(); ++i) {
            if(i>0)
                start = releaseTimes[i-1];
            
            int tmp = releaseTimes[i] - start;
            if(tmp > slowest_time) {
                slowest_char = keysPressed[i];
                slowest_time = tmp;
            }

            if(tmp == slowest_time and keysPressed[i] > slowest_char) {
                slowest_char = keysPressed[i];
                slowest_time = tmp;
            }
        }
        
        return slowest_char;
    }
};
