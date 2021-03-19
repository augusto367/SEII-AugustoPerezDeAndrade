Aluno = {'Nome': 'Augusto','Idade' : 22, 'Cursos':['PDS', 'CVRM']}

print(Aluno)

print(Aluno.get('Idade'))

Aluno['Telefone'] = '99321-3169'

print(Aluno)

del Aluno['Idade']

print(Aluno)

for key, value in Aluno.items():
    print(key,":", value)