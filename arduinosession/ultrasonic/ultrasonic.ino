
int echo[] = {7,9};
int trg[] = {6, 8};

void setup() {
  for(int i=0; i< sizeof(echo)/sizeof(int); i++) {
    pinMode(echo[i], INPUT);
    pinMode(trg[i], OUTPUT);
  }

  Serial.begin(9600);
}

float ping(int sensor) {
  digitalWrite(trg[sensor], LOW);
  delayMicroseconds(2);
  digitalWrite(trg[sensor], HIGH);
  delayMicroseconds(10);
  digitalWrite(trg[sensor], LOW);
  float distance = pulseIn(echo[sensor], HIGH) / 58.2;
  return distance;
}

void loop() {
  int dist1 = ping(0);
  int dist2 = ping(1);

  Serial.println("=======");
  Serial.println(dist1);
  Serial.println(dist2);
  // calculate x, y here
}
