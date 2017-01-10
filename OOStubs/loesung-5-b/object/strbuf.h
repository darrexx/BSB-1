/*****************************************************************************/
/* Betriebssysteme                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                       S T R I N G B U F F E R                             */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* Die Klasse Stringbuffer stellt einen Puffer fuer die Sammlung von Zeichen */
/* zur Darstellung auf dem Bildschirm oder anderen Ausgabegeraeten bereit.   */
/* Die Ausgabe der Zeichen erfolgt, sobald der Puffer voll ist oder wenn     */
/* explizit die Methode flush() aufgerufen wird.                             */
/* Da Stringbuffer geraeteunabhaengig sein soll, ist flush() eine virtuelle  */
/* Methode, die von den abgeleiteten Klassen definiert werden muss.          */
/*****************************************************************************/

#ifndef __strbuf_include__
#define __strbuf_include__

#define MAX_SIZE_BUFFER 100

class Stringbuffer
{
	private:
      Stringbuffer(const Stringbuffer &copy); // Verhindere Kopieren

	/* Hier muesst ihr selbst Code vervollstaendigen */    
	public:
		int currentindex;
		char value[MAX_SIZE_BUFFER];

		Stringbuffer() : currentindex(0){};

		void put(char c);

		virtual void flush()=0;

 };

#endif
