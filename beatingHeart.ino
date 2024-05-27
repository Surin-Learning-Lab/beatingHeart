int R[]={2,3,4,5,6,7,8,9};
int C[]={10,11,12,13,14,15,16,17};

byte bigHeart[8] [8] =
{
  0,0,0,0,0,0,0,0,
  0,1,1,0,0,1,1,0,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  0,1,1,1,1,1,1,0,
  0,0,1,1,1,1,0,0,
  0,0,0,1,1,0,0,0,
};

byte smallHeart[8] [8] =
{
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,1,0,0,1,0,0,
  0,1,1,1,1,1,1,0,
  0,1,1,1,1,1,1,0,
  0,0,1,1,1,1,0,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

void setup() {
  // put your setup code here, to run once:
for(int j=0; j<8; j++){
  pinMode(R[j],OUTPUT);
  pinMode(C[j],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int j=0; j<100; j++){
  Display(bigHeart);
}
for(int j=0; j<50; j++) {
  Display(smallHeart);
}
}

void Display(byte data[8] [8]) {
  for(int c=0; c<8; c++) {
    digitalWrite(C[c],LOW);
    for(int r=0; r<8; r++) {
      digitalWrite(R[r], data[r] [c]);
    }
    delay(1);
    Clear();
  }
}

void Clear() {
  for  (int i=0; i<8; i++){
    digitalWrite(R[i], LOW);
    digitalWrite(C[i], HIGH);
  }
}

