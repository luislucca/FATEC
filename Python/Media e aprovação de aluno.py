p1 = int(input("Insira a nota P1 do aluno: "))
p2 = int(input("Insira a nota P2 do aluno: "))
faltas = int(input("Insira a quatidade de faltas do aluno: "))

media = (p1 + p2)/2
percentualFaltas = (faltas * 100)/20

if percentualFaltas > 30 :
    print("Aluno reprovado pelo número de faltas!")
elif media >= 6 :
    print("Aluno aprovado com media igual a ", media,"!")
else :
    p3 = int(input("Insira a nota P3: "))

    media = (media + p3)/2

    if media >= 6 :
        print("Aluno aprovado com media igual a ", media,"!")
    else :
        print("Aluno reprovado com média igual a ", media,"!")
