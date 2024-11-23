import heapq

data = [63, 96, 39, 84, 12, 51, 20, 2, 34, 76]

heapq.heapify(data)
print(data)  # [2, 12, 20, 34, 63, 51, 39, 84, 96, 76]

heapq.heappush(data, 7)

print(data)  # [2, 7, 20, 34, 12, 51, 39, 84, 96, 76, 63]

print(heapq.heappop(data))  # 2
print(heapq.heappop(data))  # 7
print(heapq.heappop(data))  # 12

print(data)  # [20, 34, 39, 76, 63, 51, 96, 84]


# get the smallest n elements
print(heapq.nsmallest(3, data))  # [20, 34, 39]

# get the largest n elements
print(heapq.nlargest(3, data))  # [96, 84, 76]