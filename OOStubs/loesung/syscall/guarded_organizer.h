/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                   G U A R D E D _ O R G A N I Z E R                       */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Systemaufrufschnittstelle zum Organizer.                                  */
/*****************************************************************************/

#ifndef __Guarded_Organizer_include__
#define __Guarded_Organizer_include__

#include "syscall/thread.h"
#include "thread/organizer.h"
        
class Guarded_Organizer 
 : public Organizer
 {
private:
      Guarded_Organizer (const Guarded_Organizer &copy); // Verhindere Kopieren
public:
      Guarded_Organizer () : Organizer() {}

	void block (Customer& customer, Waitingroom& waitingroom);
	void wakeup (Customer& customer);
	void kill (Customer& that);

	void ready(Thread& that);
	void exit();
	void kill(Thread& that);
	void resume();
 };

 extern Guarded_Organizer scheduler;

#endif
