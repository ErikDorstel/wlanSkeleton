boolean debug=true;

const char* appName="wlanSkeleton";
const char* appDesc="ESP32 Template";

#include "WLAN.h"
#include "DNS.h"
#include "HTTP.h"

void setup() {
  if (debug) { Serial.begin(115200); }
  initWLAN();
  initDNS();
  initHTTP(); }

void loop() { wlanWorker(); dnsWorker(); httpWorker(); }
