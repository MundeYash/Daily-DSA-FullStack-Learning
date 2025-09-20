#Function to find the nth fibonacci number 
def fibbonacci(n):
    if (n<=1): return n
    else : return fibbonacci(n-1)+fibbonacci(n-2)
#Function to print the fibonacci series 
def fibPrint(n):
    for i in range(5):
        print(fibbonacci(i))
#Function for finding factorial of number
def factorial(n):
    if (n<=1): return 1 
    else :return n*factorial(n-1)

#Function to reverse a string 
def reverseString(s):
    #string are immutable in pyton
     # Convert string to list of characters
    char_list = list(s)
    
    n = len(char_list)
    i = 0 
    j = n - 1
    
    while i < j:
        # Swap characters
        temp = char_list[i]
        char_list[i] = char_list[j]
        char_list[j] = temp
        i += 1
        j -= 1
    
    # Join list back into a string
    return ''.join(char_list)
   
#Functino for finding mimimum and maximum element in the array 
def minMax(arr ):
    n = len(arr)
    mini= arr[0]
    maxi = arr[1]
    for i in range (n):
        if arr[i]<mini:
            mini = arr[i]
        if arr[i]>maxi:
            maxi = arr[i]
    ans = [mini,maxi]
    return ans

# Non returning function and with no paramters
def greet():
    print("Good Morning Mitron")

# returning function with passing parameters 
def add(a,b ):
    return (a+b)


print('hello')
#comments in python
print("\nlearning the basics of python")

#important thing is indendation (space from starting )

#data types , variable decalration and initialization 
a=10 # we cannot print the value of variable without intialize it  
print(a)

#in python we explictly do not have any data types like int , float , string , bool (we can give any kind of value to a variable similiarily to javascript)
a ="ramesh pal" # we can change the variable value to one data type to other 
print(a)

# User Input 
a = input(" : Enter value of a ")
print(a)

# 3 time string literal make multi line comment 
"""
FUNCTION DECLARATION  , CALLING , PARAMTER PASSING

"""
greet() # functiona calling 
print(add(10,20))

"""
IF -ELSE STATEMENTS      
"""
a = int(input("enter your age ")) # need to explictly convert from string to int 
if (a>18): 
    print("your are a Adult")
elif( a>=0 and a<=5):
    print("child")
else : 
    print("you are a Minor")

"""
LOOPS CONCEPT IN PYTHON
"""
# for loop

for i in range (1,11):
    print(2*i," ")

# while loops 
i=2

while i<=10:
    print(i)
    i+=2

#do while concept doesn't exists in python

"""
ARRAY CONCEPT IN PYTHON 
"""
#array /List declaration 
a =[2,4,1,10,100]
#size finding
n = len(a)
print(n)
print(a)

#array passing as argument
ans = minMax(a)
print(ans)

#string passing as arguement 
s = "yash Munde"
print(len(s))
print(s)
rev =reverseString(s)
print(rev)

#recursion implementation

fact  = factorial(5)
print(fact)

fibPrint(5)
