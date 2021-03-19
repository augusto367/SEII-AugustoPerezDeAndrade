Bandas = ['The Beatles', 'Black Sabbath', 'Iron Maiden', 'Queen']

print(Bandas)
print(Bandas[0])
print(Bandas[2])
print(Bandas[2:])

Bandas.insert(0,'Scorpions')
print(Bandas)

Bandas.pop()
print(Bandas)

nums = [1, 4, 6, 9, 2]
print(sorted(nums))
print(min(nums))
print(sum(nums))

for Index, Banda in enumerate(Bandas):
    print(Index, Banda)