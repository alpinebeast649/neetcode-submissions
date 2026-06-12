class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> seen;
        pair<int, int> currentPos = {0, 0};
        seen.insert("0,0");
        
        int l = path.length();
        for(int i = 0; i < l; i++) {
            if(path[i] == 'N') {
                currentPos.second++;
            } else if(path[i] == 'S') {
                currentPos.second--;
            } else if(path[i] == 'E') {
                currentPos.first++;
            } else {
                currentPos.first--;
            }
            
            string pos = to_string(currentPos.first) + "," + to_string(currentPos.second);
            if(seen.count(pos)) {
                return true;
            }
            seen.insert(pos);
        }
        return false;
    }
};