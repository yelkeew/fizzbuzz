#!/usr/bin/python

import sys

for i in range(1, 100 + 1):
    p = False
    if not (i % 3):
        p = True
        sys.stdout.write('fizz')
    if not (i % 5):
        p = True
        sys.stdout.write('buzz')
    if not p:
       print i
    else:
        print ''
