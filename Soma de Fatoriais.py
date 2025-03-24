import math
import sys

for line in sys.stdin:
    M, N = map(int, line.split())
    print(math.factorial(M) + math.factorial(N))