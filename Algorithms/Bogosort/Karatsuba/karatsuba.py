# fast multiplication algorithm

import random
import math

numdig = 3
AA = random.randint(10**(numdig-1),10**(numdig)-1)
BB = random.randint(10**(numdig-1),10**(numdig)-1)
mcounter = 0

def karatsuba(A,B,indent):
    global mcounter
    print(indent*' ' + 'Pair = ' + str(A) + ' ' + str(B))
    if A<10 or B<10:
        mcounter = mcounter + (len(str(A))*len(str(B)))
        print(indent*' ' + 'Base Product = ' + str(A*B))
        return(A*B)
    else:
        AS = [int(i) for i in str(A)]
        BS = [int(i) for i in str(B)]
        sl = min(len(AS),len(BS)) // 2
        A1 = int(''.join(map(str,AS[0:len(AS)-sl])))
        A0 = int(''.join(map(str,AS[len(AS)-sl:])))
        B1 = int(''.join(map(str,BS[0:len(BS)-sl])))
        B0 = int(''.join(map(str,BS[len(BS)-sl:])))
        k1 = karatsuba(A1,B1,indent+2)
        k2 = karatsuba(A1+A0,B1+B0,indent+2)
        k3 = karatsuba(A0,B0,indent+2)
        k = (10**(2*sl))*k1 + (10**(sl))*(k2-k3-k1) + k3
        print(indent*' ' + 'Product = ' + str(10**(2*sl)) + '*' + str(k1) + '+' + str(10**sl) + '*(' + str(k2) + '-' + str(k3) + '-' + str(k1) + ')+' + str(k3) + ' = ' + str(k))
        return(k)

p = karatsuba(AA,BB,0)

print('n = ' + str(numdig))
print('Result: ' + str(p))
print('Number of SDM: ' + str(mcounter))
print('Note that '+str(numdig)+'^lg(3) = ' + str(numdig**math.log(3,2)))
print('Direct Python Calculation: ' + str(AA*BB))
print('Would Take SDM: ' + str(numdig**2))