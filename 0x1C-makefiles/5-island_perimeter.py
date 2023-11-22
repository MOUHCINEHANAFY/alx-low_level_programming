#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""

def island_perimeter(grid):
    """Calculate the perimeter of the island represented by the grid.

    Args:
    grid (list[list[int]]): A 2D list of integers representing the island.

    Returns:
    int: The perimeter of the island.
    """
    height, width = len(grid), len(grid[0])
    island_size, shared_edges = 0, 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                island_size += 1
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    shared_edges += 1
                # Check upper neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    shared_edges += 1

    # Calculate perimeter using the formula: perimeter = 4 * island_size - 2 * shared_edges
    return island_size * 4 - shared_edges * 2
