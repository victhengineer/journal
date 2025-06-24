#!/usr/bin/env python3
""" test_skipping - Demonstrates how to skip tests in unittest
"""
import unittest


class MyTestCase(unittest.TestCase):
    ''' MyTestCase - A Test Case demonstating skipping test in unittest
    '''
    @unittest.skip('demonstrating skipping')
    def test_nothing(self):
        ''' Demonstrates skipping tests using skip() decorator
        '''
        self.fail("Shouldn't happen")

    @unittest.skipIf(mylib.__version__ < (1, 3),
                     "not supported in this library version")
    def test_format(self):
        ''' Test that work for only a certain version of the library
        Uses skip() decorator conditional variant skipIf()
        '''
        pass

    @unittest.skipUnless(sys.platform.startswith('win'), 'requires windows')
    def test_windows_support(self):
        ''' Windows specific testing code
        uses skip() decorator conditional variant skipUnless()
        '''
        pass

    def test_maybe_skipped(self):
        ''' Skipping test by calling skipTest()
        '''
        if not external_resource_available():
            self.skipTest('External resource not availablle')
        pass


# Demonstrate skipping of a TestCase
@unittest.skip('This Test Case will be skipped')
class MySkippedTestCase(unittest.TestCase):
    ''' Skipped TestCase
    '''
    def test_not_run(self):
        pass


# Demonstating Expected failure syntax
class ExpectedFailureTestCase(unittest.TestCase):
    ''' Marking test methods as expected failure
    '''
    @unittest.expectedFailure
    def test_fail(self):
        ''' This wont be included as failure in the TestResult
        '''
        self.assertEqual(1, 0, "broken")
