
#include <iostream>
#include "Observer/EventManager/EvManager.h"
#include "Observer/EventListener/CheckedStudents.h"
#include "Observer/EventListener/Grades.h"
#include "Observer/EventListener/Statistics.h"
#include "Facade/LoggingManager/LoggingManager.h"


/**
 * Aplicacion que utiliza el patron observer
 * @author Anthony Chaves Achoy
 */

int main() {
    EvManager * editor = new EvManager();
    Subscriber * cs = new CheckedStudents();
    Subscriber * grs = new Grades();
    Subscriber * stats = new Statistics();

    editor->suscribeObs(cs);
    editor->suscribeObs(grs);
    editor->suscribeObs(stats);

    editor->notify(87.8, 202004578, "Jennifer");
    editor->notify(65.8, 202004428, "Guisselle");
    editor->notify(74.2, 201404176, "Yulian");



    LoggingManager loggingManeger;
    loggingManeger.signIn("Pablo","pablo2");
    loggingManeger.signIn("PabloA","pablo1");
    loggingManeger.signIn("PabloA","pablo1");
    loggingManeger.signIn("PabloA","pablo1");
    loggingManeger.signIn("PabloA","pablo1");
    loggingManeger.logging("PabloA","pablo1");


}
