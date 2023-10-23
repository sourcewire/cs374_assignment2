#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movies_by_year.h"

/* struct for movie info*/
struct movie
{
    char* title;
    int year;
    char* languages;
    double rating_value;
    struct movie *next;
};

//function for main menu
int main_menu(){
    printf("%s", "1. Select file to process\n2. Exit the program\n");
};

//function for selecting file
void select_file();

//function for processing file
void process_file();

int main()
{
    //main menu
    main_menu();
    //select file

    //process file
    
    printf("%s", "Hello World\n");
    return 0;
}