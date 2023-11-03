matriz = []
for i in range(15):
    linha = list(map(int, input(f"Digite 15 elementos para a linha {i + 1} separados por espaço: ").split()))
    matriz.append(linha)

soma = 0
for i in range(15):
    if matriz[i][i] % 2 == 0:
        soma += matriz[i][i]

print("Somatório dos elementos pares na diagonal principal:", soma)
