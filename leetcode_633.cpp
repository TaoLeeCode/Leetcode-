#include <iostream>
#include <cmath>

using namespace std;

class Solution 
{
    public:
        bool judgeSquareSum(int target) 
        {
            if (target < 0){
                return false;
            } 

            int i = 0; 
            int j = sqrt(target);
            
            while (i <= j) 
            {
                int powSum = i * i + j * j;
                if (powSum == target) 
                {
                    return true;
                } 
                else if (powSum > target) 
                {
                    j--;
                } 
                else 
                {
                    i++;
                }
            }
            return false;
        }
};

int main()
{
    int target;
    bool TOF;

    cout << "������Ŀ��ֵ��";
    cin >> target;
    Solution Solution1;
    TOF = Solution1.judgeSquareSum(target);
    cout << "���Խ��Ϊ��" << boolalpha << TOF;
}