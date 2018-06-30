My thought process was as follows:
1-my program does two things: switches an LED on when a button is pushed and reads temperature from a sensor
2-I want my code to be usable for different input values, so I must put them in functions
3-the first function is the one for the button and the LED, I simply should check if the button is pushed to switch on the LED and send the word "pressed" to the serial monitor if it's not I shoud switch the LED off. and that's what the function does.
4-the second function is the one for the temperature sensor, I should read data from the sensor and send that data to the serial monitor. Only problem is the data that the sensor returns isn't actual temperature, it's voltage so I must find a way to convert that voltage to the corresponding temperature.
5-I googled how to convert voltage from temperature sensor to Celsius degrees and I found an equation that does exactly that
6-after finishing my functions I called them in the Loop part of the program and passed the arguments I previously initiallized globally in the program which are pin numbers for the button, LED and sensor
7- sensor should send data every three seconds so after I check the button I delay the program by one second and read data from sensor to be able to see the output in the serial monitor then delay the program again for two more seconds which gives a total delay of three seconds as intended

I had little experience with Arduino from a couple of simple projects I participated in as a team member so I've known how to use the IDE, switches and LEDs and some sensors before, but not the temperature sensor and how we convert voltage to Celsius degrees in the code so this was totally new for me. Also, I haven't used functions before so this is new information I've learned in this project too.
