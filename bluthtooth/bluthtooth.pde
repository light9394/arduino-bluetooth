import processing.serial.*;

Serial port;
String string;
void setup()
{
 port=new Serial(this,"COM4",9600);
 port.bufferUntil('\n');
  
}

void draw(){
 printArray(string);
  
}

void Keypressed(){
 if(key=='1'){port.write('1');} 
if(key=='0'){port.write('0'); }
}

void serialEvent(Serial port){
  string=port.readStringUntil('\n');} 
