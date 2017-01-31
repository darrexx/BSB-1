/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                         A P P L I C A T I O N                             */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Die Klasse Application definiert die einzige Anwendung von OO-Stubs.      */
/*****************************************************************************/

#ifndef __application_include__
#define __application_include__

#include "thread/entrant.h"
#include "syscall/thread.h"
#include "machine/key.h"
#include "syscall/guarded_keyboard.h"
#include "syscall/guarded_buzzer.h"

class Application : public Thread
 
 {
private:
    Application (const Application &copy); // Verhindere Kopieren

public:
	Guarded_Buzzer buzzer;
	int row;
	int col;
	int i;
	int id;

    Application(void* tos): Thread(tos), i(0){
		buzzer.set(10);
	} 
    void action ();
    void setCoord(int c, int r){ col = c; row = r;}
 };

/*###########################################################*/

 class Keyboard_App : public Thread
 
 {
private:
    Keyboard_App (const Keyboard_App &copy); // Verhindere Kopieren
    Guarded_Keyboard guarded_keyboard;
    Key key;
public:
	Guarded_Buzzer buzzer;
	int row;
	int col;
	int i;
	int id;
	int count;

    Keyboard_App(void* tos): Thread(tos), i(0), count(0){
		//buzzer.set(10);
	} 
    void action ();
    void setCoord(int c, int r){ col = c; row = r;}
 };
 
 /*###########################################################*/

 class EmptyApp : public Thread
 
 {
private:
    EmptyApp (const EmptyApp &copy); // Verhindere Kopieren

public:
	int row;
	int col;
	int i;
	int id;

    EmptyApp(void* tos): Thread(tos), i(0){} 
    void action ();
    void setCoord(int c, int r){ col = c; row = r;}
 };

#endif
