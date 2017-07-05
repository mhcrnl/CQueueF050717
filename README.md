## Synopsis

At the top of the file there should be a short introduction and/ or overview that explains **what** the project is. This description should match descriptions added for package managers (Gemspec, package.json, etc.)

C queue example aplication.
## Code Example

Show what the library does as concisely as possible, developers should be able to figure out **how** your project solves their problem by looking at the code example. Make sure the API you are showing off is obvious, and that your code is short and concise.
``` C
void control() {
     int no, ch, e;

    printf("\n1 - Enque");
    printf("\n2 - Deque");
    printf("\n3 - Front element");
    printf("\n4 - Empty");
    printf("\n5 - Exit");
    printf("\n6 - Display");
    printf("\n7 - Queue size");

    create();
    while(1){
        printf("\nIntroduceti alegerea dvs: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Introduceti datele: ");
                scanf("%d", &no);
                enq(no);
                break;
            case 2:
                deq();
                break;
            case 3:
                e = frontelement();
                if(e != 0)
                    printf("Primul element : %d ", e);
                else
                    printf("Nu exista elemente in queue");
                break;
            case 4:
                empty();
                break;
            case 5:
                exit(0);
            case 6:
                display();
                break;
            case 7:
                queuesize();
                break;
            default:
                printf("Alegere gresita, introduceti o noua valoare: ");
                break;
        }
    }
}
```

## Motivation

A short description of the motivation behind the creation and maintenance of the project. This should explain **why** the project exists.

## Installation

Provide code examples and explanations of how to get the project.

## API Reference

Depending on the size of the project, if it is small and simple enough the reference docs can be added to the README. For medium size to larger projects it is important to at least provide a link to where the API reference docs live.

## Tests

Describe and show how to run the tests with code examples.

## Contributors

Let people know how they can dive into the project, include important links to things like issue trackers, irc, twitter accounts if applicable.

## License

A short snippet describing the license (MIT, Apache, etc.)
