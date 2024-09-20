#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <avr/pgmspace.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // SDA A4 SCL A5

#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

const int pinBoton = A3;

const int cantidad = 71;

int diley = 1000;

int longDiley = 10000;

int counter = 1;
int tiempo = 60000;

const char string_1A[] PROGMEM = "A veces le otre";
const char string_1B[] PROGMEM = "tiene razon";

const char string_2A[] PROGMEM = "Detente";
const char string_2B[] PROGMEM = "y contempla";

const char string_3A[] PROGMEM = "Tu casa es";
const char string_3B[] PROGMEM = "dentro tuyo";

const char string_4A[] PROGMEM = "Aprende";
const char string_4B[] PROGMEM = "de tus errores";

const char string_5A[] PROGMEM = "Se el cambio que";
const char string_5B[] PROGMEM = "quieres ver";

const char string_6A[] PROGMEM = "Educa con";
const char string_6B[] PROGMEM = "el ejemplo";

const char string_7A[] PROGMEM = "La mejor escuela";
const char string_7B[] PROGMEM = "es la calle";

const char string_8A[] PROGMEM = "Hazte un regalo";
const char string_8B[] PROGMEM = "cada dia";

const char string_9A[] PROGMEM = "Lo importante";
const char string_9B[] PROGMEM = "es la dosis";

const char string_10A[] PROGMEM = "Calla y";
const char string_10B[] PROGMEM = "escucha";

const char string_11A[] PROGMEM = "Haz algo";
const char string_11B[] PROGMEM = "nuevo";

const char string_12A[] PROGMEM = "Se sincerx y";
const char string_12B[] PROGMEM = "transparente";

const char string_13A[] PROGMEM = "Confia en tus";
const char string_13B[] PROGMEM = "intuiciones";

const char string_14A[] PROGMEM = "No rompas";
const char string_14B[] PROGMEM = "el silencio";

const char string_15A[] PROGMEM = "Permite";
const char string_15B[] PROGMEM = "equivocarte";

const char string_16A[] PROGMEM = "Menos es mas";
const char string_16B[] PROGMEM = " ";

const char string_17A[] PROGMEM = "Dale tiempo";
const char string_17B[] PROGMEM = " ";


const char string_18A[] PROGMEM = "Ve al";
const char string_18B[] PROGMEM = "encuentro";

const char string_19A[] PROGMEM = "Ponte en su";
const char string_19B[] PROGMEM = "lugar";

const char string_20A[] PROGMEM = "Toma un";
const char string_20B[] PROGMEM = "descanso";

const char string_21A[] PROGMEM = "Mejor sola que";
const char string_21B[] PROGMEM = "mal acompanada";

const char string_22A[] PROGMEM = "Manten el orden";
const char string_22B[] PROGMEM = "de tu espacio";

const char string_23A[] PROGMEM = "Muestrate tal";
const char string_23B[] PROGMEM = "como eres";

const char string_24A[] PROGMEM = "Como es arriba";
const char string_24B[] PROGMEM = "es abajo";

const char string_25A[] PROGMEM = "Atiende tus";
const char string_25B[] PROGMEM = "necesidades";

const char string_26A[] PROGMEM = "Que te gusta";
const char string_26B[] PROGMEM = "hacer?";

const char string_27A[] PROGMEM = "Eres feliz?";
const char string_27B[] PROGMEM = " ";

const char string_28A[] PROGMEM = "Hora de cosechar";
const char string_28B[] PROGMEM = "lo sembrado";

const char string_29A[] PROGMEM = "Olvidate de";
const char string_29B[] PROGMEM = "los prejuicios";

const char string_30A[] PROGMEM = "No te tomes";
const char string_30B[] PROGMEM = "nada personal";

const char string_31A[] PROGMEM = "Se tu mejor";
const char string_31B[] PROGMEM = "version";

const char string_32A[] PROGMEM = "No supongas";
const char string_32B[] PROGMEM = " ";

const char string_33A[] PROGMEM = "Se impecable";
const char string_33B[] PROGMEM = "con tus palabras";

const char string_34A[] PROGMEM = "Asume tu";
const char string_34B[] PROGMEM = "responsabilidad";

const char string_35A[] PROGMEM = "No te creas";
const char string_35B[] PROGMEM = "mejor que otrxs";

