class Heap:
    def __ini__(self):
        self.heap = [0]

    def push(self, val):
        self.heap.append(val)
        i = len(self.heap) - 1

        # Percolate up
        while self.heap[i] < self.heap[i // 2]:
            # swap 2 node
            self.heap[i], self.heap[i // 2] = self.heap[i // 2], self.heap[i]
            i = i // 2

    def pop(self):
        if len(self.heap) == 1:
            return None
        if len(self.heap) == 2:
            return self.heap.pop()
        
        res = self.heap[1]
        
        # Move last value to root
        self.heap[1] = self.heap.pop()
        i = 1
        # Percolate down
        while 2 * i < len(self.heap):
            if (2*i+1 < len(self.heap) and self.heap[2*i+1] < self.heap[2*i] and self.heap[i] > self.heap[2*i+1]):
                # swap right child
                self.heap[i], self.heap[2*i+1] = self.heap[2*i+1], self.heap[i]
                i = 2 * i + 1
            elif self.heap[i] > self.heap[2*i]:
                # swap left child
                self.heap[i], self.heap[2*i] = self.heap[2*i], self.heap[i]
                i = 2 * i
            else:
                break
        return res