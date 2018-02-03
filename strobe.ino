int i;
float a,b,c,d,z;
int e =1;
void setup() {                
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(3, INPUT_PULLUP);
 pinMode(2, INPUT_PULLUP);
 pinMode(13, OUTPUT);
 Serial.begin(9600);
}

void s4(){
digitalWrite(13,1);
digitalWrite(11,1);
delay(z);
digitalWrite(12,1);
delay(a);
}
void rr(){
digitalWrite(11,0);
digitalWrite(13,0);
delay(z);
digitalWrite(12,0);
delay(b);
}
void loop() {
if (digitalRead(2)==0){e=1; Serial.println(1);}
if (digitalRead(3)==0){e=0;Serial.println(0);}

if (e == 0){
c = analogRead(5);
d = analogRead(6);

if (c > 1000){
  c = 1000;
  }
else if (c < 40){
  c = 40;
}

if (d > 1000){
  d=1000;
}
d = d/10;
a = (c*d)/100;
b = c-a;
Serial.print(1000/c);
Serial.print("Hz    ");

Serial.print(d);
Serial.println("%");

s4();
rr();



}
/*
else if (e==1){

c = analogRead(7);
d =analogRead(6);

if (c > 1000){
  c = 1000;
  }
else if (c < 40){
  c = 40;
}

c = c*0.2;
   

d = 23 ;

if (c > 150){c=c*2; Serial.print("lllllllllllllllllllllll");}
else if (c < 150 && c > 145){
  c=c*1.8;
  d=d-22;
  Serial.print("llllllllllllllllll");
  }
else if (c < 145 && c > 140){
  c=c*1.7;
  d=d-20;
  Serial.print("llllllllllllllllll");
  }
else if (c < 140 && c > 135){
  c=c*1.6;
  d=d-19;
  Serial.print("lllllllllllllllll");
  }
else if (c < 135 && c > 130){
  c=c*1.5;
  d=d-18;
  Serial.print("llllllllllllllll");
  }
else if (c < 130 && c > 125){
  c=c*1.4;
  d=d-15;
  Serial.print("lllllllllllllll");
  }
else if (c < 125 && c > 120){
  c=c*1.3;
  d=d-13;
  Serial.print("llllllllllllll");
  }
else if (c < 120 && c >115){
  c=c*1.2;
  d=d-10;
  Serial.print("lllllllllllll");
  }
else if (c < 115 && c > 110){
  c=c*1.1;
  d=d-8;
  Serial.print("llllllllllll");
  }
else if (c < 110 && c > 105){
  c=c*0.95;
  d=d-5;
  Serial.print("lllllllllll");
  }
else if (c < 105 && c > 100){
  c=c*0.9;
  d=d-3;
  Serial.print("llllllllll");
  }
else if (c < 100 && c >95){
  c=c*0.8;
  d=d-2;
  Serial.print("lllllllll");
  }
else if (c < 95 && c > 90){
  c=c*0.7;
  d=d+2;
  Serial.print("llllllll");
  }
else if (c < 90 && c > 85){
  c=c*0.6;
  d=d+4;
  Serial.print("lllllll");
  }
else if (c < 85 && c > 80){
  c=c*0.5;
  d=d+6;
  Serial.print("llllll");
  }
else if (c < 80 && c > 75){
  c=c*0.4;
  d=d+9;
  Serial.print("lllll");
  }
else if (c < 75 && c > 70){
  c=c*0.3;
  d=d+10;
  
  Serial.print("llll");
  }
else if (c < 70 && c > 65){
  c=c*0.2;
  d=d+15;
  Serial.print("lll");
  }
else if (c < 65 && c > 60){
  c=c*0.1;
  d=d+18;
  Serial.print("ll");
  }
else if (c < 60){
  c=c*0.1/2;
  d=d+20;
  Serial.print("l");
  }
a = (c*d)/100;
b = c-a;

s4();
rr();
}*/


else if (e==1){
c = analogRead(3);
c = c/10;


if (c>95){c= 150; d= 40;Serial.print("llllllllllllllllllllll");} 
else if (c>90 && c<95){c= 160; d= 39;Serial.print("lllllllllllllllllllll");}
else if (c>85 && c<90){c= 155; d= 38;Serial.print("llllllllllllllllllll");}
else if (c>80 && c<85){c= 144; d= 36;Serial.print("lllllllllllllllllll");}
else if (c>75 && c<80){c= 147; d= 34;Serial.print("llllllllllllllllll");}
else if (c>70 && c<75){c= 144; d= 32 ;Serial.print("lllllllllllllllll");}
else if (c>65 && c<70){c= 140; d= 31;Serial.print("llllllllllllllll");}
else if (c>60 && c<65){c= 130; d= 29;Serial.print("lllllllllllllll");} 
else if (c>55 && c<60){c= 120; d= 28;Serial.print("llllllllllllll");}
else if (c>50 && c<55){c= 100; d= 27;Serial.print("llllllllllll");}
else if (c>45 && c<50){c=90; d= 26;Serial.print("llllllllll");}
else if (c>40 && c<45){c= 80; d= 24;Serial.print("llllllllll");}
else if (c>35 && c<40){c= 70; d= 22;Serial.print("llllllll");}
else if (c>30 && c<35){c= 60; d= 20;Serial.print("lllllll");}
else if (c>25 && c<30){c= 50; d= 18;Serial.print("llllll");}
else if (c>20 && c<25){c= 55; d= 16;Serial.print("lllll");}
else if (c>15 && c<20){c= 62; d= 12; Serial.print("llll");}
else if (c>10 && c<15){c= 85; d= 10; Serial.print("lll");}
else if (c>5 && c<10){c= 88; d= 8;Serial.print("ll");}
else if (c<5){c= 90; d=6;Serial.print("l");}

a = (c*d)/100;
b = c-a;
//z= (c*7)/100; // only use z to create delay between lights
z=0;
s4();
rr();
}
}




