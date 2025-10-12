# n = int(input("enter a number:"))
# i =2
# while(i<=n):
#     if i<n:
#         print(i,end='+')
#     else :
#         print(i)
#     i=i+1

# while(i<=n):
#     if i<n:
#         print(i,end='+')
#     else :
#         print(i,end='=')
#     i=i+1

# sum = 0
# while(i<=n):
#     sum = sum+i
#     if i<n:
#         print(i,end='+')
#     else :
#         print(i,end='=')
#     i=i+1
# print(sum)

# factorial = 1
# while(i<=n):
#     factorial = factorial*i
#     if i<n:
#         print(i,end='*')
#     else :
#         print(i,end='=')
#     i=i+1
# print(factorial)


# reverse trignle
# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print('*'* (n-i) +' '* i)
#     i= i+1


# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print(' '* (n-i) +'* '* i)
#     i= i+1

# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print('*'* (6-i)+' '* i)
#     i= i+1

# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print(' '* i+'* ' * (n-i))
#     i= i+1
 

# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print('* '*i + '  '*(n-i))
#     i = i+1
  
# i= i-2
# while(i>=1):
#     print('* ' *i + '  '*(n-i))
#     i=i-1

# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print('  '*(n-i) +'* '*i)
#     i = i+1
  
# i= i-2
# while(i>=1):
#     print('  '*(n-i)+'* '*i)
#     i=i-1

# n = int(input("enter any value:"))
# i = 1
# while(i<=n):
#     print(' '*(n-i) +'* '*i)
#     i = i+1
  
# i= i-2
# while(i>=1):
#     print(' '*(n-i)+'* '*i)
#     i=i-1


# Q
# n = int(input("enter any value:"))
# i = 0
# while(i<n):
#     print(''*i+'*'*(n-i))
#     i = i+1
  
# i= i-2
# while(i>=0):
#     print(''*i+'*'*(n-i))
#     i=i-1


# Q
# n = int(input("enter any value:"))
# i = 0
# while(i<n):
#     print(' '*i +'* '*(n-i))
#     i = i+1
  
# i= i-2
# while(i>=0):
#     print(' '*i+'* '*(n-i))
#     i=i-1

# Q number of digit
# n = int(input("enter a value"))
# x = y = n
# td = sum = 0


# while(n>0):
#     td = td + 1
#     n = n//10
# print("number of digit=",td)




# Q armstrong
n = int(input("enter a value"))
x = y = n
td = sum = 0


while(n>0):
    td = td + 1
    n = n//10
print("number of digit=",td)
while(x>0):
    ls = x%10
    sum = sum+ls**td
    x = x//10

if(y == sum):
    print("armstrong")
else:
    print("not armstrong")



# n = int(input("eneter a nunber:"))
# i =1
# while(i<=n):
#     print(' '*(n-i)+'*'*(i))
#     i= i+1

# n = int(input("eneter a nunber:"))
# i =0
# while(i<=n):
#     print(''*i+'*'*(n-i))
#     i= i+1


