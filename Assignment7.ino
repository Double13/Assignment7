 /*
Evil.inc industries
Powered by Michael Lammers
*/
 int multipier;
 int result;
 int input;
 
 void setup()
 {
     Serial.begin(9600);
 }
 
 void loop (){ 
       if (Serial.available() > 0)
       {
          input= Serial.parseInt(); // this frunction reads only the number from the keyboard 
          if(input>=1 && input <=99){
            for(int multipier=1; multipier<=9; multipier++)
            {
              result = multipier*input ;//the multipier of this equeation will be showen in the end 
              Serial.print(multipier);  
              Serial.print(" ");
              Serial.print("*");// only print **
              Serial.print(" ");
              Serial.print(" ");
              Serial.print(input);
              Serial.print("=");// it will only print =
              Serial.println(result);
              delay(10);// this delay will make the printing slower so we can se it  
            }
          }
            else{
              Serial.println("Wrong value entered");
          }
     }    
}
