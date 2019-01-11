class Solution {
    public int reverse(int x) {
        boolean flag = false;
        if (x < 0) {
            flag = true; x = -x;
        }
        long rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        if (flag) {rev = -rev;}
        if (rev > Integer.MAX_VALUE || rev < Integer.MIN_VALUE) { rev = 0; }
        return (int)rev;
    }
}
