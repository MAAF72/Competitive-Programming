from math import sqrt
Point1 = list(map(float, input().split()))
Point2 = list(map(float, input().split()))
print("{0:.4f}".format(sqrt((Point2[0] - Point1[0])**2 + (Point2[1] - Point1[1])**2)))