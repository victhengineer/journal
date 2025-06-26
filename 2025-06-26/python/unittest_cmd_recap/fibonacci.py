#!/usr/bin/env python3
""" Calculates the nth Fibonacci number
"""


def fib(n):
    '''fib(n)
        Calculates nth Fibonacci number
    params:
        n - Position of the fibonacci number
    Returns:
        The nth Fibonacci number
    '''
    return 1 if n <= 2 else fib(n - 1) + fib(n - 2)

