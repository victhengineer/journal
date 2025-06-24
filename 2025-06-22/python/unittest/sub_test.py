#!/usr/bin/env python3
""" Demonstate how to use subTest context manager
"""
import unittest


class TestNumbers(unittest.TestCase):
    ''' Test if a number is even by iterating
    over numbers from 0 to 6
    '''
    def test_even(self):
        ''' Test that numbers between 5 and 0 are all even
        '''
        for i in range(0, 6):
            with self.subTest(i=i):
                self.assertEqual(i % 2, 0)
