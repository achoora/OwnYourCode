#! /usr/bin/python 

print('Phone Details')
type(1) # <class 'int'>
#The keys to the dictionary should be immutable , int is an immutable type ,string , double float all are immutable 
phoneinventory={6233:'Model Name', 9000:'Price',899:'',899:'1',899:'1234'} #The last value  of the key is taken 
#phoneinventory[1] # KeyError: 1 The key 1 is not available in the dicitonary 
print(phoneinventory[6233]) # Model Name
print(phoneinventory[9000]) # Price 
print(phoneinventory[899]) # Model Name
#print(phoneinventory[9000]) # Price 
bookprice={'English':[100,200,300],'French':[400,500,600]}
print(bookprice['English']) #prints the list 
# print(bookprice[:]) #  print(bookprice[:]) TypeError: unhashable type: 'slice'
# print(bookprice[0]) #Key Error 




