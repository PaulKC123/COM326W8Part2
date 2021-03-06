#pragma once

#include <string>
#include <sstream>
#include "Author.h"

enum class bookGenre { Fiction, Science_Fiction, Romance, Histroy };

class Book {
	
//private:
public:
	std::string title_;
	Author author_;
	std::string  publisher_;
	std::string isbn13_;
	bookGenre genre_;
	float price_;


public:
	
	Book();

	Book(std::string title);

	Book(std::string title, Author author);


	Book(std::string title, Author author, std::string  publisher, std::string isbn13, float price);

	//Default destructor
	~Book();

	std::string GetTitle();
	void SetTitle(std::string title);

	Author GetAuthor();
	void SetAuthor(Author author);
	
	std::string GetPublisher()const ;
	void SetPublisher(std::string  publisher);

	std::string ToString() ;
};
