bool isPalindrome(int x) {
    long int reversedNum=0 , remainder , num;
    num = x ; 
    while(num>0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num/=10;
    }
    return x == reversedNum || x==reversedNum/10;
}

