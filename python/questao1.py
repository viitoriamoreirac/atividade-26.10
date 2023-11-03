lista1 = input("Digite os elementos da primeira lista separados por espaço: ").split()
lista2 = input("Digite os elementos da segunda lista separados por espaço: ").split()

lista3 = list(set(lista1 + lista2))

print("Lista resultante sem elementos repetidos:", lista3)