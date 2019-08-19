"""

Implement selection sort in python

Input an array a

Algorithm:
    Iterate i from 0 to N-1 (len(a) - 1):
        1.find the index min of smallest remaining (j from j+1 to N-1) entry
        2.Swap a[i] and a[min]

Output sorted a

"""

def selection_sort(a=[]):
    N = len(a)
    for i in range(N):
        min = i
        for j in range(i+1, N):
            if a[j] < a[min]:
                min = j

        swap = a[min]
        a[min] = a[i]
        a[i] = swap
    return a

if __name__ == "__main__":
    array = [5,4,3,2,1]
    print(selection_sort(array), array)
