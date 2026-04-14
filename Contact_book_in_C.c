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

void add_contact(){

}

void print_contact(){

}

int delete_contact(){

}

Contact* search_contact(){

}

int main (){

    return 0;
}