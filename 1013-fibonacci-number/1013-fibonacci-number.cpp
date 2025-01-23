class Solution {
public:
int calcfibo(int n){
    if(n<=1) return n;
    return (calcfibo(n-1)+calcfibo(n-2));
}
    int fib(int n) {
    return calcfibo(n);  
    }
};