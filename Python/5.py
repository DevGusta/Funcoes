"""
Escreva um programa que leia o raio de um círculo e faça duas funções: uma função chamada area
que calcula e retorna a área do círculo e outra função chamada perimetro que calcula e retorna o
perímetro do círculo.
1. Área = π * r2
2. Perímetro = π * 2 * r
"""


def calculaArea(raio):
    return 3.14 * raio ** 2


def calculaPerimetro(raio):
    return 3.14 * 2 * raio


raioCirculo = float(input("Informe o raio do círculo: "))
print(f'A área do círculo é: {calculaArea(raioCirculo)}')
print(f'O perímetro do círculo é: {calculaPerimetro(raioCirculo)}')
