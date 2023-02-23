#!/usr/bin/python3
"""Module that contains island_perimeter function"""

def island_perimeter(grid):
    """Function that returns perimeter of island described in grid"""

    perimeter = 0

    nrows = len(grid)

    if grid != []:
        ncol = len(grid[0])

    for a in range(nrows):
        for b in range(ncol):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == nrows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == ncol or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
