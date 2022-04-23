import numpy as np


def pick2(arr, leng):
    ran = np.random.randint(0, leng, 2)
    while ran[0] == ran[1]:
        ran = np.random.randint(0, leng, 2)

    return arr[ran]


# 1: C
# 0: P
lo1 = np.zeros(10)
lo2 = np.zeros(10)
lo1[1:8] = 10
lo2[1:9] = 1
N = 100000
count1 = 0
count2 = 0
for _ in range(N):

    # take 2 sp from lo1 and put into lo2
    take1 = pick2(lo1, 10)
    result = np.concatenate((lo2, take1))
    take2 = pick2(result, 12)

    # check
    s = take2.sum()
    if s == 11 or s == 2 or s == 20:
        count1 += 1
        if s == 11:
            count2 += 1

print(count1, count2)
