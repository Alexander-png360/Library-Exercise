#pragma once
#include <vector>
#include <string>

extern double libraryBudget;

class Library{


private:

	std::vector<std::string> bookNames;

	int totalBorrowedBooks = 0;
	int reservedCount;
	std::vector<std::string> reservedBooks;
	

public: 

	int getTotalBorrowedBooks();
	void addBook(std::string title, double bookCost);
	bool borrowBook(std::string title);
	void listBooks();
	const void reserveBook(std::string title);
	Library();

};

