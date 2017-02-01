s1, s2 = [''.join(list(filter(lambda x: x!=' ', list(input())))) for _ in range(2)]
print('Palidromes' if s1 == s2[::-1] else 'Non palindromes')
