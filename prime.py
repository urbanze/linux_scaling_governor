def isPrime(x):
    
    if x < 2:
        return 0
    
    for i in range(2, x):
        if (x % i) == 0:
            return 0
    
    return 1;




counter = 0

for i in range(1, 20000):
    if isPrime(i) == 1:
        counter += 1


print("Total: ", counter)
