/*
Implement selection sort in java

Input an array a

Algorithm:
    Iterate i from 0 to N-1 (len(a) - 1):
        1.find the index min of smallest remaining (j from j+1 to N-1) entry
        2.swap a[i] and a[min]

Output sorted a
*/

public class SelectionSort {
  public static void main(String[] args) {
    int[] array = {5,4,3,2,1};
    sort(array);

    for(int a:array)
        System.out.println(a);

  }

  public static void sort(int[] a)
  {
    int N = a.length;
    for (int i = 0 ; i < N ; i++ )
    {
      int min = i;
      for (int j = i+1; j < N; j++)
        if (a[j] < a[min])
          min = j;
        exch(a, i, min);
    }

  }

  private static void exch(int[] a, int i, int j){
    int swap = a[i];
    a[i] = a[j];
    a[j] = swap;
  }

}
