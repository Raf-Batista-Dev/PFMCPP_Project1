#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Computer
//  action 1: Activate power supply to supply power to components
computer.activatePowerSupply();
//  action 2: Run POST to check hardware
computer.runPOST();
//  action 3: Run power off process to shut down the computer
computer.runPowerOffSteps();
//  2)
//  Noun: Dog
//  action 1: The dog barks
dog.bark();
//  action 2: The dog can fetch
dog.fetch();
//  action 3: The dog can sit
dog.sit();
//  3)
//  Noun: Keyboard (instrument)
//  action 1: Produce sound when a key is played
keyboard.playNote();
//  action 2: Raise the volume
keyboard.increaseVolume();
//  action 3: Lower volume
keyboard.decreaseVolume();
//  4)
//  Noun: Guitar
//  action 1: Play a note by vibrating the string
guitar.vibrateString();
//  action 2: Tune a string up by winding the tuning peg
guitar.tightenString();
//  action 3: Tune a string down by winding the tuning peg
guitar.losenString();
//  5)
//  Noun: Electronic Drum Set
//  action 1: Produce soft sound from kick drum when hit softly
electronicDrumSet.playKickDrumSoft();
//  action 2: Produce loud sound when kick drum is hit with force
electronicDrumSet.playKickDrumHard();
//  action 3: Change the sound of the kit from a list of different kits
electronicDrumSet.selectNextKit();
//  6)
//  Noun: Cat
//  action 1: A cat can extend their claws when they stretch
cat.extendClawDuringStretch();
//  action 2: A cat can meow
cat.meow();
//  action 3: A cat can pounce on your defensless arm
cat.stareIntenselyThenPounce();
//  7)
//  Noun: Hard drive
//  action 1: Write to disk cache
hardDrive.writeToDiskCache();
//  action 2: Write from disk cache to hard drive
hardDrive.writeFromCacheToDisk();
//  action 3: Erase the disk cache
hardDrive.flushDiskCache();
//  8)
//  Noun: Home Router
//  action 1: Store the MAC address of a device
router.storePhysicalAddressInTable();
//  action 2: Store the IP address of a device
router.storeLogicalAddressInTable();
//  action 3: Perform NAT when sending request outside the home network
router.changeSourceIpAndStoreInTable()
//  9)
//  Noun: Traffic Light
//  action 1: Turn on light to indicate that cars can go
trafficLight.turnOnGreenLight();
//  action 2: Turn on light to indicate cars should slow down
trafficLight.turnOnYellowLight();
//  action 3: Turn on light to indicate cars should stop
trafficLight.turnOnRedLight();
//  10)
//  Noun: car
//  action 1: Turn on the turn signal
car.turnOnTurnSignal();
//  action 2: Alert Driver of object in blind side
car.alertWhenObjectInBlindSide();
//  action 3: Turn on rear view camera
car.displayRearCamera();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
