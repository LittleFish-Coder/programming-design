# Quick Sort (Unstable)
# Time Complexity: O(nlogn)
# Worse Case: O(n^2)

def quickSort(arr, s, e):
    if (e-s+1) <= 1:
        return arr
    
    pivot = arr[e]
    left = s    # pointer for left side

    # partition: elements smaller than pivot on left side
    for i in range(s, e+1):
        if arr[i] < pivot:
            arr[i], arr[left] = arr[left], arr[i]
            left += 1
    
    # move pivot in-between left & right sides
    arr[e], arr[left] = arr[left], pivot
    
    quickSort(arr, s, left-1)   # Quick sort left side
    quickSort(arr, left+1, e)   # # Quick sort right side

    return arr
    


if __name__ == "__main__":
    arr = [6, 2, 4, 1, 3]
    print(f"Unsorted array: {arr}")
    
    quickSort(arr, 0, len(arr)-1)

    print(f"Sorted array: {arr}")