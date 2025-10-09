#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookID;
    char title[100];
    char author[100];
    int year;
} Book;

void addBook(Book books[], int *count) {
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].bookID);
    getchar(); // เคลียร์ '\n' หลัง scanf
    printf("Enter Title: ");
    fgets(books[*count].title, 100, stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0; // ลบ '\n'
    printf("Enter Author: ");
    fgets(books[*count].author, 100, stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;
    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    (*count)++;
    printf("Book added successfully!\n");
}

void searchBook(Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in library.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
    }
}

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char searchTitle[100];

    while (1) {
        printf("Choose an option: ");
        printf("1. Add Book\n2. Search Book by Title\n3. Display All Books\n4. Exit\n");
        scanf("%d", &choice);
        getchar(); // เคลียร์ '\n' หลัง scanf

        if (choice == 1) {
            addBook(books, &count);
        } else if (choice == 2) {
            printf("Enter Title to Search: ");
            fgets(searchTitle, 100, stdin);
            searchTitle[strcspn(searchTitle, "\n")] = 0;
            searchBook(books, count, searchTitle);
        } else if (choice == 3) {
            displayBooks(books, count);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid option.\n");
        }
    }
    return 0;
}