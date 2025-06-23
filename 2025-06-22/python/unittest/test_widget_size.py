#!/usr/bin/env python3
"""test_widget_size - Test default widget size
"""
import unittest


class TestWidgetSize(unittest.TestCase):
    ''' TestWidgetSize - Test Case to test default widget size
    '''
    def test_default_widget_size(self):
        '''Tests default widget size
        '''
        widget = Widget('The widget')
        self.assertEqual(widget.size(), (50, 50))
