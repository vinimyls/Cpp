# Rectangle Area

[Challenge](https://www.hackerrank.com/challenges/rectangle-area/problem)

## About

In this challenge, you are required to compute the area of a rectangle using classes.

Create two classes:

## Rectangle

The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space.

## RectangleArea

The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. The RectangleArea class should also overload the display() method to print the area (width x height) of the rectangle.

## Input Format

The first and only line of input contains two space separated integers denoting the width and height of the rectangle.

## Constraints

1 <= width,height <= 100

## Output Format

The output should consist of exactly two lines:

In the first line, print the width and height of the rectangle separated by space.

In the second line, print the area of the rectangle.

## Sample Input
```
10 5
```
## Sample Output
```
10 5
50
```
Explanation

As, width = 10 and height = 5, so area = widthxheight = 50;

