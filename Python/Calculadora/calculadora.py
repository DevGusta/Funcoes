def menu():
    print("Calculadora: 1 - Adição 2 - Subtração 3 - Multiplicação 4 - Divisão 5 - Sair do programa")
    operacao = int(input("Selecione uma opção: "))
    return operacao


def adicao(n1, n2):
    return n1 + n2


def subtracao(n1, n2):
    return n1 - n2


def multiplicacao(n1, n2):
    return n1 * n2


def divisao(n1, n2):
    return n1 / n2
