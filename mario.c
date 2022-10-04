#include <stdio.h>
#include <cs50.h>
int get_size(void);
void make_pyramid(int floors);
void make_spaces(int items);

int main(void)
{

    int floors = get_size();
    make_pyramid(floors);

}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("How many floors would you like to create ?");
    }
    while (n < 1);
    return n;
}

void make_pyramid(int floors)
{
    char space = ' ';
    char block = '#';
    int items = floors;

    for (int floor = 0; floor < floors; floor++)
    {

      make_spaces(items);

      for (int blocks = 0; blocks < floor+1; blocks++)
      {
        printf("%c",block);
      }

      make_spaces(2);

      for (int blocks = 0; blocks < floor+1; blocks++)
      {
        printf("%c", block);
      }

      make_spaces(items);

      items--;
      printf("\n");
    }

}

void make_spaces(int items)
{
      char space = ' ';
      for (int spaces = 0; spaces < items-1; spaces++)
      {
        printf("%c",space);
      }
}