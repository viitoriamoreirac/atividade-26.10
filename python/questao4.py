frase = input("Digite uma frase: ")

indice_caracteres = {}
for i, caracter in enumerate(frase):
    if caracter.isalpha():
        indice_caracteres[caracter] = i

print("Dicionário de caracteres e seus índices:", indice_caracteres)