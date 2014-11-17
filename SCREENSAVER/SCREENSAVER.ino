
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}
void loop()                     // run over and over again
{
  int x=random(7)+1 ; 
  for(int i=0; i<8;i++)
  {
    
    for(int j=0; j<8;j++)
    {
      
      DrawPx(i,j,x);
      
      DisplaySlate() ;
      delay(.01) ;
      
      
    }
  }
{
  for(int i=0; i<8;i++)
  {
    for(int j=0; j<8;j++)
    {
      DrawPx(i,j,0);
      
      DisplaySlate() ;
      delay(.01) ;
      
      
    }
  }
}
}


