#include "Library.hpp"
#include <iostream>
#include "removeElement.hpp"

double libraryBudget = 0.0;

Library::Library() : reservedCount(0) {
	
}

void Library::addBook(std::string title, double bookCost) {

	if (bookNames.size() < 100){
		bookNames.push_back(title);
		libraryBudget -= bookCost;
	} else {
		std::cout << "Library is full!" << '\n';
	}
}

bool Library::borrowBook(std::string title) {

	for (const auto& book : bookNames){
		if (book == title){
			removeElement(bookNames, title);
			std::cout << "Book borrowed!" << '\n';
			totalBorrowedBooks++;
			return true;
		}
	}

	std::cout << "Book not found!" << '\n';
	return false;

}

void Library::listBooks() {

	if (bookNames.empty()){
		std::cout << "No Books In The Library." << '\n';
		return;
	}

	for (const auto& book : bookNames){
		std::cout << book << '\n';
	}

}

int Library::getTotalBorrowedBooks() {
	
	std::cout << "Borrowed Book Count: " << totalBorrowedBooks << '\n';

	return totalBorrowedBooks;
}

const void Library::reserveBook(std::string title){

	bool exists = false;
	bool alreadyReserved = false;

	for (const auto& book : bookNames){

		if (book == title){
			exists = true;
			break;
		}

	}

	for (const auto& book : reservedBooks) {
		if (book == title)
		{
			alreadyReserved = true;
			break;
		}
	}

	if (exists && !alreadyReserved) {
		reservedBooks.push_back(title);
		reservedCount++;

		std::cout << "Book Reserved: " << title << '\n';
		std::cout << "Reserved book count: " << reservedCount << '\n';
	}
	else {
		std::cout << "Book not reserved!" << '\n';
	}

}

