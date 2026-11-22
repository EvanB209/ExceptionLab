//
// Created by Christopher Vaughn on 10/29/25.
//
/**
 * @file GeometryUtils.cpp
 * @brief Implements the geometry utility functions.
 *
 * This file contains the function definitions for calculating the areas
 * of squares, rectangles, and circles. It is responsible for
 * validating input and throwing exceptions on invalid data.
 *
 * @author [Your Name Here]
 * @date [Current Date]
 * @version 1.0
 */

#include "GeometryUtils.h"
#include <stdexcept>    // For std::invalid_argument
#include <string>       // For std::to_string
#include <numbers>

using namespace std;

/**
 * @brief Calculates the area of a square.
 */
double calculateArea(double side) {
    if (side <= 0) {
        throw std::invalid_argument(std::to_string(side) + " is an Invalid side for a square");


    }
    return side * side;
}

/**
 * @brief Calculates the area of a rectangle (Overloaded).
 */
double calculateArea(double length, double width) {
    if (length <= 0 || width <= 0) {
        throw std::invalid_argument("Invalid length or width for rectangle: L: " + std::to_string(length) + ", W: " + std::to_string(width));


    }
    return length * width;

}

/**
 * @brief Calculates the area of a circle.
 */
double calculateCircleArea(double radius) {
    if (radius <= 0) {
        throw std::invalid_argument(std::to_string(radius) + " is an Invalid radius for a circle");

    }
    return std::numbers::pi * radius * radius;
}

