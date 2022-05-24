#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    int divide(int a, int b) {
        // ���Ǳ�����Ϊ��Сֵ�����
        if (a == INT_MIN) {
            if (b == 1) {
                return INT_MIN;
            }
            if (b == -1) {
                return INT_MAX;
            }
        }
        // ���ǳ���Ϊ��Сֵ�����
        if (b == INT_MIN) {
            return a == INT_MIN ? 1 : 0;
        }
        // ���Ǳ�����Ϊ 0 �����
        if (a == 0) {
            return 0;
        }

        // һ�������ʹ�ö��ֲ���
        // �����е�����ȡ�෴����������ֻ��Ҫ����һ�����
        bool rev = false;
        if (a > 0) {
            a = -a;
            rev = !rev;
        }
        if (b > 0) {
            b = -b;
            rev = !rev;
        }

        // ���ٳ�
        auto quickAdd = [](int y, int z, int x) {
            // x �� y �Ǹ�����z ������
            // ��Ҫ�ж� z * y >= x �Ƿ����
            int result = 0, add = y;
            while (z) {
                if (z & 1) {
                    // ��Ҫ��֤ result + add >= x
                    if (result < x - add) {
                        return false;
                    }
                    result += add;
                }
                if (z != 1) {
                    // ��Ҫ��֤ add + add >= x
                    if (add < x - add) {
                        return false;
                    }
                    add += add;
                }
                // ����ʹ�ó���
                z >>= 1;
            }
            return true;
        }

        int left = 1, right = INT_MAX, ans = 0;
        while (left <= right) {
            // ע����������Ҳ���ʹ�ó���
            int mid = left + ((right - left) >> 1);
            bool check = quickAdd(b, mid, a);
            if (check) {
                ans = mid;
                // ע�����
                if (mid == INT_MAX) {
                    break;
                }
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return rev ? -ans : ans;
    }
}