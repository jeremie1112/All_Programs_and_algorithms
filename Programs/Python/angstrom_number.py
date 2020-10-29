def isArmstrong(x): 
    num = int(x)
    sum = 0  
    temp = num  
  
    while temp > 0:  
        digit = temp % 10  
        sum += digit ** 3  
        temp //= 10  
  
    if num == sum:  
        print(num,"is an Armstrong number")  
    else:  
        print(num,"is not an Armstrong number")  
    return isArmstrong

print(isArmstrong(13))