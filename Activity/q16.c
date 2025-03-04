#include <stdio.h>
#include <stdlib.h>

#define MAX_BOOKS 10

struct Book {
    int id;
    char title[50];
    char author[50];
    int borrowed;
};

int totalBooks = 0;

void AddBooks(struct Book books[]) {
    printf("Enter the number of books to add (max %d): ", MAX_BOOKS);
    scanf("%d", &totalBooks);

    printf("Enter book details\n");

    for(int i=0; i<totalBooks; i++) {
        printf("Book ID : ");
        scanf("%d", &books[i].id);
        printf("Book Title : ");
        scanf("%s", &books[i].title);
        printf("Book Author : ");
        scanf("%s", &books[i].author);
        books[i].borrowed = 0;
    }
}

void Borrow(struct Book books[]) {

    int bookID;

    printf("Enter Book ID to borrow: ");
    scanf("%d", &bookID);

    for (int i=0; i<totalBooks; i++) {
        if (books[i].id == bookID) {
            if (books[i].borrowed == 1) {
                printf("Sorry, the book '%s' is already borrowed.\n", books[i].title);
                return;
            } else {
                books[i].borrowed = 1;
                printf("You have successfully borrowed '%s'.\n", books[i].title);
                return;
            }
        }
    }
    printf("Book ID not found.\n");
}
void ViewBooks(struct Book books[]) {
    FILE *data = fopen("library.txt", "w");
    if(data == NULL) {
        printf("Error opening file\n");
        return;
    }
    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", books[i].id, books[i].title, books[i].author,
               books[i].borrowed ? "Borrowed" : "Available");
        fprintf(data, "%d %s %s %d\n", books[i].id, books[i].title, books[i].author, books[i].borrowed);
    }
    fclose(data);

    data = fopen("library.txt", "r");

    if(data == NULL) {
        printf("Error opening file\n");
        return;
    }
    for(int i=0; i<totalBooks; i++) {
        while (fscanf(data, "%d %s %s %d", &books[i].id, books[i].title, books[i].author, &books[i].borrowed) != EOF);
    }
    fclose(data);

    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------\n");
    for(int i=0; i<totalBooks; i++) {
            printf("%d\t%s\t\t%s\t\t%s\n", books[i].id, books[i].title, books[i].author, books[i].borrowed ? "Borrowed" : "Available");
    }
}

void exitProgram() {
    printf("Have a nice day\n");
    exit(0);
}

int main() {

    struct Book books[MAX_BOOKS];
    int option;

    do {
        printf("\nMenu\n");
        printf("1 - Add Books List\n");
        printf("2 - Borrow a Book\n");
        printf("3 - View Books\n");
        printf("4 - Exit\n");
        printf("Enter your option : ");
        scanf("%d", &option);

        switch(option) {
        case 1 :
            AddBooks(books);
            break;
        case 2 :
            Borrow(books);
            break;
        case 3 :
            ViewBooks(books);
            break;
        case 4 :
            exitProgram();
            break;
        default :
            printf("Invalid option\n");
        }
    } while (option != 4);

    return 0;
}
