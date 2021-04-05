MultiStepper steppers;
Servo penServo;  
const int penServoPin =7 ;
const int penZUp = 125;
const int penZDown = 95;
String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete



long posx,posy;
 long positions[2];

void mow(long x,long y)
{
 
  posx=posx+x;
  posy=posy+y;
 
  positions[0] = posx;
  positions[1] = posy;
 
  steppers.moveTo(positions);
  steppers.runSpeedToPosition(); // Blocks until all are in position
 
  Serial.print("X=");
  Serial.print(posx);
  Serial.print(" Y=");  
  Serial.println(posy);
}


int c,j=1;

char inChar;
long count;

int i;

void main() {
  Serial.begin(9600);
  inputString.reserve(200);
  Serial.println("Writing Robot");
  stepper1.setMaxSpeed(300);
  stepper2.setMaxSpeed(300);
  penServo.attach(penServoPin);
  penServo.write(penZUp);
  delay(100);
  steppers.addStepper(stepper1);
  steppers.addStepper(stepper2);


if(digitalRead(8)==0)
  {
     mow(0,10);
  }
if(digitalRead(9)==0)
  {
     mow(0,10);
  }
if(digitalRead(12)==0)
  {
     mow(10,0);
  }
if(digitalRead(10)==0)
  {
     mow(10,0);
  }
 


if(j==0)
{
  count++;

  if(count==12)
    {
      count=0;
      penServo.write(penZUp);
      mow(0,1000);
     mow(-posx,0);
    }

if(inChar=='*')
  {
     mow(0,100);
  }
if(inChar=='#')
 
     mow(0,100);
  }
if(inChar=='$')
  {
     mow(100,0);
  }
if(inChar=='@')
  {
     mow(100,0);
  }

 
  if((inChar=='A')||(inChar=='a'))
  {
 penServo.write(penZDown);
 mow(0,500);
 mow(50,50);
 mow(100,0);
 mow(50,50);
 mow(0,500);

  }
 if((inChar=='B')||(inChar=='b'))
  {
 penServo.write(penZDown);
 mow(0,538);
 mow(150,0);
 mow(50,50);
 mow(0,169);
 mow(0,169);
 mow(-50,50);

  }

 if((inChar=='C')||(inChar=='c'))
  {
 mow(300,0);
 penServo.write(penZDown);
 mow(150,0);  
 mow(50,50);
 mow(0,438);

  }

if((inChar=='D')||(inChar=='d'))
  {
 penServo.write(penZDown);
 mow(0,-538);
 mow(150,0);  

  }

if((inChar=='E')||(inChar=='e'))
  {
 penServo.write(penZDown);
 mow(0,-538);
 mow(150,0);  
 penServo.write(penZUp);

 mow(100,0);  
 penServo.write(penZUp);
 mow(-100,0);  

  }

if((inChar=='F')||(inChar=='f'))
  {

 mow(-150,0);  
 mow(0,269);
 penServo.write(penZDown);
 mow(100,0);  
 penServo.write(penZUp);

  }


if((inChar=='G')||(inChar=='g'))
  {
 mow(0,-538);
 mow(200,0);  
 mow(50,50);  
 penServo.write(penZDown);  
 mow(-50,-50);    

  }

if((inChar=='H')||(inChar=='h'))
  {
 penServo.write(penZDown);      
 mow(0,-538);
     
 mow(250,0);
 penServo.write(penZUp);      
 mow(0,-279);
 penServo.write(penZDown);      

  }  

if((inChar=='I')||(inChar=='i'))
  {
 penServo.write(penZUp);      
 mow(0,-538);
 penServo.write(penZDown);      
 mow(250,0);
 penServo.write(penZUp);      
 mow(-125,0);
 penServo.write(penZDown);      
 mow(0,538);

  }  

if((inChar=='J')||(inChar=='j'))
  {
 penServo.write(penZUp);      
 mow(0,-538);
 penServo.write(penZDown);      
 mow(250,0);
 penServo.write(penZUp);      
 mow(-125,0);
 penServo.write(penZDown);      

  }  

if((inChar=='K')||(inChar=='k'))
  {
 penServo.write(penZDown);      
 mow(0,-538);
 penServo.write(penZUp);      
 mow(0,279);
 penServo.write(penZDown);      
 mow(279,-279);

  }  

if((inChar=='L')||(inChar=='l'))
  {
 penServo.write(penZUp);      
 mow(0,-538);
 penServo.write(penZDown);      
 mow(0,538);
 mow(250,0);
 penServo.write(penZUp);
 mow(125,0);
 j=1;
  }  

if((inChar=='M')||(inChar=='m'))
  {
 penServo.write(penZDown);      
 mow(0,-538);
 mow(200,379);
 mow(200,-379);
 mow(0,538);
 penServo.write(penZUp);
 mow(125,0);
 j=1;
  }  

if((inChar=='N')||(inChar=='n'))
  {
 penServo.write(penZDown);      
 mow(0,-538);
 mow(250,538);
 mow(0,-538);

  }  

if((inChar=='O')||(inChar=='o'))
  {
 mow(0,-79);
 penServo.write(penZDown);      
 mow(0,-380);
 mow(100,-100);
 mow(100,0);
 mow(100,100);

  }  

if((inChar=='p')||(inChar=='P'))
  {
 penServo.write(penZDown);      
 mow(0,-536);
 mow(250,0);
 mow(50,50);  

  }  

if((inChar=='Q')||(inChar=='q'))
  {
 mow(0,-79);
 penServo.write(penZDown);      
 mow(0,-380);
 mow(100,-100);
 mow(200,0);
 mow(100,100);
 mow(0,380);
 mow(-100,100);
  }  

if((inChar=='R')||(inChar=='r'))
  {
 penServo.write(penZDown);
 mow(0,-538);
 mow(150,0);
 mow(50,50);
 mow(0,169);
  }  


if((inChar=='S')||(inChar=='s'))
  {
 mow(0,-536);
 mow(250,0);    
 penServo.write(penZDown);      
 mow(-250,0);
 mow(0,279);
  }  

if((inChar=='T')||(inChar=='t'))
  {
 mow(0,-536);
 mow(300,0);    
 penServo.write(penZDown);      
 mow(-300,0);
 penServo.write(penZUp);      
   }  

if((inChar=='U')||(inChar=='u'))
  {
 mow(100,0);
 mow(100,-100);
 mow(0,-462);      
 penServo.write(penZUp);  
 mow(0,536);      
 mow(125,0);  
 j=1;
  }  

if((inChar=='V')||(inChar=='v'))
  {

 mow(175,-538);  
 penServo.write(penZUp);  
 mow(0,538);      
 mow(125,0);  
 j=1;
  }  

if((inChar=='W')||(inChar=='w'))
  {
 
 mow(150,538);
 mow(150,-538);  
 penServo.write(penZUp);  
 mow(0,538);      
 mow(125,0);  
 j=1;
  }  

if((inChar=='X')||(inChar=='x'))
  {
 penServo.write(penZDown);      
 mow(-250,538);  
 penServo.write(penZUp);  
 mow(375,0);  
 j=1;
  }  


if((inChar=='Y')||(inChar=='y'))
  {
 mow(0,-538);
 penServo.write(penZDown);      
 mow(125,279);
 penServo.write(penZUp);  
 mow(125,279);  
  }  


if((inChar=='Z')||(inChar=='z'))
  {
 mow(0,-538);
 penServo.write(penZDown);      
 mow(250,0);
 mow(-250,538);  
  }  


if(inChar==' ')
  {
 penServo.write(penZUp);  
 mow(250,0);  
 j=1;
  }  


if(inChar=='1')
  {
 penServo.write(penZDown);        
 mow(0,-538);
 penServo.write(penZUp);      
  }  

if(inChar=='2')
  {
 mow(0,-536);
 penServo.write(penZDown);      
 mow(250,0);    
 mow(0,279);
  }  

if(inChar=='3')
  {
 mow(0,-536);
 penServo.write(penZDown);      
 mow(250,0);    
 mow(0,279);
 mow(-250,0);
 penServo.write(penZUp);      
  }  

if(inChar=='4')
  {
 mow(0,-536);
 penServo.write(penZDown);      
 mow(0,400);  
 mow(250,0);
 penServo.write(penZUp);            
  }  


if(inChar=='5')
  {
 mow(0,-536);
 mow(250,0);    
 penServo.write(penZDown);      
 mow(-250,0);
 mow(0,379);
  }  



if(inChar=='6')
  {
 mow(0,-536);
 penServo.write(penZDown);      
 mow(0,536);
 mow(250,0);  
  }  


if(inChar=='7')
  {
 mow(0,-536);
 penServo.write(penZDown);      
 mow(250,0);
  }  

if(inChar=='8')
  {
 penServo.write(penZDown);      
 mow(0,-536);
 mow(250,0);
 mow(0,536);
 mow(-250,0);
  }  

if(inChar=='9')
  {
 mow(250,0);
 penServo.write(penZDown);  
 mow(0,-536);
 mow(-250,0);

  }  

if(inChar=='0')
  {
 mow(0,-79);
 penServo.write(penZDown);      
 mow(0,-380);
  }  



if(inChar=='=')
  {
 mow(0,-379);
 penServo.write(penZDown);      
 mow(250,0);
 penServo.write(penZUp);
 mow(0,200);
 j=1;
  }  

if(inChar=='.')
  {
 penServo.write(penZDown);      
 mow(10,0);
 mow(0,-10);
 mow(-10,0);
 j=1;
  }  

 if(inChar==',')
  {
 mow(0,-50);    
 mow(-50,0);    
 penServo.write(penZDown);      
 mow(50,50);
 penServo.write(penZUp);  
 mow(100,0);  
 j=1;
  }  

 
 
}
}





