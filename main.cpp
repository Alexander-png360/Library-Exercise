#include <iostream>
#include "Library.hpp"

int main() {

	Library myLibrary;
	myLibrary.addBook("The Great Gatsby", 300);
	myLibrary.addBook("1984", 400);
	myLibrary.addBook("To Kill a Mocking Bird", 350);
	myLibrary.listBooks();

	myLibrary.reserveBook("1984");
	myLibrary.borrowBook("To Kill a Mocking Bird");
	myLibrary.getTotalBorrowedBooks();

	libraryBudget = 5000.0;
	std::cout << "Current Library Budget Is: " << libraryBudget << '\n';

	std::cout << "Running Main" << '\n';
}