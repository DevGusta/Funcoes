from Calculadora import calculadora

while True:
    operacao = calculadora.menu()

    if operacao == 1:
        numero1 = float(input("Digite o primeiro numero: "))
        numero2 = float(input("Digite o segundo numero: "))
        print(f"O resultado é: {calculadora.adicao(numero1, numero2)}")

    elif operacao == 2:
        numero1 = float(input("Digite o primeiro numero: "))
        numero2 = float(input("Digite o segundo numero: "))
        print(f"O resultado é: {calculadora.subtracao(numero1, numero2)}")

    elif operacao == 3:
        numero1 = float(input("Digite o primeiro numero: "))
        numero2 = float(input("Digite o segundo numero: "))
        print(f"O resultado é: {calculadora.multiplicacao(numero1, numero2)}")

    elif operacao == 4:
        numero1 = float(input("Digite o primeiro numero: "))
        numero2 = float(input("Digite o segundo numero: "))
        print(f"O resultado é: {calculadora.divisao(numero1, numero2)}")

    if operacao == 5:
        print("Até mais!!")
        break

