#include "Device.h"
//testing if my uploading works  --sadiq

Device::Device(MainWindow* mainWindow)
{
    display = mainWindow;
    frequency = 0.5;
}

//Setters
void Device::setBatteryPercentage(double per){

}

void Device::setFrequency(double freq){
    frequency = freq;
}

void Device::setCurrent(double cur){

}

void Device::setWaveform(QString const wave){

}



//Getters
double Device::getBattery(){

}

double Device::getFrequency(){
    return frequency;
}

double Device::getCurrent(){

}

QString Device::getWaveform(){

}

//functions

void Device::toggleTouchingSkin(){

}

bool Device::checkBattery(double per){

}

void Device::shutDown(){

}


//slots
void Device::toggle(){

}

void Device::changeFrequency(){
    qInfo("TEST");
    if (frequency == 0.5) {
        setFrequency(77);
        display->updateFrequency();
    }
    else if (frequency == 77) {
        setFrequency(100);
        display->updateFrequency();
    }
    else if (frequency == 100) {
        setFrequency(0.5);
        display->updateFrequency();
    }
}

void Device::resetTimeIdle(){

}
