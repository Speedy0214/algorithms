"""
insertion sort

input a


algorithm:
    N = len(a)
    iterate i from 0 to N:
        # swap a[i] with each larger entry to its left
        iterate j from i to 0:
            swap(a[j], a[j-1]) if a[j]<a[j-1] else break
output sorted a

"""

class InsertionSort(object):
    def __init__(self):
        pass
        
    def sort(self, a=[]):
        N = len(a)
        for i in range(N):
            j = i
            while((a[j]<a[j-1])&(j>0)):
                self.exch(a,j-1,j)
                j += -1

    def exch(self, a, i, j):
        swap = a[i]
        a[i] = a[j]
        a[j] = swap


if __name__ == '__main__':
    array = [5,4,3,2,1]
    InsertionSort().sort(array)
    print(array)
