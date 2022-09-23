[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8605313&assignment_repo_type=AssignmentRepo)
# CS 202 Lab 4

### Learning Targets
* I can create a makefile that compiles a class    
* I can construct a small class  
* I can construct an array of class objects  

### Grading
This lab is graded on a "pass / needs work" basis. No partial credit is given. You must pass the autograder tests to earn full credit.  

### Purpose

The purpose of this lab is to give you experience in a class, it's makefile, and constructing an array of class object.  

This repository contains the main driver `driver.cpp`, which only contains main(). Also included is `pet.h` and `pet.cpp` and `makefile`, but the makefile is blank and the pet class is missing the properties and methods outlined below. Programs of any substantial size are broken into multiple files, as we are doing with the pet class. This allows for easier development and debugging, and makes it possible to share code between projects. Your goal for this project is to create a pet class, with the properties and methods outlined below. You must also modify driver.cpp so that so that the pseudocode comments in the driver.cpp file are actually implemented in code by you. You may add code to `driver.cpp`, but you may not alter the code that has already been provided- in other words, you can add the lines of code that the comments ask for, but you should not change any of the code that has already been provided. You may edit the empty files as you see fit.  

When you are done, you will submit your makefile (complete with an object for pet, driver, the executable, and a clean command), pet.h, pet.cpp, and driver.cpp  

### Instructions  
<ins>_Step 1_</ins>  
In pet.h, define the Pet class properties:  
_string species_  


<ins>_Step 2_</ins>  
In pet.h, define the Pet class methods:  
_bool getSpecies()_    
_void setSpecies(string)_    
_void printNameAndSpecies()_  

Don't forget that getters and setters and any other method we want main to access should be public, but properties should not!  

<ins>_Step 3_</ins>  
In pet.cpp, implement the class methods from step 2. In other words, *write your code for the functions in this file*. #include any necessary files or libraries.  

Please note, in the future on assignments and labs, the documentation will list properties, but tell you to "implement the getters and setters" without telling you their name. The convention is getPropertyName and setPropertyName when writing getters and setters- as seen in the code provided to you and the instructions provided to you here. Getters should always just return the property named by the method, and setters should always fill a class property with the value passed to the method. You will need to write printNameSpeciesAndAge and it should display the pet name and species on its own line (endl); see example output below.  

```
Gaston Canine   
Filbert Feline   
```

Don't forget your namespace on each method, and don't forget to add a space and new line to your print statement.  

<ins>_Step 4_</ins>   
Construct a makefile. It should include a clean command, code to create driver.o and pet.o, and code to create the executable _pet\_lab_  

<ins>_Step 5_</ins>  
Alter the driver so that you have code written to address each of the pseudocode comments. For example, one of the comments says "create an instance of pet that is has the name Filbert and is of species Feline". Write the code to create the pet object and fill the species and name with the appropriate variables.  



Ensure that all your code, .o files, makefile, and executable has been added to git, and then commit and push your code to Github. If you don't remember how to submit to github, please review your first lab. Submit your github repo link on WebCampus.   
