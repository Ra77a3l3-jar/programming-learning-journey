# LED Blink Patterns - Your First Arduino Project

## Learning Objectives
- Understand Arduino setup() and loop() functions
- Learn digital output with digitalWrite()
- Master timing with delay() and millis()
- Create complex patterns with loops and arrays

## Components Needed
- Arduino Uno
- 4x LEDs (different colors)
- 4x 220Ω resistors
- Breadboard
- Jumper wires

## Circuit Diagram
```
Arduino Pin 8  → LED1 (anode) → 220Ω Resistor → GND
Arduino Pin 9  → LED2 (anode) → 220Ω Resistor → GND
Arduino Pin 10 → LED3 (anode) → 220Ω Resistor → GND
Arduino Pin 11 → LED4 (anode) → 220Ω Resistor → GND
```

## Project Progression

### Part 1: Basic Blink (5 minutes)
```cpp
// Basic single LED blink
const int ledPin = 8;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}
```

### Part 2: Multiple LED Sequence (15 minutes)
```cpp
// Sequential LED lighting
const int ledPins[] = {8, 9, 10, 11};
const int numLeds = 4;

void setup() {
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
    // Light LEDs in sequence
    for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], HIGH);
        delay(200);
        digitalWrite(ledPins[i], LOW);
    }
    
    // Reverse sequence
    for (int i = numLeds - 1; i >= 0; i--) {
        digitalWrite(ledPins[i], HIGH);
        delay(200);
        digitalWrite(ledPins[i], LOW);
    }
}
```

### Part 3: Advanced Patterns (30 minutes)
```cpp
// Complex patterns with timing control
const int ledPins[] = {8, 9, 10, 11};
const int numLeds = 4;

void setup() {
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
    Serial.begin(9600);
}

void loop() {
    knightRider();
    delay(500);
    
    flashAll();
    delay(500);
    
    randomPattern();
    delay(1000);
}

void knightRider() {
    // Knight Rider style sweep
    for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], HIGH);
        delay(100);
        digitalWrite(ledPins[i], LOW);
    }
    for (int i = numLeds - 2; i > 0; i--) {
        digitalWrite(ledPins[i], HIGH);
        delay(100);
        digitalWrite(ledPins[i], LOW);
    }
}

void flashAll() {
    // All LEDs flash together
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < numLeds; j++) {
            digitalWrite(ledPins[j], HIGH);
        }
        delay(200);
        for (int j = 0; j < numLeds; j++) {
            digitalWrite(ledPins[j], LOW);
        }
        delay(200);
    }
}

void randomPattern() {
    // Random LED activation
    for (int i = 0; i < 20; i++) {
        int randomLed = random(0, numLeds);
        digitalWrite(ledPins[randomLed], HIGH);
        delay(50);
        digitalWrite(ledPins[randomLed], LOW);
        delay(50);
    }
}
```

### Part 4: Non-blocking Timing (Advanced - 45 minutes)
```cpp
// Using millis() for better timing control
const int ledPins[] = {8, 9, 10, 11};
const int numLeds = 4;

unsigned long previousMillis = 0;
const long interval = 200;
int currentLed = 0;
bool direction = true;

void setup() {
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
    Serial.begin(9600);
}

void loop() {
    unsigned long currentMillis = millis();
    
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;
        
        // Turn off all LEDs
        for (int i = 0; i < numLeds; i++) {
            digitalWrite(ledPins[i], LOW);
        }
        
        // Turn on current LED
        digitalWrite(ledPins[currentLed], HIGH);
        
        // Update position
        if (direction) {
            currentLed++;
            if (currentLed >= numLeds) {
                currentLed = numLeds - 2;
                direction = false;
            }
        } else {
            currentLed--;
            if (currentLed < 0) {
                currentLed = 1;
                direction = true;
            }
        }
    }
    
    // Other code can run here without being blocked!
    serialOutput();
}

void serialOutput() {
    static unsigned long lastPrint = 0;
    if (millis() - lastPrint > 1000) {
        lastPrint = millis();
        Serial.println("Knight Rider pattern running...");
    }
}
```

## Challenges to Try

### Beginner Challenges
1. **Speed Control**: Add a potentiometer to control pattern speed
2. **Pattern Selection**: Use buttons to switch between different patterns
3. **Color Mixing**: Use RGB LEDs instead of single-color LEDs

### Intermediate Challenges
1. **Music Visualization**: Make LEDs respond to audio input
2. **Temperature Display**: Show temperature ranges with LED colors
3. **Network Status**: Indicate WiFi signal strength with LED patterns

### Advanced Challenges
1. **Matrix Display**: Create an 8x8 LED matrix with scrolling text
2. **Persistence of Vision**: Create a spinning LED display
3. **Interactive Game**: Build a Simon Says game with LEDs

## Key Concepts Learned

### Programming Concepts
- **Arrays and loops** for managing multiple components
- **Functions** for organizing code into reusable blocks
- **Timing** with delay() vs millis() approaches
- **Serial communication** for debugging

### Electronics Concepts
- **Current limiting** with resistors
- **Digital output** and voltage levels
- **Breadboard** connections and circuit building
- **LED specifications** and proper operation

### Engineering Practices
- **Incremental development** - start simple, add complexity
- **Code organization** - readable and maintainable structure
- **Testing and debugging** - verify each step works
- **Documentation** - comment your code and circuits

## Troubleshooting Guide

### Common Issues
1. **LED doesn't light**: Check polarity (long leg = positive)
2. **Dim LED**: Wrong resistor value or poor connections
3. **Code doesn't upload**: Check board selection and USB connection
4. **Erratic behavior**: Check for loose wires on breadboard

### Debugging Tips
1. Use Serial.println() to output debug information
2. Test one LED at a time before adding complexity
3. Double-check all connections with a multimeter
4. Start with the simplest version and build up

## Next Steps
Once you've mastered these patterns, you're ready for:
- **Button input** control (Project 2)
- **Sensor integration** (Project 3)
- **Multiple input/output** combinations (Project 4)

## Portfolio Documentation
Document this project with:
- **Photos/videos** of your circuit and patterns
- **Code comments** explaining your design decisions
- **Challenges faced** and how you solved them
- **Variations** you created beyond the basic requirements

Remember: This simple project teaches fundamental concepts you'll use in every future Arduino project!