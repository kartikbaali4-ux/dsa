// Array is a collection of homogeunos type of elements. 
// It allocated static countignous memory.

#include <stdio.h>
#define max 5
int main()
{
    int arr[max];
    int element, element2, pos = -1, chh = 0, ch, choice, choice2, choice3;

    do
    {
        int index;
        printf("\n1.insert\n2.delete\n3.travel\n4.exit");
        printf("\nEnter your choice:-  ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("1.Insert at the end...\n2.Insert at the begining\n3.insert at the position/index\n");
            printf("Enter your choice:-  ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                if (pos < max - 1)
                {
                    pos++;
                    printf("\nenter element to insert:-  ");
                    scanf("%d", &arr[pos]);
                }
                else
                {
                    printf("array is full....");
                }
                break;

            case 2:
                if (pos < max - 1)
                {
                    printf("Enter element to insert at begining:-  ");
                    scanf("%d", &element);

                    for (int i = pos; i >= 0; i--)
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[0] = element;
                    pos++;
                    printf("Elemented inserted...");
                }
                else
                {
                    printf("AAray is full...");
                }
                break;

            case 3:

                if (pos < max - 1)
                {
                    printf("Enter element to insert..");
                    scanf("%d", &element);

                    printf("Enter index to insert the value:-  ");
                    scanf("%d", &index);

                    if (index < 0 || index > pos + 1)
                    {
                        printf("\nInvalid index...");
                    }

                    for (int i = pos; i >= index; i--)
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[index] = element;
                    pos++;
                    printf("Elemented inserted...");
                }
                else
                {
                    printf("array is full...");
                }
                break;

            default:
                printf("invalid choice...");
                break;
            }

            break;

        case 2:
            printf("1.delete an element by index\n2.delete an element by value\n3.delete an element form begining\n4.delete an element form an end");
            printf("Enter choice:-  ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                if (pos > max - 1)
                {
                    printf("Array is empty...");
                }

                printf("Enter index of an Element to delete:-  ");
                scanf("%d", &index);

                if (index < 0 || index > pos + 1)
                {
                    printf("\nInvalid index...");
                }

                for (int i = index; i < pos; i++)
                {
                    arr[i] = arr[i + 1];
                }
                pos--;

                break;

            case 2:
                printf("Enter element to delete:-  ");
                scanf("%d", &element2);

                for (int i = 0; i < pos; i++)
                {
                    if (arr[i] == element2)
                    {
                        chh = i;
                        break;
                    }
                }

                if (chh == 0)
                {
                    printf("Element not found...\nEnter different element\n");
                }

                for (int i = chh; i < pos; i++)
                {
                    arr[i] = arr[i + 1];
                }
                pos--;

                break;
            case 3:

                if (pos == -1)
                {
                    printf("Empty Array...");
                }

                else
                {
                    for (int i = 0; i <= pos; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    printf("%d element is deleted", arr[pos]);
                    pos--;
                }
                break;

            case 4:

                if (pos == -1)
                {
                    printf("Array is empty");
                }
                else
                {
                    pos--;
                    printf("Delete element is %d", arr[pos]);
                }
                break;

            default:
                printf("\nEnter valid choice....");
                break;
            }
            break;

        case 3:
            printf("1.Accessing from begining\n2.Accessing from end\n");
            scanf("%d", &choice3);
            switch (choice3)
            {
            case 1:

                if (pos == -1)
                {
                    printf("Empty Array...");
                }
                else
                {
                    printf("\nElements are:- ");
                    for (int i = 0; i <= pos; i++)
                    {
                        printf("%d\t", arr[i]);
                    }
                }
                break;

            case 2:
                if (pos == -1)
                {
                    printf("empty Array");
                }
                else
                {
                    for (int i = pos; i >= 0; i--)
                    {
                        printf("%d\t", arr[i]);
                    }
                }
                break;
            }

            break;
        case 4:
            printf("Exiting.........");
            break;

        default:
            printf("invalid choice....");
        }

    } while (ch != 4);
    return 0;
}