def is_leap(year):
    if ((year%4==0 and year%100!=0) or (year%100==0 and year%400==0)):
        a=True
    else:
        a=False
    return (a)

year = int(input())
print(is_leap(year))
