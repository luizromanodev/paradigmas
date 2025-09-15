num = 10
print(f"Initial num: {num} (type: {type(num)})")

print("Changing num to a string...")
num = 'dez'
print(f"Changed num: {num} (type: {type(num)})")

print("\nTrying to add 5 to num...")
try:
    result = num + 5
    print(f"Result: {result}")
except TypeError as e:
    print(f"Error: {e}")