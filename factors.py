#!/usr/bin/python3
import sys


def sq_rt(x):
    """ Find square root """
    return int(x**0.5)


def find_factor(n):
    """Find a factor pair for a given number n."""
    if n % 2 == 0:
        return n // 2, 2
    for p in range(2, sq_rt(n) + 1):
        if n % p == 0:
            return n // p, p
    return None


if len(sys.argv) != 2:
    sys.exit(f"Wrong usage: {sys.argv[0]} <file_path>")
else:
    with open(sys.argv[1]) as f:
        for line in f:
            num = int(line)
            factor2, factor1 = find_factor(num)
            print(f"{num}={factor2}*{factor1}")
