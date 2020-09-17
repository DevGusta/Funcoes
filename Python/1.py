"""
Escreva um programa para ler as notas de duas provas. Faça uma função que receba as duas notas
por parâmetro e calcula a média destes valores. Depois disso o programa deve exibir a mensagem
“Você foi Aprovado!” ou “Você foi Reprovado!”. Esta operação de escrita também deve estar em uma
função. Considere 6.0 a média mínima para aprovação.
"""

def calculaMedia(notaProva1, notaProva2):
    return (notaProva1 + notaProva2)/2


def exibeMesagem(media):
    if media >= 6.0:
        return "Você foi Aprovado!"
    else:
        return "Você foi Reprovado!"


nota1 = float(input("Digite sua primeira nota: "))
nota2 = float(input("Digite sua segunda nota: "))

print(exibeMesagem(calculaMedia(nota1, nota2)))
