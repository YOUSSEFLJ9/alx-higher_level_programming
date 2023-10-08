#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    from calculator_1 import add, sub, mul, div
    if len(sys.argv) == 4:
        a = int(sys.argv[1])
        b = int(sys.argv[3])
        op = sys.argv[2]
        opr = {"+": add, "-": sub, "*": mul, "/": div}
        if sys.argv[2] in list(opr.keys()):
            print("{} {} {} = {}".format(a, op, b, opr[sys.argv[2]](a, b)))
            sys.exit(0)
        else:
            print("Unknown operator. Available operators: +, -, * and /")
            sys.exit(1)
    else:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
