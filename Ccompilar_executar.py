print(" >> 1.C \n >> 2.C++")
typeLingua = int(input("Digite o numero da liguagem que deseja compilar:   "))

if typeLingua == 1:

    import os

    # Obter o diretório atual
    diretorio_atual = os.getcwd()

    # Listar todos os arquivos .c no diretório atual
    arquivos_c = [f for f in os.listdir(diretorio_atual) if f.endswith('.c')]

    # Exibir a lista de arquivos para que você possa escolher qual compilar e executar
    print("Arquivos disponíveis para compilação:")
    for i, arquivo in enumerate(arquivos_c, start=1):
        print(f" >> {i}. {arquivo}")

    # Pedir ao usuário que digite o número do arquivo a ser compilado e executado
    opcao = int(input("Digite o número do arquivo que você deseja compilar e executar: ")) - 1

    # Verificar se a opção é válida
    if opcao >= 0 and opcao < len(arquivos_c):
        arquivo_escolhido = arquivos_c[opcao]
        nome_sem_extensao = os.path.splitext(arquivo_escolhido)[0]
    
        # Compilar o arquivo escolhido
        os.system(f"gcc -o {nome_sem_extensao}.exe {arquivo_escolhido}")
    
        # Executar o programa compilado
        os.system(f"{nome_sem_extensao}.exe")
    else:
        print("Opção inválida.")


elif typeLingua == 2:
    import os

    # Obter o diretório atual
    diretorio_atual = os.getcwd()

    # Listar todos os arquivos .cpp no diretório atual
    arquivos_cpp = [f for f in os.listdir(diretorio_atual) if f.endswith('.cpp')]

    # Exibir a lista de arquivos para que você possa escolher qual compilar e executar
    print("Arquivos disponíveis para compilação:")
    for i, arquivo in enumerate(arquivos_cpp, start=1):
        print(f" >> {i}. {arquivo}")

    # Pedir ao usuário que digite o número do arquivo a ser compilado e executado
    opcao = int(input("Digite o número do arquivo que você deseja compilar e executar: ")) - 1

    # Verificar se a opção é válida
    if opcao >= 0 and opcao < len(arquivos_cpp):
        arquivo_escolhido = arquivos_cpp[opcao]
        nome_sem_extensao = os.path.splitext(arquivo_escolhido)[0]
    
        # Compilar o arquivo escolhido
        os.system(f"g++ -o {nome_sem_extensao}.exe {arquivo_escolhido}")
    
        # Executar o programa compilado
        os.system(f"{nome_sem_extensao}.exe")
    else:
        print("Opção inválida.")

