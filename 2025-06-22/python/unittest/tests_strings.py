#!/usr/bin/env python3
''' Testing common string methods using unittests
'''
import unittest


class TestStrings(unittest.TestCase):
    ''' TestStrings - Test case to test common string methods
    '''
    def test_upper(self):
        ''' Test upper() method
        '''
        self.assertEqual('foo'.upper(), 'FOO')

    def test_isupper(self):
        ''' Test isupper() method
        '''
        self.assertTrue('FOO'.isupper())
        self.assertFalse('Foo'.isupper())

    def test_split(self):
        ''' Test split() method
        '''
        s = 'hello world'
        self.assertEqual(s.split(), ['hello', 'world'])
        with self.assertRaises(TypeError):
            s.split(2)


if __name__ == '__main__':
    unittest.main()
