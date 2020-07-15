# Python program to sort one list using the other list 
  
list1=['a' ,'b','c','d','e','f','g','h']
list2=[0,1,1,0,2,2,0,1]

Z = [x  for _,x in sorted(zip(list2,list1))]
print('Output: ',Z)