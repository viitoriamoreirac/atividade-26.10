agenda = []

def cadastrar_registro():
    nome = input("Nome: ")
    endereco = input("Endereço: ")
    telefone = input("Telefone: ")
    registro = {"Nome": nome, "Endereço": endereco, "Telefone": telefone}
    agenda.append(registro)

def pesquisar_registro():
    nome = input("Digite o nome a ser pesquisado: ")
    for registro in agenda:
        if registro["Nome"] == nome:
            print("Registro encontrado:")
            print("Nome:", registro["Nome"])
            print("Endereço:", registro["Endereço"])
            print("Telefone:", registro["Telefone"])
            return
    print("Registro não encontrado.")

def classificar_registros():
    agenda.sort(key=lambda x: x["Nome"])

def apresentar_registros():
    print("Registros na agenda:")
    for i, registro in enumerate(agenda, start=1):
        print(f"Registro {i}:")
        print("Nome:", registro["Nome"])
        print("Endereço:", registro["Endereço"])
        print("Telefone:", registro["Telefone"])

while True:
    print("\nMenu:")
    print("1 - Cadastrar 10 registros")
    print("2 - Pesquisar um registro pelo nome")
    print("3 - Classificar registros por nome")
    print("4 - Apresentar todos os registros")
    print("5 - Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        for _ in range(10):
            cadastrar_registro()
    elif opcao == "2":
        pesquisar_registro()
    elif opcao == "3":
        classificar_registros()
    elif opcao == "4":
        apresentar_registros()
    elif opcao == "5":
        break
    else:
        print("Opção inválida. Tente novamente.")
