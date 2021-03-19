if True:
    print('Passou pelo condicional 1')

if False:
    print('Passou pelo condicional 2')

texto = 'sim'
if texto == 'sim':
    print('Passou pelo condicional 3')

if (3 > 2):
    print('Passou pelo condicional 4')

if (1 >= 2):
    print('Passou pelo condicional 5')
else:
    print('Não passou pelo condicional 5')

user = 'Admin'
logged_in = 'True'

if user == 'Admin' and logged_in:
    print('Adm page')