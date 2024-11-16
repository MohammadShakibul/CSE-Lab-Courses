name=(input("Enter Employee Name: "))
base=int(input("Enter Base Salary: "))
pr=int(input("Enter performance rating(1-5): "))
if pr==1:
    print("Employee John's total salary:", base)
elif pr==2:
    print("Employee John's total salary:", (base+(base*5/100)))
elif pr==3:
    print("Employee John's total salary:", (base+(base*10/100)))
elif pr==4:
    print("Employee John's total salary:", (base+(base*15/100)))
elif pr==5:
    print("Employee John's total salary:", (base+(base*20/100)))


