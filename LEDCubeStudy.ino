
//I am writing up a documentation for the LED cube library, specifically the 3x3x3 cube. This is where I conduct some experiments with the code.


#include <LedCube.h>

#define SIZE 3
#define COLS (SIZE*SIZE)

byte levelPins[SIZE] = {11,12,13};
byte colPins[COLS] = {2,3,4,5,6,7,8,9,10};

LedCube cube(SIZE, levelPins, colPins);

//#define DEBUG
#ifdef DEBUG
#include <memdebug.h>
void showmem(const char label[] = "")
{
  char buffer[100];
 
  sprintf(buffer,"%s: %04u %04u %04u : used/free",
      label,
      getMemoryUsed(),
      getFreeMemory()
    );
 
  Serial.println(buffer);
}
#endif

void setup ()
{
#ifdef DEBUG
    Serial.begin(9600);
#endif
}

void loop ()
{
    delay(10);

// for (int i; i < 9; i++) 
//  {
//  cube.lightDrop(i, 500);
//  i++;
//  }   
//  
   
    
 for (int i; i < 9; i++) 
  {
  cube.lightOn(2, i); 
  }



    
/* cube.light(1, 0, 1);
 cube.light(1, 1, 1);
 cube.light(0, 2, 1);
 cube.light(1, 2, 1);
 cube.light(2, 2, 1);*/

}

