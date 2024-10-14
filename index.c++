String command;
const int relay1 = 13; // Define the relay1 pin
void setup()
{
    Serial.begin(9600);      // Set rate for communicating with Bluetooth
    pinMode(relay1, OUTPUT); // Set relay1 as an output
    setupRelays();           // Initialize relay states
    Serial.println("Setup complete. Waiting for commands...");
}
void loop()
{
    while (Serial.available())
    {                           // Check if there is an available byte to read
        delay(10);              // Delay added to make things stable
        char c = Serial.read(); // Conduct a serial read
        if (c == '\n')
        {
            break;
        } // Exit the loop when newline is
        detected
            command += c; // Shorthand for command = command + c
    }
    if (command.length() > 0)
    {
        Serial.print("Received command: ");
        Serial.println(command);

        if (command == "1")
        {                              // Command to ON Relay 01
            digitalWrite(relay1, LOW); // Relay 01 ON
            Serial.println("Bulb ON");
        }
        else if (command == "0")
        {                               // Command to OFF Relay 01
            digitalWrite(relay1, HIGH); // Relay 01 OFF
            Serial.println("Bulb OFF");
        }
        else
        {
            Serial.println("Unknown command.");
        }

        command = ""; // Reset the variable after processing
    }
}

void setupRelays()
{
    digitalWrite(relay1, HIGH); // Initially switch relay1 off
}

void switchalloff()
{ // Function for turning OFF all relays
    digitalWrite(relay1, HIGH);
}

void switchallon()
{ // Function for turning ON all relays
    digitalWrite(relay1, LOW);
}