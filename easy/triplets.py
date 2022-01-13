def compareTriplets(a, b):
    alice, bob = [0,0]
    for i in range(len(a)):
        if a[i] == b[i]:
            alice = alice + 1
            bob = bob + 1
        elif a[i] > b[i]:
            alice = alice + 1
        else:
            bob = bob + 1
    return [alice, bob]
            
compareTriplets([1,2,3], [1,4,2])