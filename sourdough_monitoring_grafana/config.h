
#define WIFI_SSID     "wifi_name" // Add wifi name/ Name Ihres WLAN
#define WIFI_PASSWORD "wifi_password" // Add wifi passowrd / Ihr Password

#define ID "sourdough" // Add unique name for this sensor / gerne ändern
#define INTERVAL 5 //seconds

#define DHTPIN 32    // Which pin is DHT 11 connected to / Pin für DHT11 Sensor
#define DHTTYPE DHT11 // Type DHT 11

#define ULTRASONIC_PIN_TRIG 4 // Which pin is HC-SR04's trig connected txo / Trigger Pin
#define ULTRASONIC_PIN_ECHO 5 // Which pin is HC-SR04's echo connected to  / Echo Pin

// ab hier wie im Artikel beschrieben anpassen
#define GC_PORT 443
#define GC_PROM_URL "prometheus-us-central1.grafana.net"	//Achtung hier kann sich je nach Land etwas ändern!
#define GC_PROM_PATH "/api/prom/push"
#define GC_PROM_USER ""
#define GC_PROM_PASS ""
