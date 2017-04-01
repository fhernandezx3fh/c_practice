import os
import re

print os.name
print os.getcwd()
for file in os.listdir(os.getcwd()):
  if file.find('Exercise') != -1:
    print file
    file2 = file.replace(' ','_').lower().replace(',','')
    file2 = file2.replace('(', '').replace(')', '')
    os.rename(file, file2.replace(file2.split('_')[1], file2.split('_')[1].zfill(2)))
# print re.sub('[^a-zA-Z0-9 \n\.]', '', file)