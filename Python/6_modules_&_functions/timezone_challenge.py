import datetime
import pytz

my_timezones = {'5': 'Asia/Dubai',
                '1': 'America/Curacao',
                '2': 'America/Tortola',
                '3': 'Europe/Madrid',
                '4': 'America/Santiago'

                }

print('select from below timezones')

for i in my_timezones:
    print(i + ' : ' + my_timezones[i])

while True:
    t = input()
    if t == '0':
        print('get lost')
        break

    print("UTC time & date for {} is {}".format(my_timezones[t], datetime.datetime.utcnow().strftime('%x %X')))
    print("local time & date for {} is {}".format(my_timezones[t], datetime.datetime.now().strftime('%x %X')))