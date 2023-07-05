int i=0;
int boton=3;

void setup() {
  // put your setup code here, to run once:
for(i=6;i<14;i++)
pinMode(i,OUTPUT);
pinMode(boton,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for ( i = 6 ; i < 10 ; i++)
{
digitalWrite( i , HIGH) ;
int j=19-i;
digitalWrite( j, HIGH);
delay (25) ;
digitalWrite( i , LOW);
digitalWrite( j , LOW);
delay (25) ;

}
for ( i = 1 ; i < 5 ; i++)
{
int j=10-i;
int k=9+i;
digitalWrite( j , HIGH) ;
digitalWrite( k , HIGH) ;
delay (25) ;
digitalWrite( j , LOW);
digitalWrite( k , LOW);
delay (25) ;
}

}
