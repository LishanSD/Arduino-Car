int in1 = 11;
int in2 = 10;
int in3 = 9;
int in4 = 8;
int enA = 6;
int enB = 5;

char x;

void setup()
{
    Serial.begin(9600);

    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(enA, OUTPUT);
    pinMode(enB, OUTPUT);

    analogWrite(enA, 255);
    analogWrite(enB, 255);
}

void loop()
{
    if (Serial.available() > 0)
    {
        x = Serial.read();

        if (x == 'F')
            forward();
        else if (x == 'B')
            backward();
        else if (x == 'L')
            left();
        else if (x == 'R')
            right();
        else if (x == 'G')
            fdl();
        else if (x == 'I')
            fdr();
        else if (x == 'H')
            bkl();
        else if (x == 'J')
            bkr();

        else if (x == '0')
            s0();
        else if (x == '1')
            s1();
        else if (x == '2')
            s2();
        else if (x == '3')
            s3();
        else if (x == '4')
            s4();
        else if (x == '5')
            s5();
        else if (x == '6')
            s6();
        else if (x == '7')
            s7();
        else if (x == '8')
            s8();
        else if (x == '9')
            s9();
        else if (x == 'q')
            s10();

        else if (x == 'S')
            st();
    }
    delay(10);
}