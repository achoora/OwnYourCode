'''
Regular expression in python 
'''
print ('Regular Expression Parsing')
import re 

fe_pattern ="fe"
end_one ="01"
interrupt_string ="00 fb 01  |................|fd  00 03  |................| 00000020"
#fe_match = re.search(rf'f.*?01', interrupt_string,flags=re.IGNORECASE)
#fc_match = re.search(rf'fd.*?03', interrupt_string,flags=re.IGNORECASE)
split_string = interrupt_string.split('|')
print("First Part")
print(split_string[0])
print("Second Part")

print(split_string[1])

print("Third Part")

print(split_string[2])

fe_vector_match = re.search(r'\w*\s([0-9a-zA-Z][0-9a-zA-Z]\s){1,16}.*', split_string[0],flags=re.IGNORECASE)

fc_vector_match = re.search(r'\w*\s([0-9a-zA-Z][0-9a-zA-Z]\s){1,16}.*', split_string[2],flags=re.IGNORECASE)

fe_level_match = re.search(r'\w*\s([0-9][1-9]).*', split_string[0],flags=re.IGNORECASE)


fc_level_match = re.search(r'\w*\s([0-9][1-9]).*', split_string[2],flags=re.IGNORECASE)
# print(fe_match.group(0))
#print(fe_match.group(0))

print(fe_vector_match.group(1))
#print(fe_match.group(2))

print(fc_vector_match.group(1))

#print(fc_match.group(1))
print(fe_level_match.group(1))
print(fc_level_match.group(1))
'''
if((fe_match != None) & (fc_match !=None)):
    print("match")
    print(fe_match.group())
    print(fc_match.group())
    
'''