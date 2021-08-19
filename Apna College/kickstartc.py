def lexo_small(n, k):
    arr = ""
    for i in range(n):
        arr += 'a'

    for i in range(n-1, -1, 1-):
        k -= i
        if(k >= 0):
            if(k >= 26):
                arr = arr[:i]+'z'+arr[i+1:]
                k = k-26
            else:
                c = (k+97-1)
                arr = arr[:i]+chr(c)+arr[i+1:]
                k = k-ord(arr[i])-ord('a')+1
        else:
            break
        k += 1
    return arr


t = input()
for i in range(1, t+1):
