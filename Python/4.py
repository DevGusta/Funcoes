"""
Faça uma função que recebe um número inteiro por parâmetro e retorna verdadeiro se for par e falso
se for ímpar
"""


def imparPar(numero):
    if numero % 2 == 0:
        return True
    else:
        return False


numeroSolicitado = int(input("Informe um número: "))

print(f'O numero informado é par? {imparPar(numeroSolicitado)}')