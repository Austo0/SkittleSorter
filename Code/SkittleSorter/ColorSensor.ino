    //Serial.println("Reading");
    //delay(100);
    //stepper.stop();
    //delay(20);
//      stepper.setMaxSpeed(5000);
//  stepper.setAcceleration(5000);
//    stepper.move(80);
//    while(stepper.distanceToGo() != 0)
//    {
//         stepper.setMaxSpeed(5000);
//  stepper.setAcceleration(5000);
//      stepper.run();
//      //Serial.print(stepper.distanceToGo());
//    }


//  if(redCalc < MAX_APPLE_RED && redCalc > MIN_APPLE_RED && blueCalc < MAX_APPLE_BLUE && blueCalc > MIN_APPLE_BLUE) 
//  {
//    Serial.println("Apple");
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  }
//  
//  //Lemon
//  else if(redCalc < MAX_LEMON_RED && redCalc > MIN_LEMON_RED && blueCalc < MAX_LEMON_BLUE && blueCalc > MIN_LEMON_BLUE) 
//  {
//    Serial.println("Lemon");
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  }
//
//  //Orange
//  else if(redCalc < MAX_ORANGE_RED && redCalc > MIN_ORANGE_RED &&  blueCalc < MAX_ORANGE_BLUE && blueCalc > MIN_ORANGE_BLUE) 
//  {
//    Serial.println("Orange");
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  }
//
//  //Strawberry
//  else if(redCalc < MAX_STRAWBERRY_RED && redCalc > MIN_STRAWBERRY_RED  && blueCalc < MAX_STRAWBERRY_BLUE && blueCalc > MIN_STRAWBERRY_BLUE) 
//  {
//    Serial.println("Strawberry");
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  }
//
//  //Grape
//  else if(redCalc < MAX_GRAPE_RED && redCalc > MIN_GRAPE_RED && blueCalc < MAX_GRAPE_BLUE && blueCalc > MIN_GRAPE_BLUE) 
//  {
//    Serial.println("Grape");
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  }
//  // None
//  else if(redCalc < MAX_NONE_RED && redCalc > MIN_NONE_RED && blueCalc < MAX_NONE_BLUE && blueCalc > MIN_NONE_BLUE) 
//  {
//    Serial.println("None");
//    noSkittleCounter ++;
//  }
//  else
//  {
//    Serial.println("Unknown");
//    //unknownSkittleFlag = 1;
//  }


//    stepper.move(100);
//    while(stepper.distanceToGo() != 0)
//    {
//      stepper.run();
//      //Serial.print(stepper.distanceToGo());
//    }


  //stepperTube.setMaxSpeed(5000);
  //stepperTube.setAcceleration(1000);
//stepperTube.runToNewPosition(trayPosArray[arrayColourIndex]);
//stepperTube.moveTo(trayPosArray[arrayColourIndex])


//  
//    Serial.print(F(" ["));
//    Serial.print(redCalc);
//    Serial.print(F(","));
//    Serial.print(greenCalc);
//    Serial.print(F(","));
//    Serial.print(blueCalc);
//    Serial.print(F(","));
//   // Serial.print(lux);
//    Serial.print(F("], "));

//    Serial.print(F(" ["));
//    Serial.print(r);
//    Serial.print(F(","));
//    Serial.print(g);
//    Serial.print(F(","));
//    Serial.print(b);
//    Serial.print(F(","));
//    Serial.print(c);
//    Serial.println(F("], "));

//  unknownSkittleFlag = 0;
  //Apple
  //stepperTube.setSpeed(5000);

    //arrayColourIndex = redBlueArray[blueIndex][redIndex] ;

    //      stepper.setSpeed(-500);
//      stepper.runSpeed();
//      stepper.run();
//      
//      stepper.setSpeed(500);
//      stepper.runSpeed();
//      stepper.run();


//
//arrayColourIndex = 4;
//    if(stepperTube.currentPosition() != trayPosArray[arrayColourIndex])
//  {
//    stepperTube.moveTo(trayPosArray[arrayColourIndex]);
//    while(stepperTube.distanceToGo() != 0)
//    {
//      stepperTube.run();
//       Serial.println(stepperTube.distanceToGo());
//    }
//  }
//  else
//  {
////    delay(1000);
////    arrayColourIndex ++;
////    if(arrayColourIndex <= 5)
////    {
////      arrayColourIndex = 0;
////    }
//  }
////  tcs.getRawData(&r, &g, &b, &c);
////      Serial.print(F(" ["));
////    Serial.print(r);
////    Serial.print(F(","));
////    Serial.print(g);
////    Serial.print(F(","));
////    Serial.print(b);
////    Serial.print(F(","));
////    Serial.print(c);
////    Serial.println(F("], "));
//
//     tcs.getRawData(&r, &g, &b, &c);
//     red = r;
//     green = g;
//      blue = b;
//
//    redCalc = ((float)red / green) * 100.0;
//    blueCalc = ((float)blue / green) * 100.0;
//
//
//redIndex = ((redCalc - redStart)/ redIncrement) ;
//blueIndex = ((blueCalc - blueStart)/ blueIncrement) ;
//
//      arrayColourIndex =  pgm_read_byte(&(redBlueArray[(int)blueIndex][(int)redIndex]));
//  //arrayColourIndex = redBlueArray[blueIndex][redIndex] ;
// Serial.print(redCalc);
//  Serial.print(", ");
//   Serial.print(blueCalc);
//  Serial.print(", ");
//  Serial.print(redIndex);
//  Serial.print(", ");
//  Serial.print(blueIndex);
//  Serial.print(", ");
//  Serial.print(arrayColourIndex);
//  Serial.print(", ");
//  
////  
////    Serial.print(F(" ["));
////    Serial.print(redCalc);
////    Serial.print(F(","));
////    Serial.print(greenCalc);
////    Serial.print(F(","));
////    Serial.print(blueCalc);
////    Serial.print(F(","));
////   // Serial.print(lux);
////    Serial.print(F("], "));
//
////    Serial.print(F(" ["));
////    Serial.print(r);
////    Serial.print(F(","));
////    Serial.print(g);
////    Serial.print(F(","));
////    Serial.print(b);
////    Serial.print(F(","));
////    Serial.print(c);
////    Serial.println(F("], "));
//
////  unknownSkittleFlag = 0;
//  //Apple
//
//Serial.print(stepperTube.currentPosition()); 
//Serial.print(", ");
//switch(arrayColourIndex)
//{
//  case(Apple):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//    
//  break;
//  
//  case(Lemon):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  break;
//
// case(Orange):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  break;
//
//   case(Strawberry):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  break;
//
//  case(Grape):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleStopFlag = 0;
//    noSkittleCounter = 0;
//  break;
//
//  case(None):
//    Serial.println(skittleFlavourStrings[arrayColourIndex]);
//    noSkittleCounter ++;
//  break;
//  
//  default:
//    Serial.println("Unknown");
//  break;
//
//  
//}
//
//    delay(100);
////    stepperTube.setSpeed(10);
////    stepperTube.runSpeed();
////Serial.println(stepperTube.currentPosition()); 
//    //stepper.runSpeedToPosition();
//    
//    //delay(1000);
