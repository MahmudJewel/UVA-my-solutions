""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
'*****************************   Jewel Mahmud   *****************************'
'*****************************  CSE-13th,MBSTU  *****************************'
'***************************** Date: 09-08-2022 *****************************'
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
# problem name:
# problem link:

# from os import linesep as endl
import math
PI=math.pi 
SIN=math.sin

while(1):
    try:
        radius, number_of_sides=map(float, input().split())
        value=0.5*number_of_sides*radius**2
        angle=2*PI/number_of_sides
        area=value*SIN(angle)
        area=round(area, 3)
        print('%.3f'%area)
        # print(area, '\n')
    except EOFError:
        break
