#!/usr/bin/python3
"""Defines island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island
    described in grid
    Args:
        grid (list): list of list of integers
    Returns:
        int: perimeter of the island
    """
    perimeter = 0
    y = len(grid)
    x = len(grid[0])
    for row in range(y):
        for col in range(x):
            if grid[row][col] == 1:
                perimeter += 4
                if row != 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row != y - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col != 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col != x - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1
    return (perimeter)
