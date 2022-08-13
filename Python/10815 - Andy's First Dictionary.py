""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
'*****************************   Jewel Mahmud   *****************************'
'*****************************  CSE-13th,MBSTU  *****************************'
'***************************** Date: 08-08-2022 *****************************'
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
# problem name:
# problem link:

import string
def remove_number_punctuation(st):
    for i in range(10):
        st=st.replace(str(i),' ')
    for i in string.punctuation:
        st=st.replace(str(i),' ')
    return st


all_input=[]
while(1):
    try:
        str_=input()
        str_=remove_number_punctuation(str_)
        all_input.append(str_)
    except EOFError:
        break
# print(all_input)
combine_input=[]
for i in all_input:
    temp=i.strip().split()
    for j in temp:
        j=j.lower()
        combine_input.append(j)
distinct_input=set(combine_input)
distinct_input=sorted(distinct_input)
for i in distinct_input:
    print(i)

