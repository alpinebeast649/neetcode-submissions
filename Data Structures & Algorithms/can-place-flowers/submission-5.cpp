class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length = flowerbed.size();
        for(int i = 0; i < length; i++) {
            if(flowerbed[i] == 1) {
                i++;
            } else {
                if(length == 1) {
                    n--;
                    flowerbed[i] = 1;
                }
                else if(i == 0 && flowerbed[1] == 0) {
                    n--;
                    flowerbed[i] = 1;
                } else if (i == length - 1 && i > 0 && flowerbed[i-1] == 0) {
                    n--;
                    flowerbed[i] = 1;
                } else if (i > 0 && i < length - 1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        if (n <= 0) {
            return true;
        } else {
            return false;
        }
    }
};