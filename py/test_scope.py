x = 10
print(f"1. Valor de 'x' global foi definido como: {x}")

def f():
    print(f"4. Dentro de f(), valor de 'x' é: {x}")

def g():
    x = 20
    print(f"3. Dentro de g(), valor de 'x' local é: {x}. Agora chamando f()...")
    f()

print("2. Chamando g()...")
g()