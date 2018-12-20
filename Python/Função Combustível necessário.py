distancia_km = float(input("Insira a distância em Km: ")
consumo_kmL = float(input("Insira o consumo de combustivel, em litros, em 1 Km: ")

def calcula_litros(km,kmL):
    litros_necessarios = kmL/km
    print(litros_necessarios)

calcula_litros(distancia_km, consumo_kmL)
