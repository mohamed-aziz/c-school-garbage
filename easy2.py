# print('\n'.join(map(lambda x: str(ord(x)), [input() for _ in range(int(input()))][::-1])))

a = [('Mohamed', 1), ('', -1), ('', 3), ('', 4)]
a.sort(key=lambda x: x[1])
print(a)

