#include <WiFi.h>
#include <WiFiMulti.h>
WiFiMulti wifiMulti;
#include <ESP32Servo.h>
Servo myservo;
WiFiServer server(80);

const uint32_t TiempoEsperaWifi = 5000;

const char *ssid_1 = "";
const char *password_1 = "";
const char *ssid_2 = "";
const char *password_2 = "";
const char *ssid_3 = "";
const char *password_3 = "";
const char *ssid_4 = "Aqui Agrega mas";
const char *password_4 = "Aqui Agrega mas";

void setup() {
  Serial.begin(115200);
  Serial.println("\nIniciando multi Wifi");

  wifiMulti.addAP(ssid_1, password_1);
  wifiMulti.addAP(ssid_2, password_2);
  wifiMulti.addAP(ssid_3, password_3);
  wifiMulti.addAP(ssid_4, password_4);

  WiFi.mode(WIFI_STA);
  Serial.print("Conectando a Wifi ..");
  while (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.print(".");
  }
  Serial.println(".. Conectado");
  Serial.print("SSID:");
  Serial.print(WiFi.SSID());
  Serial.print(" ID:");
  Serial.println(WiFi.localIP());

  myservo.attach(13);  // Pin de control del servo
  server.begin();
  Serial.println("Servidor iniciado!");
}

void loop() {
  ActualizarWifi();

  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client = server.available();
    if (!client) {
      return;
    }

    Serial.println("Cliente conectado");

    String request = client.readStringUntil('\r');
    client.flush();

    if (request.indexOf("/dog_detected") != -1) {
      // Activar el servomotor
      myservo.write(90); // Angulo deseado
      delay(1000); // Pausa para permitir el movimiento completo del servomotor
      myservo.write(0); // Volver a la posición inicial
    }

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println();
    client.println("<h1>Respuesta del ESP32</h1>");
    client.stop();

    Serial.println("Cliente desconectado");
  } else {
    Serial.println("Codigo sin Wifi");
  }
  delay(1000);
}

void ActualizarWifi() {
  if (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.println("No conectado a Wifi!");
  }
}
