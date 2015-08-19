#include<stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

int main() {
    int list1[0] = {};
    int list2[1] = {1};

    double res;
    res = findMedianSortedArrays(list1, 0, list2, 1);
    printf("%lf\n", res);

    return 0;
}


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0;
    int j = 0;

    while(i <= nums1Size && j <= nums2Size) {
        if((i + j) == (nums1Size + nums2Size) / 2){
            break;
        }
        if(i < nums1Size && *(nums1+1) <=  *nums2) {
            i += 1;
            nums1 += 1;
        }
        else {
            j += 1;
            nums2 += 1;
        }
    }
    if(*nums1 < *nums2){
        return *nums1;
    }
    else {
        return *nums2;
    }
}