const char string_36A[] PROGMEM = "No te compares";
const char string_36B[] PROGMEM = " ";

const char string_37A[] PROGMEM = "Salta al";
const char string_37B[] PROGMEM = "vacio";

const char string_38A[] PROGMEM = "Suelta";
const char string_38B[] PROGMEM = "las riendas";

const char string_39A[] PROGMEM = "Estas lista";
const char string_39B[] PROGMEM = "para empezar";

const char string_40A[] PROGMEM = "Cuestiona lo";
const char string_40B[] PROGMEM = "establecido";

const char string_41A[] PROGMEM = "Dejalo enfriar";
const char string_41B[] PROGMEM = "un rato";

const char string_42A[] PROGMEM = "Menos mente";
const char string_42B[] PROGMEM = "mas cuerpa";

const char string_43A[] PROGMEM = "Presta atencion";
const char string_43B[] PROGMEM = "a tus suenos";

const char string_44A[] PROGMEM = "Una cosa no";
const char string_44B[] PROGMEM = "quita la otra";

const char string_45A[] PROGMEM = "Mejora tu";
const char string_45B[] PROGMEM = "comunicacion";

const char string_46A[] PROGMEM = "Nunca olvides";
const char string_46B[] PROGMEM = "lo importante";

const char string_47A[] PROGMEM = "Agradece";
const char string_47B[] PROGMEM = "cada dia";

const char string_48A[] PROGMEM = "Alimentate mejor";
const char string_48B[] PROGMEM = " ";

const char string_49A[] PROGMEM = "Dejalo ir";
const char string_49B[] PROGMEM = " ";

const char string_50A[] PROGMEM = "Sostener";
const char string_50B[] PROGMEM = "Aguantar";

const char string_51A[] PROGMEM = "Ve de a poco";
const char string_51B[] PROGMEM = " ";

const char string_52A[] PROGMEM = "Te parece";
const char string_52B[] PROGMEM = "justo?";

const char string_53A[] PROGMEM = "Conoce tus";
const char string_53B[] PROGMEM = "limites";

const char string_54A[] PROGMEM = "Quedate con";
const char string_54B[] PROGMEM = "quien te sume";

const char string_55A[] PROGMEM = "Quitate peso";
const char string_55B[] PROGMEM = "de encima";

const char string_56A[] PROGMEM = "No te creas";
const char string_56B[] PROGMEM = "mejor que nadie";

const char string_57A[] PROGMEM = "Eres, en rela-";
const char string_57B[] PROGMEM = "cion a otres";

const char string_58A[] PROGMEM = "No hay ni bien";
const char string_58B[] PROGMEM = "ni mal";

const char string_59A[] PROGMEM = "La vida es";
const char string_59B[] PROGMEM = "dura, querida";

const char string_60A[] PROGMEM = "No te";
const char string_60B[] PROGMEM = "pre-ocupes";

const char string_61A[] PROGMEM = "No esperes nada";
const char string_61B[] PROGMEM = "de nadie";

const char string_62A[] PROGMEM = "Elige bien donde";
const char string_62B[] PROGMEM = "pones tu energia";

const char string_63A[] PROGMEM = "Rompe tus";
const char string_63B[] PROGMEM = "estructuras";

const char string_64A[] PROGMEM = "Cambia la";
const char string_64B[] PROGMEM = "perspectiva";

const char string_65A[] PROGMEM = "Vuelve a tus";
const char string_65B[] PROGMEM = "raices";

const char string_66A[] PROGMEM = "Ve mas";
const char string_66B[] PROGMEM = "despacio";

const char string_67A[] PROGMEM = "Y quien te";
const char string_67B[] PROGMEM = "salva a ti?";

const char string_68A[] PROGMEM = "Observar hace";
const char string_68B[] PROGMEM = "al maestrx?";

const char string_69A[] PROGMEM = "Ningun extremo";
const char string_69B[] PROGMEM = "es sano";

const char string_70A[] PROGMEM = "Es el fin";
const char string_70B[] PROGMEM = "de un ciclo";

const char string_71A[] PROGMEM = "Se flexible";
const char string_71B[] PROGMEM = "como un junco";


