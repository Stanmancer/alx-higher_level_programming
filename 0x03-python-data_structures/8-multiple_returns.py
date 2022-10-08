#!/usr/bin/python3

def multiple_returns(sentence):

    first = sentence[0]
    lenght = len(sentence)

    if len(sentence) is None:
        first = None

    return lenght, first
