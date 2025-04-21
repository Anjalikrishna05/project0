#include <stdio.h>
#include <string.h>

struct Book
{

  char book[30];
  char author[25];
  int pages;
};



int main()
{
  struct Book bk[50];
  int choice;
  char Book[30];
  char Author[30];
  int Pages;
  int p, j, keepcount;
  p = j = keepcount = 0;
  

  struct Book b1 = {"Ram c/o Anandhi", "Akhil p dharmarajan", 380};
  struct Book b2 = {"The hound of the basker villes", "Sir aurthur conon doyle", 300};
  struct Book b3 = {"Neermathalam poothakalam", "Madhavikutty", 360};
  struct Book b4 = {"Romeo and juliet", "William shakespear", 500};
  struct Book b[] = {b1, b2, b3, b4};

  while (choice != 5)
  {
    printf("Library Management System\n\n");

    printf("1.Available books:\n");
    printf("2.Add book:\n");
    printf("3.Search books:\n");
    printf("4.Delete books:\n");
    printf("5.Exit:\n");
    printf("Enter ur choice(1-5):");
    scanf("%s", &choice);
  
    switch (choice)

    {
    case '1':
      printf("\nAvailable books:\n\n");

      for (int i = 0; i < sizeof(b) / sizeof(b[i]); i++)
      {

        printf("Book: %s\n", b[i].book);
        printf("Author: %s\n", b[i].author);
        printf("Pages: %d\n\n", b[i].pages);
      }

      break;
    case '2':
      printf("Add books:\n");

      for (int j = 0; j < 10; j++)
      {

        printf("Enter Book name:");
        scanf("%s", &Book);
        printf("Author:");
        scanf("%s", &Author);
        printf("Pages:");
        scanf("%d", &Pages);

        printf("Now available books are_________:\n\n");
        
        printf("Book:%s\n", Book);
        printf("Author:%s\n", Author);
        printf("Pages:%d\n\n", Pages);
        

        
      
        for (int i = 0; i < sizeof(b) / sizeof(b[i]); i++)
        {
          
          printf("Book: %s\n", b[i].book);
          printf("Author: %s\n", b[i].author);
          printf("Pages: %d\n\n", b[i].pages);
        }
      }
    
    break;

  case '3':
    printf("Search Book By Name:");

    printf("Enter name of the book:");
    scanf("%s\n");

  default:
    printf("np");
  }
  }
return 0;
}