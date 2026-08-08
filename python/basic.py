# a=int(input("enter a number:"))
# print(a)

# a=int(input("enter 1st number"))
# b=int(input("enter 2nd number "))
# print(a+b)

# a=input("enter a string")
# print(a)

# name="morning star"
# s=18
# print(name+"star")
# print(s)

# a=10
# b=2.3
# print(a+b)

# a=10
# b="2"
# print(a+float(b))

# a=int(input("enter side of sqare"))
# print("area of given square is",a*a)

# a=float(input("enter 1st number"))
# b=float(input("enter second number "))
# print("avarge of two given number is",(a+b)/2)

# a=int(input("enter 1st number"))
# b=int(input("enter second number"))
# if(a>=b):
#     print("True")
# else:
#     print("false")

# n=int(input("enter the number of row"))
# for i in range(1,n+1):
#     for j in range(i):
#         print("*",end="")
#     print()

# n=int(input("enter the number of row"))
# for i in range(1,n+1):
#     for j in range(n,i-1,-1):
#         print("*",end="")
#     print()

# n=int(input("enter the number of row"))
# for i in range (1,n+1):
#     for j in range(1,i+1):
#         print(j,end="")
#     print()

# n=int(input("enter the no of row"))
# for i in range (1,n+1):
#     for j in range(n-i):
#         print(" ",end="")
#     for k in range(2*i-1):
#         print("*",end="")
#     print()
# for i in range(n-1,0,-1):
#     for j in range(n-i):
#         print(" ",end="")
#     for k in range(2*i-1):
#         print("*",end="")
#     print()

# n=int(input("enter 5 digits number"))
# x=n
# ans=0
# y=10
# while(n>0):
#     ans*=y
#     ans+=n%10
#     n//=10
# print(ans)
# if(x==ans):
#     print("true")
# else:
#     print("false")

# n1=int(input("enter first number"))
# n2=int(input("enter second number"))
# n=min(n1,n2)
# x=1
# for i in range(2,n):
#     if(n1%i==0 and n2%i==0):
#         x=i
# print(x)

# for i in range (1,501):
#     x=0
#     a=i
#     while(a>0):
#         y=a%10
#         x+=y*y*y
#         a//=10
#     if(x==i):
#         print(x)

# n=int(input("enter a binary number"))
# x=0
# y=1
# while(n>0):
#     z=n%10
#     x+=z*y
#     y*=2
#     n//=10
# print(x)

# n=int(input("enter a number"))
# ans=""
# while(n>0):
#     z=n%2
#     if(z==0):
#         ans+="0"
#     else:
#         ans+="1"
#     n//=2
# print(ans[::-1])

# n=int(input("enter the number of row"))
# for i in range(n):
#     for j in range(n-i-1):
#         print(" ",end="")
#     num=1
#     for k in range(i+1):
#         print(num,end=" ")
#         num=num*(i-k)//(k+1)
#     print()

# s="morning"
# x=0
# for i in s:
#     x+=1
# print(x)

# s=input("enter a string")
# ans=""
# for i in s:
#     if(i<="z" and i>="a"):
#         ans+=chr(ord(i)-32)
#     else:
#         ans+=i
# print(ans)

# s=input("enter a string")
# str=input("enter a substring")
# n=len(s)
# m=len(str)
# i=0
# j=0
# count=0
# while(i<=n-m):
#     j=0
#     if(s[i]==str[j]):
#         flag=True
#         while(j<m):
#             if(s[i+j]!=str[j]):
#                 flag=False
#             j+=1
#         if(flag==True):
#             count+=1
#     i+=1
# print(count)

# s=input("enter a stirng")
# v=0
# c=0
# d=0
# for i in s:
#     if i in "aeiouAEIOU":
#         v+=1
#     elif i==" " :
#         d+=1
#     elif i<="z" and i>="a" or i>="A" and i<="Z":
#         c+=1
# print("no of contant is",c)
# print("no of vovle is:",v)
# print("no of space is",d)

