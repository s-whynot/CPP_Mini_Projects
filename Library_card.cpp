#include <iostream>
#include <string>

using namespace std;

//A library card class
class card {
  string book_title;
  string book_author;
  int no_of_book_copies;  //no of book copies at hand

public:
  void store(string new_title, string new_author, int number_books); //stores info
  void show();  //shows info
};

void card::store(string new_title, string new_author, int number_books){
  book_title = new_title;
  book_author = new_author;
  no_of_book_copies = number_books;
}

void card::show(){
  cout << "The title of the book is " << book_title << "\n";
  cout << "The author of the book is " << book_author << "\n";
  cout << "The number of available copies of the book is " << no_of_book_copies << "\n";
  }

int main()
{
  card c1;
  c1.store("The Three Musketeers", "Alexandre Dumas", 12);
  c1.show();

  return 0;
}
