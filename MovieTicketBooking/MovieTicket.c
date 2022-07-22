#include "MovieTicket.h"
#include "Movie.h"
#include "Buyer.h"
#include <time.h>
#include <stdio.h>

typedef struct MovieTicket{
    int ticketId;
    struct tm time;
    Movie movie;
} MovieTicket;

MovieTicket BuyTicket()
{

}
