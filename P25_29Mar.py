import bs4, requests, re, time
# import pyttsx3
# from tabulate import tabulate
# from P5Apr import write
res=requests.get('http://www.mohfw.gov.in/')
ressoup=bs4.BeautifulSoup(res.text, 'lxml')
listres=ressoup.select('.bg-blue .mob-hide')
listres1=ressoup.select('.bg-green .mob-hide')
listres2=ressoup.select('.bg-red .mob-hide')
coviddata=ressoup.select('.fullbol .coviddata')
covidtravel=ressoup.select('.fullbol .coviddataval')
# listres3=ressoup.select('.bg-orange')
regex=re.compile(r'\d+\s\w+\s\d+\S\s\d+\S\d+')
timestamp=regex.findall(str(ressoup))
# engine = pyttsx3.init('sapi5')
# rate=engine.getProperty('rate')
# engine.setProperty('rate', 130)

# engine.say("Hi! I'm your Python Assistant, Anna...")
# engine.say('Getting Data...')
# engine.runAndWait()
print('COVID19 Cases in INDIA Highlights')
print('*********************************', end='')
print('\n')
# print('Total Confirmed Cases: ' + str(int(listres[0].getText())+int(listres1[0].getText())+int(listres2[0].getText())))
print('Active COVID19 Cases (*): ' + listres[1].getText())
print('Cured/Discharged Cases (*): ' + listres1[1].getText())
print('Death Cases (*): ' + listres2[1].getText())
print('Total Vaccination (*): ' + coviddata[0].getText() + "    " + covidtravel[0].getText())
print("\n(*) => Status change since Yesterday")
# print('Migrated COVID19 Cases: ' + listres3[0].getText(), end='')
# write(str(int(listres[0].getText())+int(listres1[0].getText())+int(listres2[0].getText())))
# write(listres[0].getText())
# write(listres1[0].getText())
# write(listres2[0].getText())
# # write(listres3[0].getText())
# write(timestamp[0])
# print('\n')
# print('COVID19 Cases Statistic State-wise')
# print('**********************************', end='')
# print('\n')

# all=ressoup.select('.table.table-striped tbody')
# nameregex=re.compile(r'<td>.*</td>')
# final=nameregex.findall(str(all[0]))
# headers=['S.No.', 'Name of State/UT', 'Total Conf. Cases', 'Cured/Discharged/Migrated', 'Death']
# body=[]
# lis=['1']
# i=1
# while  i<165:
#     finalsoup=bs4.BeautifulSoup(final[i], 'lxml')
#     if i%5!=0:
#         lis.append(finalsoup.getText())
#     else:
#         body.append(tuple(lis))
#         lis=[]
#         lis.append(finalsoup.getText())
#     i=i+1

# print(tabulate(body, headers=headers), end='')
print('\n')
print('Source: MOHFW')
print('Last Updated: ', end='')
print(timestamp[0] + " IST")
print('\n')
input('Press ENTER to Exit ')

# engine.say('Covid19 Cases in INDIA Highlights, as on' + timestamp[0])
# engine.say('Ministry of Health and Family Welfare says...')
# time.sleep(3)
# engine.say('Total Confirmed Cases: ' + str(int(listres[0].getText())+int(listres1[0].getText())+int(listres2[0].getText())))
# engine.say('Active Covid19 Cases: ' + listres[0].getText())
# engine.say('Discharged Cases: ' + listres1[0].getText())
# engine.say('Death Cases: ' + listres2[0].getText())
# engine.say('Migrated Covid19 Cases: ' + listres3[0].getText())

# engine.runAndWait()
