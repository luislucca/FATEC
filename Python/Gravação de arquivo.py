nome = input("Insira o nome do cliente: ")

arq = open('lista.txt', 'w')

arq.write(nome)
arq.close()
