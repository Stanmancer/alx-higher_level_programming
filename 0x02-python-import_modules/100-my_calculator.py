#!/usr/bin/python3

if __name__ == '__main__':
    import calculator_1 as calc
    import sys

    if len(sys.argv) != 4:
        sys.stderr.write("Usage: {} <a> <operator> <b>\n".format(sys.argv[0]))
        sys.exit(1)

    a = int(sys.argv[1])
    b = int(sys.argv[3])
    operator = sys.argv[2]

    if operator not in ['+', '-', '*', '/']:
        sys.stderr.write("Unknown operator. Available operators: +, -, * and /\n")
        sys.exit(1)
    
    if operator == '+':
        result = calc.add(a, b)
        print("{} {} {} = {}".format(a, operator, b, result))

    elif operator == '-':
        result = calc.sub(a, b)
        print("{} {} {} = {}".format(a, operator, b, result))

    elif operator == '*':
        result = calc.mul(a, b)
        print("{} {} {} = {}".format(a, operator, b, result))

    elif operator == '/':
        result = calc.div(a, b)
        print("{} {} {} = {}".format(a, operator, b, result))
