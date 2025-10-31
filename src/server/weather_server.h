
#ifndef __WeatherServer_h_
#define __WeatherServer_h_

#include "http_server/http_server.h"
#include "weather_server_instance.h"
#include "linked_list.h"
#include "smw.h"

typedef struct {
    HTTPServer httpServer;

    LinkedList* instances;

    smw_task* task;

} WeatherServer;

int WeatherServer_Initiate(WeatherServer* _Server);
int WeatherServer_InitiatePtr(WeatherServer** _ServerPtr);

void WeatherServer_Dispose(WeatherServer* _Server);
void WeatherServer_DisposePtr(WeatherServer** _ServerPtr);

#endif //__WeatherServer_h_
