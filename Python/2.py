"""
Faça uma função que receba como parâmetro o número de lados de um polígono e:
1. Se o número de lados for igual a 3, escrever TRIÂNGULO.
2. Se o número de lados for igual a 4, escrever QUADRADO.
3. Se o número de lados for igual a 5, escrever PENTÁGONO.
4. Se o número de lados for diferente de 3, 4 ou 5, escrever VALOR INVÁLIDO.
"""


def definePoligono(numeroLados):
    if numeroLados == 3:
        return "TRIÂGULO"
    if numeroLados == 4:
        return "QUADRADO"
    if numeroLados == 5:
        return "PENTÁGONO"
    return "VALOR INVÁLIDO"


lados = int(input("Informe o número de lados do polígono: "))
print(definePoligono(lados))
