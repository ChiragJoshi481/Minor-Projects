def max_num(num1,num2,num3):
    if num1>=num2 and num1>=num3:
        return print(str(num1) + " is the largest number")
    elif num2>=num1 and num2>=num3:
        return print(str(num2) + " is the largest number")
    else:
        return print(str(num3) + " is the largest number")
    
        
max_num(3,7,5)