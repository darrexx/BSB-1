/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                         A P P L I C A T I O N                             */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Die Klasse Application definiert die einzige Anwendung von OO-Stubs.      */
/*****************************************************************************/

/* INCLUDES */

#include "user/appl.h"
#include "device/cgastr.h"
#include "thread/scheduler.h"

/* Hier muesst ihr selbst Code vervollstaendigen *         
#include "device/keyboard.h"
#include "machine/cpu.h"
#include "guard/secure.h"
/* GLOBALE VARIABLEN */

//extern CGA_Stream kout;
/* Hier muesst ihr selbst Code vervollstaendigen */ 

//CGA_Stream kout;

//Scheduler scheduler;

void Application::action ()
 {
	
 	
 	int i = 0;
 	while(1){
		kout.setcolor(color);
		kout.setpos(col, row);
		kout << "i=" << i;
		kout.flush();
		kout.resetcolor();
		i++;
		scheduler.resume();
	}

 	//while(1){}
 }
