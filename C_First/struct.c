//
// Created by huangjian on 7/21/21.
//

#include <stdio.h>
#include <string.h>

struct Book {
    char *title;
    char author[50];
    char subject[100];
    int id;
};

/*
int main() {
    struct Book book;
    printf("book: %p\n", &book); // 0x7ffee1e81910

    book.title = "逛动物园是件有趣的事";
    strcpy(book.author, "佚名");
    strcpy(book.subject, "通用");
    book.id = 100001;

    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);

    return 0;
}
*/
