def merge_sort(l):
    if len(l) <= 1:
        return l

    mid = len(l) / 2
    left = merge_sort(l[:mid])
    right = merge_sort(l[mid:])

    return merge(left, right)


def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result += left[i:]
    result += right[j:]
    return result


if __name__ == "__main__":
    l = [2, 5, 9, 10, 1, 7, 8, 4, 3, 6]
    print merge_sort(l)
