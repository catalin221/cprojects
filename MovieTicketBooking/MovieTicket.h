#ifndef MAIN_C_MOVIETICKET_H
#define MAIN_C_MOVIETICKET_H

typedef struct MovieTicket{
    int ticketId;
    struct tm time;
    char movieName[];
}MovieTicket;

MovieTicket BuyTicket()

#endif