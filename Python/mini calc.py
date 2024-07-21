
print("           CALCULATOR               ")
i=0
while (i==0) :
    num1= float(input("Select the first number:"))
    opt = input("What function do you want to perform?(+,-,*,/)") 
    num2= float(input("Select the second number:"))
    

    if opt== "+":
        answer =num1 + num2
        print(num1 ,"+", num2,"=",answer)
    elif opt== "-": 
        answer =num1 - num2
        print(num1 ,"-", num2,"=",answer)
    elif opt== "*":
        answer =num1 * num2
        print(num1 ,"*", num2,"=",answer)
    elif opt== "/":
        answer =num1 / num2 
        print(num1 ,"/", num2,"=",answer)
    else: 
        print("Please select a correct operation") 
    cont=input("Do you wish to continue?(Yes/No)") 
    if cont.upper()== "NO":
        print("END")
        i=10 
    else:
        i=0
        
 