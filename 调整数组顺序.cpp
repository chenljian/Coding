/*
题目描述
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int>::iterator it = array.begin();
        vector<int> vec;
        while(it != array.end()){
            if(*it & 0x01){
                //奇数
                it++;
            }
            else{
                vec.push_back(*it);
                it = array.erase(it);
            }
        }
        it = vec.begin();
        while(it != vec.end()){
            array.push_back(*it);
            it++;
        }
    }
};