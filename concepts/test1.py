while True:
    print("\nSimple Calculator")
    print("Enter '+' to add")
    print("Enter '-' to subtract")
    print("Enter '*' to multiply")
    print("Enter '/' to divide")

    choice = input("Enter operation: ")

    if choice not in ['+', '-', '*', '/']:
        print("Invalid operation. Try again.")
        continue

    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))

    if choice == '+':
        result = a + b
        print("Result:", result)

    elif choice == '-':
        result = a - b
        print("Result:", result)

    elif choice == '*':
        result = a * b
        print("Result:", result)

    elif choice == '/':
        if b != 0:
            result = a / b
            print("Result:", result)
        else:
            print("Error: Cannot divide by zero.")

    # Ask user if they want to continue
    cont = input("Do you want to perform another calculation? (yes/no): ").lower()
    if cont == 'no':
        print("Exiting calculator. Goodbye!")
        break

