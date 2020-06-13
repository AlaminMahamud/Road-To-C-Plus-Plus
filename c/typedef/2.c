#include <stdio.h>
#include <string.h>

struct Qitab {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

typedef struct Qitab Book;

int main(){
    Book book;
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Bla Bla");
    strcpy(book.subject, "Computer Programming Language");
    book.book_id = 123132;

    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);

    return 0;
}