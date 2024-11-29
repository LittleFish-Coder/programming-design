# Insertion Sort (Stable)
# Time complexity: O(n^2)
# Best case: O(n)

# Insertion sort works by dividing the array into a sorted and an unsorted part.
# Initially, the sorted part contains only the first element.
# Then, it takes each element from the unsorted part and inserts it into the correct position in the sorted part.
# This process is repeated until the entire array is sorted.

if __name__ == "__main__":
    arr = [71, 41, 70, 17, 63]
    print(f"Unsorted array: {arr}")

    # insertion sort
    for i in range(1, len(arr)):
        j = i - 1
        while j >= 0 and arr[j+1] < arr[j]:  # inbound and next < prev
            # swap two items
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
            j -= 1  # decrement j to continue comparing with previous elements
        print(f"Array after inserting element at index {i}: {arr}")
    
    print(f"Sorted array: {arr}")