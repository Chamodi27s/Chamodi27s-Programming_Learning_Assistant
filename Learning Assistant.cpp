#include<stdio.h>
#include<stdlib.h>

void showWelcomeMessage(){
	printf("\n **** WELCOME TO THE C PROGRAMMING LEARNING ASSISTANT!****\n");
}
void showMenu(){
	printf("1. Variables\n");
	printf("2. Data Types\n");
	printf("3. Operators\n");
	printf("4. Control Statements\n");
	printf("5. Loops\n");
	printf("6. Functions\n");
	printf("7. Arrays\n");
	printf("8. Pointers\n");
	printf("9. Quiz\n");
	printf("10. Exit\n");
	printf("\nSelect a topic (1-10): ");
}
void askMoreInfo() {
    char response;
    printf("Do you want more information? (y/n): ");
    scanf(" %c", &response);
    while (getchar() != '\n'); 

    if (response == 'y' || response == 'Y') {
        printf("Refer to the link below:\n");
        printf("http://programhub.io\n");
    } else {
        printf("Returning to the menu...\n");
    }
}
void explainVariables(){
	printf("\nVariables are used to store data in programming.\n");
	printf("They hold values that can be used and modified during execution.\n");
	printf("Example:\n");
	printf("int num = 10; //Integer variable\n");
	printf("float price = 99.99; //Floating-point variable\n");
	printf("char letter = 'A'; //Character variable\n");
	askMoreInfo();
}
void explainDataTypes(){
	printf("\nOperators perform operations on variables and values.\n");
	printf("Common data types in C:\n");
	printf("1. int - Stores integers\n");
	printf("2. float - Stores decimal numbers\n");
	printf("3. char - Stores single characters\n");
	printf("4. double - Stores double-precision floating-point numbers\n");
	askMoreInfo();
}
void explainOperators(){
	printf("\nOperators perform operations on variables and values.\n");
	printf("Examples:\n");
	printf("Addition: int sum = a+b;\n");
	printf("Comparison: if (a>b)\n");
	printf("Logical: if(a>5 && b<10)\n");
	askMoreInfo();
}
void explainControlStatements(){
	printf("\nControl Statements control the flow of execution.\n");
	printf("1. if-else: Used for decision making\n");
	printf("Example:\nif (a>b){printf(\"A is greater\");}else{printf(\"B is greator\");}\n");
	printf("2.switch: Used for multiple conditions\n");
	printf("Example:\nswitch(choice){\n case 1:\n printf(\"One\");\n break;\n default:\n printf(\"Other\");\n}\n");
	askMoreInfo();
}
void explainLoops(){
	printf("\nLoops allow repeating a block of code multiple times.\n");
	printf("1. For Loop:\nfor (int i = 0; i<5; i++){printf(\"%d \",i);}\n");
	printf("2. While Loop: \nwhile (i<5){printf(\"%d\",i);i++;}\n");
	printf("3. Do-While Loop: \ndo {printf(\"%d\",i);i++;}while(i<5);\n");
	askMoreInfo();
}
void explainFunctions() {
    printf("\nFunctions allow code reuse and better structure.\n");
    printf("Example:\nint add(int a, int b) { return a + b; }\n");
    printf("Calling the function: int sum = add(5, 3);\n");
    askMoreInfo();
}


void explainArrays() {
    printf("\nArrays store multiple values of the same type.\n");
    printf("Example:\nint numbers[5] = {1, 2, 3, 4, 5};\n");
    askMoreInfo();
}


void explainPointers() {
    printf("\nPointers store memory addresses.\n");
    printf("Example:\nint a = 10; int *p = &a; // Pointer p stores address of a\n");
    askMoreInfo();
}
void quiz(){
	int answer, score = 0;
	printf("\n====Quiz Section====\n");
	
	printf("Q1: What keyword is used to define an integer variable in C?\n");
    printf("1. define\n2. var\n3. int\n4. let\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 3. int\n");
    }

    printf("\nQ2: Which loop executes at least once, even if the condition is false?\n");
    printf("1. for loop\n2. while loop\n3. do-while loop\n4. None\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 3. do-while loop\n");
    }
    printf("\nQ3: What is the correct syntax for defining a function in C?\n");
    printf("1. function myFunc()\n2. int myFunc()\n3. def myFunc()\n4. void myFunc[]\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 2. int myFunc()\n");
    }

    printf("\nQ4: How do you access the first element of an array named 'arr'?\n");
    printf("1. arr(0)\n2. arr[1]\n3. arr{0}\n4. arr[0]\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 4. arr[0]\n");
    }

    printf("\nQ5: What is the correct way to declare a pointer in C?\n");
    printf("1. int* p;\n2. pointer p;\n3. *int p;\n4. int p*;\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect! The correct answer is 1. int* p;\n");
    }

    printf("\nYour final score: %d/5\n", score);
    if (score == 5) {
        printf("Excellent! You got all correct.\n");
    } else if (score >= 3) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("You need more practice. Keep learning!\n");
    }

}

int main() {
    int choice;
    showWelcomeMessage();
    do {
        showMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                explainVariables();
                break;
            case 2:
                explainDataTypes();
                break;
            case 3:
                explainOperators();
                break;
            case 4:
                explainControlStatements();
                break;
            case 5:
                explainLoops();
                break;
            case 6:
                explainFunctions();
                break;
            case 7:
                explainArrays();
                break;
            case 8:
                explainPointers();
                break;
            case 9:
                quiz();
                break;
            case 10:
                printf("\nThank you for using the learning assistant!\n");
                break;
            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    } while (choice != 10);
    
    return 0;
}

	

