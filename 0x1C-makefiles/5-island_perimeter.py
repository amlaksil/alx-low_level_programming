#!/usr/bin/python3
"""
This module contains a function called
`island_perimeter` that returns the perimeter
of the island described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of island """
    row = len(grid)
    colum = len(grid[0])
    if not grid or row == 0 or colum == 0:
        return 0
    borders = 0
    for x in range(row):
        for y in range(colum):
            if grid[x][y] == 1:
                borders += 4
                if x > 0 and grid[x - 1][y] == 1:
                    borders -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    borders -= 2
    return borders
