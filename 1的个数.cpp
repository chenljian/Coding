/*
题目描述
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int x = 0x01;
         int num = 0;
         for(int i = 0; i < sizeof(int)*8; i++){
             if(n & (x<<i)){
                 num++;
             }
         }
         return num;
     }
};
//4ms
//476k