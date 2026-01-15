from collections import deque

# Key Rule (Memorize This 🧠)

# rotate(n)
# n > 0 → rotate RIGHT
# Each right rotation:
#   💠Takes last element
#   💠Moves it to the front
# n < 0 → rotate LEFT
# Each left rotation:
#     💠Takes first element
#     💠Moves it to the end
# Rotation is circular

dq=deque(['a', 'b', 'c'])
print(dq)  # Output: deque(['a', 'b', 'c'])

dq.append('d')
print(dq)  # Output: deque(['a', 'b', 'c', 'd'])

dq.appendleft('z')
print(dq)  # Output: deque(['z', 'a', 'b', 'c', 'd'])

print(dq.pop()) #it will return the rightmost element and remove it from the deque
print(dq)  # Output: deque(['z', 'a', 'b', 'c'])

print(dq.popleft()) #it will return the leftmost element and remove it from the deque
print(dq)  # Output: deque(['a', 'b', 'c'])

dq.extend(['e', 'f'])
print(dq)  # Output: deque(['a', 'b', 'c', 'e', 'f'])

dq.extendleft(['y', 'x'])
print(dq)  # Output: deque(['x', 'y', 'a', 'b', 'c', 'e', 'f'])

dq.rotate(2) # rotate to right by 2
print(dq)  # Output: deque(['e', 'f', 'x', 'y', 'a', 'b', 'c'])

dq.rotate(-1) # rotate to left by 1
print(dq)  # Output: deque(['f', 'x', 'y', 'a', 'b', 'c', 'e'])

print(len(dq)) # length of deque
print(dq.count('a')) # count of 'a' in the deque

dq.clear()
print(dq)  # Output: deque([])