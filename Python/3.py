"""
Crie uma função que recebe como parâmetro um número inteiro e retorna o seu dobro.
"""


def dobraValor(numero):
    return numero * 2


numeroSolicitado = int(input("Digite um número inteiro: "))
print(f'O dobro do número informado é : {dobraValor(numeroSolicitado)}')
