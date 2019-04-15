void setup() {
  // Pinos a serem carregados
  pinMode(13, OUTPUT); // LED vermelho
  pinMode(12, OUTPUT); // LED amarelo
  pinMode(11, OUTPUT); // LED verde
  pinMode(10, OUTPUT); // LED vermelho - espere
  pinMode(9, OUTPUT); //  LED verde - siga
}

void loop() {
  // Sinal aberto - Acende LED verde
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  // Sinal para Pedestres - Siga
  digitalWrite(9, HIGH);
  delay(3000);

  // Sinal de espera - acende o LED amarelo
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  // Sinal para Pedestres - Pare
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(2000);

  // Sinal Fechado - acende o LED vermelho
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  // Sinal para Pedestres - Pare
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(5000);

  // Sinal para Pedestres fechando
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(800);
  digitalWrite(10, LOW);
  delay(800);
  digitalWrite(10, HIGH);
  delay(900);
  digitalWrite(10, LOW);
  delay(900);
}
