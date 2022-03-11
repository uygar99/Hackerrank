#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* book;
	int** page;
    int shelf,i;
    scanf("%d", &shelf);

    int query;
    scanf("%d", &query);
    book = (int*)malloc(sizeof(int)*shelf);
    page = (int**)malloc(sizeof(int*)*shelf);
    for(i = 0; i < shelf; i++)
    {
        book[i] = 0;
        page[i] = (int*)malloc(sizeof(int));
    }
    for(i=0;i<query;i++)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            book[x] += 1;
            page[x] = realloc(page[x], book[x]*sizeof(int));
            page[x][book[x] - 1] = y;

        }
        else if (type_of_query == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", page[x][y]);
        }
        else
        {
            int x;
            scanf("%d", &x);
            printf("%d\n", book[x]);
        }
    }
    if (book) free(book); 
    for (i = 0; i < shelf; i++) if (page[i]) free(page[i]);      
    if (page) free(page);
    return 0;
}
