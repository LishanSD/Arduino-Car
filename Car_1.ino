int in1 = 11;
int in2 = 10;
int in3 = 9;
int in4 = 8;

char x;

void setup()
{
    Serial.begin(9600);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void loop()
{
    if (Serial.available() > 0)
    {
        x = Serial.read();
        if (x == 'f')
            forward();
        else if (x == 'b')
            backward();
        else if (x == 'r')
            right();
        else if (x == 'l')
            left();
    }
}

void forward()
{
    digitalWrite(in1, HIGH);
    digitalWrite(in3, HIGH);
    delay(500);
    digitalWrite(in1, LOW);
    digitalWrite(in3, LOW);
}

void backward()
{
    digitalWrite(in2, HIGH);
    digitalWrite(in4, HIGH);
    delay(500);
    digitalWrite(in2, LOW);
    digitalWrite(in4, LOW);
}

void left()
{
    digitalWrite(in1, HIGH);
    digitalWrite(in4, HIGH);
    delay(500);
    digitalWrite(in1, LOW);
    digitalWrite(in4, LOW);
}

void right()
{
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    delay(500);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
}