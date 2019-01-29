// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std:: string title;
    std::cout << "Please enter the book title\n";
	std::getline (std::cin, title);
	std::string author;
	std::cout << "Please enter the book author\n";
	std::getline(std::cin, author);
	int year;
	std::cout << "In what year was the book published?\n";
	std::cin >> year;
	int pages;
	std::cout << "How many pages does the book have?\n";
	std::cin >> pages;
	constexpr int thisyear = 2019;
	int age = (thisyear - year);
	if (age < 10) {
		std::cout << "This book is younger than ten years old\n";}
	else { std::cout << "This book is at least ten years old\n"; }
	if (pages < 100) { std::cout << "This book is a short book\n"; }
	else if (pages < 300) { std::cout << "This book is an average book\n"; }
	else std::cout << "This book is a long book\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
