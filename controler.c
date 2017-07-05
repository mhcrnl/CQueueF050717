/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	System:		Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                	Fedora 24	Code::Blocks 16.01	gcc 5.3.1
	@Copyright:	2017
	@file:
*/

#include "controler.h"

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
