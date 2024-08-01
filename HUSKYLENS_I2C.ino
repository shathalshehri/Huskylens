/***************************************************
 HUSKYLENS An Easy-to-use AI Machine Vision Sensor
 <https://www.dfrobot.com/product-1922.html>
 
 ***************************************************
 This example demonstrates basic usage of the HUSKYLENS library via I2C.
 
 Created 2020-03-13
 By [Angelo Qiao](Angelo.qiao@dfrobot.com)
 
 GNU Lesser General Public License.
 See <http://www.gnu.org/licenses/> for details.
 ****************************************************/

/***********Notice and Troubleshooting***************
 1. Connection and diagram can be found here:
 <https://wiki.dfrobot.com/HUSKYLENS_V1.0_SKU_SEN0305_SEN0336#target_23>
 2. This code has been tested on Arduino Uno, Leonardo, and Mega boards.
 ****************************************************/

#include "HUSKYLENS.h"

HUSKYLENS huskylens;
// HUSKYLENS green line >> SDA; blue line >> SCL
void printResult(HUSKYLENSResult result);
const int led = 7;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(115200);
    Wire.begin();
    while (!huskylens.begin(Wire)) {
        Serial.println(F("Initialization failed!"));
        Serial.println(F("1. Please check the 'Protocol Type' in HUSKYLENS (General Settings >> Protocol Type >> I2C)"));
        Serial.println(F("2. Please check the connection."));
        delay(100);
    }
}

void loop() {
    if (!huskylens.request()) {
        Serial.println(F("Failed to request data from HUSKYLENS, check the connection!"));
    } else if (!huskylens.isLearned()) {
        Serial.println(F("No objects learned yet, press the learn button on HUSKYLENS to add one!"));
    } else if (!huskylens.available()) {
        digitalWrite(led, LOW);
    } else {
        Serial.println(F("###########"));
        while (huskylens.available()) {
            HUSKYLENSResult result = huskylens.read();
            printResult(result);
        }
    }
}

void printResult(HUSKYLENSResult result) {
    if (result.command == COMMAND_RETURN_BLOCK) {
        Serial.println(String() + F("Block:xCenter=") + result.xCenter + F(", yCenter=") + result.yCenter + F(", width=") + result.width + F(", height=") + result.height + F(", ID=") + result.ID);
        digitalWrite(led, HIGH);
    } else if (result.command == COMMAND_RETURN_ARROW) {
        Serial.println(String() + F("Arrow:xOrigin=") + result.xOrigin + F(", yOrigin=") + result.yOrigin + F(", xTarget=") + result.xTarget + F(", yTarget=") + result.yTarget + F(", ID=") + result.ID);
        digitalWrite(led, HIGH);
    } else {
        Serial.println("Unknown object detected!");
    }
}
