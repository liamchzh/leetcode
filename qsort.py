def qsort(l):
    if len(l) <= 1:
        return l
    pivot = l[0]
    smaller = [i for i in l[1:] if i < pivot]
    greater = [i for i in l[1:] if i >= pivot]
    return qsort(smaller) + [pivot] + qsort(greater)


if __name__ == "__main__":
    l = [2, 5, 9, 10, 1, 7, 8, 4, 3, 6]
    print qsort(l)
