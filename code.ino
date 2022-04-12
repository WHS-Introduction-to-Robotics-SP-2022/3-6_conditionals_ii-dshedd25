int inPin = A0;
int val;
int x;
void setup() {
  Serial.begin(9600);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
}

void loop() {
  x=(analogRead(inPin));
    Serial.println(x);
    if(x<=146) { //red
      analogWrite(11, 255);
      analogWrite(10, 0);
      analogWrite(9, 0);
    }
    else if(x>147 && x<=292) 
    {
      analogWrite(11, 255);
    analogWrite(10, 132);
    analogWrite(9, 0);
    
    }
  else if(x>293 && x<=439) 
  {
    analogWrite(11, 255);
    analogWrite(10, 255);
    analogWrite(9, 0);
    
  }
    else if(x>440 && x<=585) 
    {
    analogWrite(11, 0);
    analogWrite(10, 255);
    analogWrite(9, 0);
    
    }
    else if(x>586 && x<=731) //blue
    {
      analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 255);
    
    }
    else if(x>732 && x<=886) //indigo
    {
      analogWrite(11, 170);
    analogWrite(10, 0);
    analogWrite(9, 255);
    
    }
    else { //vilot
      analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 255);
    
    }
}
