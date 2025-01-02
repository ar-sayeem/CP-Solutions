s = input()
p = sorted(s)
if ''.join(p) == 'ABC':
    print('Yes')
else:
    print('No')

### Another Approch ###
# s = input()
# if 'A' in s and 'B' in s and 'C' in s:
#     print('Yes')
# else:
#     print('No')