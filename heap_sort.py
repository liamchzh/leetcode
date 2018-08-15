def heap_sort(l):
    first = len(l) / 2 - 1
    for start in range(first, -1, -1):
        max_heapify(l, start, len(l)-1)

    for i in range(len(l)-1, 0, -1):
        l[0], l[i] = l[i], l[0]
        max_heapify(l, 0, i-1)

    return l


def max_heapify(l, start, end):
    root = start

    while True:
        child = root * 2 + 1
        if child > end:
            break
        if child + 1 <= end and l[child] < l[child+1]:
            child = child + 1
        if l[child] > l[root]:
            l[root], l[child] = l[child], l[root]
            root = child
        else:
            break


if __name__ == "__main__":
    l = [2, 5, 9, 10, 1, 7, 8, 4, 3, 6]
    print heap_sort(l)
