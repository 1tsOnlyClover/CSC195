#pragma once
#include <numeric>
#include <iostream>
#include <numbers>


namespace mathLib {
	class Fraction {
		public:
		int numerator;
		int denominator;
		Fraction(int n, int d) {
            if (denominator == 0) { std::cout << "denominator cannot be zero!"; }
            else {
                numerator = n;
                denominator = d;
            }
		};
        Fraction() {};
		//Overload operators:
		//Arithmetic: +, -, *, / for operations between two Fraction objects.
        Fraction operator+(const Fraction& other) const {
            int newNumerator = numerator * other.denominator + other.numerator * denominator;
            int newDenominator = denominator * other.denominator;
            return Fraction(newNumerator, newDenominator);
        }

        Fraction operator-(const Fraction& other) const {
            int newNumerator = numerator * other.denominator - other.numerator * denominator;
            int newDenominator = denominator * other.denominator;
            return Fraction(newNumerator, newDenominator);
        }

        Fraction operator*(const Fraction& other) const {
            int newNumerator = numerator * other.numerator;
            int newDenominator = denominator * other.denominator;
            return Fraction(newNumerator, newDenominator);
        }

        Fraction operator/(const Fraction& other) const {
            if (other.numerator == 0) {
                std::cerr << "Error: Cannot divide by zero!" << std::endl;
                return Fraction(0, 1); //Return a safe value.
            }
            int newNumerator = numerator * other.denominator;
            int newDenominator = denominator * other.numerator;
            return Fraction(newNumerator, newDenominator);
        }
		 
		//Comparison: ==, !=, <, >, <=, >=.
        bool operator==(const Fraction& other) const {
            return numerator * other.denominator == other.numerator * denominator;
        }

        bool operator!=(const Fraction& other) const {
            return !(*this == other);
        }

        bool operator<(const Fraction& other) const {
            return numerator * other.denominator < other.numerator * denominator;
        }

        bool operator>(const Fraction& other) const {
            return other < *this;
        }

        bool operator<=(const Fraction& other) const {
            return !(*this > other);
        }

        bool operator>=(const Fraction& other) const {
            return !(*this < other);
        }
		//Stream: << for output and >> for input.
        friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
            os << f.numerator << "/" << f.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction& f) {
            char slash;
            is >> f.numerator >> slash >> f.denominator;
            if (f.denominator == 0) {
                std::cerr << "Error: denominator cannot be zero!" << std::endl;
                f.numerator = 0;
                f.denominator = 1;
            }
            return is;
        }

        int findGCF(int a, int b)
        {
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        void Simplify() {
            if (denominator == 0) return; //Avoid division by zero if it somehow slipped through.

            int common = findGCF(abs(numerator), abs(denominator)); //Use absolute values to avoid issues with gcd and negative numbers.
            numerator /= common;
            denominator /= common;

            //Handle negative signs: Negative numerator is preferred.
            if (denominator < 0) {
                numerator *= -1;
                denominator *= -1;
            }
        }

        double toDouble() {
            double d = numerator / denominator;
            return d;
        }

		};
	}