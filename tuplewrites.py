#! /usr/bin/python

newtup=("hello","world","how","are","you") #Tuple is ordered un changeable no duplicates allowed 

print(newtup)

print(newtup[0])

#newtup[0]="peter" # TypeError: 'tuple' object does not support item assignment
#since python is an interpreted language interpreter breaks here

newlist=["Hello","World","How","Are","You","World"]
newlist[0]="Broad" #list is ordered and changeable duplicates allowed  
print(newlist[0])

newset={"Hello","world","How","Are","You","world"} #unordered unindexed no duplicates 
# print(newset[0]) # TypeError: 'set' object does not support indexing
print(newset) #Each Time the result changes and the duplicate item is missing from the results

for i in newset:
    print("Dude "+i)