const char *const string_tableA[] PROGMEM = {string_1A, string_2A, string_3A, string_4A, string_5A ,
                                             string_6A, string_7A, string_8A, string_9A, string_10A ,
                                             string_11A, string_12A, string_13A, string_14A, string_15A ,
                                             string_16A, string_17A, string_18A, string_19A, string_20A ,
                                             string_21A, string_22A, string_23A, string_24A, string_25A ,
                                             string_26A, string_27A, string_28A, string_29A, string_30A ,
                                             string_31A, string_32A, string_33A, string_34A, string_35A ,
                                             string_36A, string_37A, string_38A, string_39A, string_40A ,
                                             string_41A, string_42A, string_43A, string_44A, string_45A ,
                                             string_46A, string_47A, string_48A, string_49A, string_50A ,
                                             string_51A, string_52A, string_53A, string_54A, string_55A ,
                                             string_56A, string_57A, string_58A, string_59A, string_60A ,
                                             string_61A, string_62A, string_63A, string_64A, string_65A ,
                                             string_66A, string_67A, string_68A, string_69A, string_70A ,
                                             string_71A/*, string_72A, string_73A, string_74A, string_75A,*/
                                            };

const char *const string_tableB[] PROGMEM = {string_1B, string_2B, string_3B, string_4B, string_5B ,
                                             string_6B, string_7B, string_8B, string_9B, string_10B ,
                                             string_11B, string_12B, string_13B, string_14B, string_15B ,
                                             string_16B, string_17B, string_18B, string_19B, string_20B ,
                                             string_21B, string_22B, string_23B, string_24B, string_25B ,
                                             string_26B, string_27B, string_28B, string_29B, string_30B ,
                                             string_31B, string_32B, string_33B, string_34B, string_35B ,
                                             string_36B, string_37B, string_38B, string_39B, string_40B ,
                                             string_41B, string_42B, string_43B, string_44B, string_45B ,
                                             string_46B, string_47B, string_48B, string_49B, string_50B ,
                                             string_51B, string_52B, string_53B, string_54B, string_55B ,
                                             string_56B, string_57B, string_58B, string_59B, string_60B ,
                                             string_61B, string_62B, string_63B, string_64B, string_65B ,
                                             string_66B, string_67B, string_68B, string_69B, string_70B ,
                                             string_71B/*, string_72B, string_73B, string_74B, string_75B ,*/
                                            };

char buffer1[30];  // make sure this is large enough for the largest string it must hold
char buffer2[30];  // make sure this is large enough for the largest string it must hold

int estadoBoton, ultimoEstado = 0;
long p;
unsigned long previousMillis = 0;
const long interval = 100000;

void setup() {
  while (!Serial);  // wait for serial port to connect. Needed for native USB
  Serial.println("OK");

  Serial.begin(9600);

  randomSeed(analogRead(A0));

  pinMode(pinBoton, INPUT_PULLUP);

  lcd.init();

  delay(diley);
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    lcd.noBacklight();
    lcd.clear();
  }

  estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == LOW) {

    //automatico(2000); //pasa las frases en orden cada 2 segundos
    coinToss(random(2000));
    automaticoRandom();

  }
}

void automatico(int x) {

  lcd.backlight();

  for (int p = 0; p <= cantidad; p++) {

    strcpy_P(buffer1, (char *)pgm_read_word(&(string_tableA[p])));
    lcd.setCursor(0, 0);
    lcd.print(buffer1);

    strcpy_P(buffer2, (char *)pgm_read_word(&(string_tableB[p])));
    lcd.setCursor(0, 1);
    lcd.print(buffer2);

    delay(x);
    lcd.clear();
  }
}

void automaticoRandom() {

  p = random(cantidad);

  lcd.backlight();

  strcpy_P(buffer1, (char *)pgm_read_word(&(string_tableA[p])));  // Necessary casts and dereferencing, just copy.
  lcd.setCursor(0, 0);
  lcd.print(buffer1);

  strcpy_P(buffer2, (char *)pgm_read_word(&(string_tableB[p])));  // Necessary casts and dereferencing, just copy.
  lcd.setCursor(0, 1);
  lcd.print(buffer2);

}

void coinToss(int p) {

  lcd.backlight();

  for (int k = 0; k < p; k++) {
    int i = random(15);
    int j = random(15);
    lcd.printByte(i + j);
  }

  lcd.clear();
}
