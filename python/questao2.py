matriz = []
for i in range(4):
    linha = input(f"Digite 5 elementos para a linha {i + 1} separados por espaço: ").split()
    matriz.append(linha)

print("Matriz:")
for linha in matriz:
    print(" ".join(linha))