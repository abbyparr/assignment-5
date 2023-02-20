num_rows = 0
while(num_rows <= 0):
    num_rows = input('input number for pascals triangle)
                 
for i in num_rows:
    row = ''
    value = 1
    for j in i + 1:
        value = value * (i-j+1)/j
    row += ' '
    row += num_rows
    
    print(row)
