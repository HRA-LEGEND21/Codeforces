# Python easy to use but I'm in love with C++ -_-

def Main():
    c = 0
    n = int(input())
    
    while n >= 1 :
        x = input().split()
        
        if (int(x[1]) - int(x[0])) > 1:
            c += 1
        n -= 1
    print(c)
    
Main()
