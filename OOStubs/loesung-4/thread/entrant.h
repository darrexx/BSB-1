/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                            E N T R A N T                                  */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Eine Koroutine, die vom Scheduler verwaltet wird.                         */
/*****************************************************************************/

#ifndef __entrant_include__
#define __entrant_include__

/* Hier muesst ihr selbst Code vervollstaendigen */ 
#include "object/chain.h"
#include "thread/coroutine.h"

class Entrant: public Coroutine, public Chain
/* Hier muesst ihr selbst Code vervollstaendigen */         
 {
private:
      Entrant (const Entrant &copy); // Verhindere Kopieren
/* Hier muesst ihr selbst Code vervollstaendigen */ 
      char* name;
public:
	Entrant(void* tos): Coroutine(tos), Chain() {} 
	
	unsigned char color;
	
	char* getName(){
		return name;
	}
	void setName(char* name){
		this->name = name;
	}
 };

#endif
