def findMedianSortedArrays(A, B):
    i, j = 0, 0
    A_len = len(A)
    B_len = len(B)
    while (i < A_len and j < B_len):
        if i + j == ((A_len + B_len) / 2) - 1:
            break
        if i < A_len-1 and A[i] < B[j]:
            i += 1
        elif j < B_len-1 and A[i] > B[j]:
            j += 1
        elif i == A_len-1:
            j += 1
        elif j == B_len-1:
            i += 1

    if A[i] < B[j]:
        return B[j]
    else:
        return (A[i] + B[j]) / 2.0


if __name__ == "__main__":
    print findMedianSortedArrays([1, 2], [3, 4])
