#!/usr/bin/env python3
""" Show unittest setup and teardown hierarchy
"""
import unittest
from fibonacci import fib


def setUpModule():
    ''' SetUpModule() - Sets up everything globally
    Description:
        Only runs once
        - Like opening the exam halls and arranging desks
    '''
    print("Setting up for test cases in this module - Opening Exam halls")

def tearDownModule():
    ''' tearDownModule() - Tidies after all tests in all test cases are run
    Description:
        Only Runs once
        - Like Closing the exam halls after the exams
    '''
    print("Tearing Down the set up - Closing and tiding up exam halls")


class TestFib(unittest.TestCase):
    ''' TestFib - Test Case to test fib
    Description:
        A container of related test methods
        - Like an exam paper for a given subject
    '''
    @classmethod
    def setUpClass(cls):
        ''' setUpClass() - Set up resources shared by the whole class
        Description:
            Runs only once for the entire test case/class
            - Like turning own lights and AC in the exam Room
        params:
         cls - The class itself
        '''
        print("Set up shared resources for TestFib - Turning lights and AC on")

    @classmethod
    def tearDownClass(cls):
        ''' tearDownClass - Tieds up after all the test have been run
        Description:
            Runs only once
            - Like turning off everything after an exam
        params:
            cls - The class itself
        '''
        print("Tiding up after all test in TestFib - Turning off everything")

    def setUp(self):
        ''' setUp - Set up resources shared by each test methods
        Description:
            Run once before each test method
            - Handing students answer sheet and question paper
              - Setting up variables used by each test
        '''
        print("setUp - Setting up for a test")
        self.n = 10

    def tearDown(self):
        ''' tearDown - Tidies up after a test
        '''
        print('tearDown - cleaning up after test')
        del self.n

    def test_fib_assert_equal(self):
        ''' assert equal
        '''
        self.assertEqual(fib(self.n), 55)

    def test_fib_assert_true(self):
        ''' assert true
        '''
        self.assertTrue(fib(self.n) == 55)