# s=list(input("enter a string"))
# ans=""
# n=len(s)
# for i in range(n):
#     min=i
#     for j in range(i+1,n):
#         if(s[j]<s[min]):
#             min=j
#     temp=s[min]
#     s[min]=s[i]
#     s[i]=temp
# for i in s:
#     ans+=i
# print(ans)


# s=input("enter a string")
# count=0
# n=len(s)
# for i in range(n):
#     if(s[i]!=" "and(i==0 or s[i-1]==" ")):
#         count+=1
# print(count)

# s=input("enter a sentence")
# mc=0
# n=len(s)
# i=0
# mword=""
# while(i<n):
#     word=""
#     while(i<n and s[i]==" "):
#         i+=1
#     while(i<n and s[i]!=" "):
#         word+=s[i]
#         i+=1
#     if(len(mword)<len(word)):
#         mword=word
# print(mword)


# s=list(input("enter a sesntence"))
# n=len(s)
# i=0
# ans=""
# while(i<n):
#     while(i<n and s[i]==" "):
#         i+=1
#     if(i<n and s[i]>="a" and s[i]<="z"):
#         s[i]=chr(ord(s[i])-32)
#     while(i<n and s[i]!=" "):
#         i+=1
# for i in s:
#     ans+=i
# print(ans)

# s="morning"
# print(s[-3:-1])

# s="morning star"
# print(s.capitalize())
# print(s.title())
# if(s.find("stab")):
#     print("true")
# # print(s)

# for i in range (30):
#     for j in range(30):
#         for k in range(30):
#             if(i*i==j*j+k*k):
#                 print(i,j,k)

# t=tuple(input("enter a tuple"))
# sum=0
# x=0
# for i in t:
#     sum+=t
#     x+=1
# mean=sum/x

# n=int(input("enter size of tupple"))
# t1=()
# print("enter element in 1st tupple")
# for i in range (n):
#     x=int(input())
#     t1=t1+(x,)
# t2=()
# print("enter element in seconde tupple")
# for i in range (n):
#     x=int(input())
#     t2=t2+(x,)
# n=len(t1)
# flag=False
# for i in range(n):
#     if(t1[i]>t2[i]):
#         print("first one is greater")
#         flag=True
#         break
#     elif(t1[i]<t2[i]):
#         print("second  one greater")
#         flag=True
#         break
# if(flag==False):
#     print("both tupple is equal")

# t=()
# a=-1
# b=-1
# n=int(input("enter the size of tupple"))
# print("enter the element in tupple")
# for i in range(n):
#     x=int(input())
#     t+=(x,)
# x=int(input("enter a keyword you want to find first and last occurence of that keyowrd"))
# for i in range(n):
#     if(t[i]==x and a==-1):
#         a=i
#     elif(t[i]==x and a!=-1):
#         b=i
# if(b==-1):
#     b=a
# if(a==-1):
#     print("no such keyword present in given tuple")
# else:
#     print("first occurce of given keyword is ",a)
#     print("last occurece of given keyword is",b)

# s=input("enter  a string")
# n=len(s)
# list=[]
# i=0
# while(i<n):
#     st=""
#     if(s[i]!=" "):
#         j=i
#         while(j<n and s[j]!=" "):
#             st+=s[j]
#             j+=1
#         if(st=="I"):
#             st=""
#             st+="we"
#         elif(st=="my"):
#             st=""
#             st+="our"
#         list.append(st)
#         i=j
#     else:
#         i+=1
# print(list)

# s=input("enter a string")
# word=s.split()
# list=[]
# for i in word:
#     if(i=="I"):
#         list.append("we")
#     elif(i=="my"):
#         list.append("our")
#     else:
#         list.append(i)
# t=tuple(list)
# print(t)


# t=("we","are","proud","indian","we wil develop")
# l=list(t)
# for i in l:
#     if(i=="indian"):
#         l.append("morning star")
# s=tuple(l)
# print(s)

# s1={"mor","nin","ghd","sdfwe"}
# s2={"fhwo","sdf","mor"}
# print(len(s1)+len(s2))
# common=(set(s1)&set(s2))
# print(len(common))
# print(len(s1)-len(common))
# print(len(s1)+len(s2)-len(common))

