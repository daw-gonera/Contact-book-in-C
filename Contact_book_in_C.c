#include <stdio.h>  
#include <stdlib.h>   
#include <string.h>

// blueprint for one Contact with multiple data
typedef struct Contact
{
    char first_name[50];
    char last_name[50];
    char phone_number[20]; //char because phone numbers can start with 0 or +
    char email[100];

    // for the Linked List in the Futur
    struct Contact *next;
} Contact;

void add_contact(Contact **head){   // **head to change *head so that it can see the next contact

    // Create a new contact node
    // The struct definition doesn't reserve memory on its own, which is why we need malloc
    Contact *new = malloc(sizeof(Contact));

    // the pointer next in the contact new is pointing at NULL
    new -> next = NULL;

    // Read user input from the terminal
    scanf("%49s", new->first_name);
    scanf("%49s", new->last_name);
    scanf("%19s", new->phone_number);
    scanf("%99s", new->email);


    // new contact attach at the front
    new -> next = *head; 
    *head = new;

}

void print_contact(){

}

int delete_contact(){

}

Contact* search_contact(){

}

int main (){

    Contact *head = NULL; //pointer at the first Contact

    return 0;
}