  
  void Compass(int heading)
  {
    if(((heading>=338)&&(heading<=360))||((heading>=-22)&&(heading<=22)))
    {
      lcd.print(0,BYTE);
    }
    if((heading>=23)&&(heading<=68))
    {
      lcd.print(1,BYTE);
    }
     if((heading>=69)&&(heading<=113))
    {
      lcd.print(2,BYTE);
    }
    if((heading>=114)&&(heading<=158))
    {
      lcd.print(3,BYTE);
    }    
    if((heading>=159)&&(heading<=202))
    {
      lcd.print(4,BYTE);
    }   
    if((heading>=203)&&(heading<=248))
    {
      lcd.print(5,BYTE);
    }
    if((heading>=249)&&(heading<=292))
    {
      lcd.print(6,BYTE);
    }      
    if((heading>=293)&&(heading<=337))
    {
      lcd.print(7,BYTE);
    }      
  }
