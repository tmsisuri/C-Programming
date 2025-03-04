#include <stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

void Information(struct Book books[], int n) {
    printf("Book Details\n");
    for(int i=0; i<n; i++) {
        printf("Book %d\n", i+1);
        printf("Book ID : ");
        scanf("%d", &books[i].id);
        printf("Book Title : ");
        scanf("%s", books[i].title);
        printf("Book Author : ");
        scanf("%s", books[i].author);
        printf("Book Quantity : ");
        scanf("%d", &books[i].quantity);
    }
}

void BooksQuantity(struct Book books[], int n) {
    printf("\nBook Quantities in Library\n");
    printf("ID\tTitle\t\tQuantity\n");
    printf("===================================\n");
    for(int i=0; i<n; i++) {
        printf("%d\t%s\t\t%d\n",books[i].id, books[i].title, books[i].quantity);
    }
}

void WriteBookData(struct Book books[], int n) {
    FILE *file = fopen("library.txt", "w");
    if(file == NULL) {
        printf("Error opening file\n");
        return;
    }
    for(int i=0; i<n; i++) {
        fprintf(file,"%d, %s, %s, %d\n", books[i].id, books[i].title, books[i].author, books[i].quantity);
    }
    fclose(file);
}

void ReadBookData(struct Book books[], int n) {
    int i = 0;
    FILE *file = fopen("library.txt", "r");
    if(file == NULL) {
        printf("Error reading file\n");
        return;
    }
    while(fscanf(file,"%d, %s, %s, %d",&books[i].id, books[i].title, books[i].author, &books[i].quantity) == 4) {
        i++;
    }
    fclose(file);

    printf("\nBooks Details\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");
    printf("=================================================\n");
    for(int j=0; j<n; j++) {
        printf("%d\t%s\t\t%s\t\t%d\n",books[j].id, books[j].title, books[j].author, books[j].quantity);
    }

}
int main() {

    int n;

    printf("Enter the number of books : ");
    scanf("%d", &n);

    struct Book books[n];

    Information(books, n);
    BooksQuantity(books, n);
    WriteBookData(books, n);
    ReadBookData(books, n);

    return 0;
}
