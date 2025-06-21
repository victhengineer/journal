#!/usr/bin/env python3
"""TurtleShell is a shell to use turtle interactively
"""
import cmd, sys
from turtle import *


class TurtleShell(cmd.Cmd):
    ''' TurleShell Class a subclass of Cmd
    '''
    intro = 'Welcome to the turtle shell.  Type help or ? to list commands.\n'
    prompt = '(turtle)'
    file = None

    def do_forward(self, arg):
        ''' Move the turtle forward by specified distance: FORWARD 10
        '''
        forward(*parse(arg))

    def do_right(self, arg):
        ''' Turn turtle right by given number of degrees: RIGHT 20
        '''
        right(*parse(arg))

    def do_bye(self, arg):
        ''' Stop recording, close the turtle window, and exit: BYE
        '''
        print('Thank you for using Turtle')
        bye()


def parse(arg):
    '''Convert a series of zero or more numbers to argument turple
    '''
    return tuple(map(int, arg.split()))

if __name__ == '__main__':
    TurtleShell().cmdloop()
