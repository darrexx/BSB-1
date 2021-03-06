/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                          O R G A N I Z E R                                */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Ein Organizer ist ein spezieller Scheduler, der zusaetzlich das Warten    */
/* von Threads (Customer) auf Ereignisse erlaubt.                            */
/*****************************************************************************/

#ifndef __organizer_include__
#define __organizer_include__
/* Hier muesst ihr selbst Code vervollstaendigen */ 

#include "thread/scheduler.h"
#include "thread/customer.h"

class Organizer 
	: public Scheduler
{
private:
    Organizer(const Organizer &copy); // Verhindere Kopieren
public:
    Organizer() : Scheduler() {}
	void block (Customer& customer, Waitingroom& waitingroom);
	void wakeup (Customer& customer);
	void kill (Customer& that);
	Customer* active();
};

#endif
